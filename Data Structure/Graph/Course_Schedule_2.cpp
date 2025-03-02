

vector<int> topo_logical_sort(unordered_map<int, vector<int>> &adj, vector<int> &inDegree, int n)
{
   queue<int> que;

   vector<int> result;
   int count = 0;

   // step 1 : count indegree
   for (int i = 0; i < n; i++)
   {
      if (inDergree[i] == 0)
      {
         result.push_back(i);
         count++;
         que.push(i);
      }
   }

   while (!que.empty())
   {
      int u = que.front();
      que.pop();

      for (int &v : adj[u])
      {
         inDegree[v]--;

         if (inDegree[v] == 0)
         {
            result.push_back(v);
            count++;
            que.push(v);
         }
      }
   }

   if (count == n)
      return result;

   return {};
}
vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
{

   unordered_map<int, vector<int>> adj
       vector<int>
           inDegree(numCourses, 0);

   for (auto &vec : prerequisites)
   {

      int a = vec[0];
      int b = vec[1];

      // arrow b --> a me ja raha ha
      adj[b].push_back(a);

      inDegree[a]++;
   }

   return topo_logical_sort(adj, inDegree, numCourses);
}