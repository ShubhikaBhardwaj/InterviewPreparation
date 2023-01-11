class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        unordered_set<int> rowIndex, colIndex;

        for(int i=0;i<matrix.len();i++)
        {
            for(int j=0;j<matrix.length();j++)
            {
                if (matrix[i][j]==0)
                {
                    rowIndex.insert(i);
                    colIndex.insert(j);
                }

            }
        }

        for(int i=0;i<matrix.length();i++)
        {
            for(int j=0;j<matrix.length();j++)
            {
                if(rowIndex.find(i)!=rowIndex.end() || colIndex.find(j)!=colIndex.end())
                {
                    matrix[i][j]=0;
                }
            }
        }



    }
};

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      
      bool isCol = false;

      for(int i=0;i<matrix.size();i++)
      {  if(matrix[i][0]==0)
            isCol=true;
          for(int j=1;j<matrix[0].size();j++)
          {
              if(matrix[i][j]==0)
              {
                matrix[i][0]=0;
                matrix[0][j]=0;
              }   
          }
      }

      for(int i=matrix.size()-1;i>=0;i--)
      {
          for(int j=matrix[0].size()-1;j>0;j--)
          {

             if(matrix[i][0]==0||matrix[0][j]==0)
              {
                
                matrix[i][j]=0;
              }

          }

          if(isCol==true)
          matrix[i][0]=0;
      }

    }

};


