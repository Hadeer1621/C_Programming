 /*
 * Name       :   Array_program.c  
 * Author     :   hadeer 
 * Version    :
 * created on :   05 Nov 2022
 *
 */
 
/***
 *         _                                                                              
 *        / \   _ __ _ __ __ _ _   _      _ __  _ __ ___   __ _ _ __ __ _ _ __ ___    ___ 
 *       / _ \ | '__| '__/ _` | | | |    | '_ \| '__/ _ \ / _` | '__/ _` | '_ ` _ \  / __|
 *      / ___ \| |  | | | (_| | |_| |    | |_) | | | (_) | (_| | | | (_| | | | | | || (__ 
 *     /_/   \_|_|  |_|  \__,_|\__, _____| .__/|_|  \___/ \__, |_|  \__,_|_| |_| |_(_\___|
 *                             |___|_____|_|              |___/                           
 */
 
#include "Array_interface.h"


static void SwapElment(u8ptr s1, u8ptr s2){
	 u8 temp ;
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	/*
	 another swap way  
     *s1 = *s1 ^ *s2;
	 *s2 = *s1 ^ *s2;
	 *s1 = *s1 ^ *s2;
	*/
} 

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
/*============================================================================================*/
/*==============================START_FUNCTION_======================================*/

/*  1- print array */ 

  void Traverse(u8 arr[], char size){
	  
	  for(u8 i=0 ; i < size ; i++){
		  printf("arr[%d]= %d\n " , i , arr[i]);
		
	  }
	    printf("------------\n");
  }
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/ 

/*  2- insert element of array*/     
   u8 Insert(u8 arr[], char index,char data,u8ptr size){
		 
	   if (index == *size)     // if index equal size value return 0
		   return 0;
	   for( u32 i = *size - 1 ; i>= index ; i--){
		   arr[i+1] = arr[i];
	   }
	   arr[index] = data ;
	   *size = *size +1;
	   return 1 ;
   }
/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/ 

/*  3-  delete element of array*/ 
   void Delete(u8 arr[], char index, u8ptr size){
	   for (; index < *size; index++) {
		arr[index] = arr[index + 1];
	}
	*size = *size - 1;
   }
/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/    
   
/*  4- reverse of array*/  /*Rememer it &study it */
  void Reverse (u8 arr[], char size){
	    int aux[size];
 
    for (int i = 0; i < size; i++) {
        aux[size - 1 - i] = arr[i];
    }
 
    for (int i = 0; i < size; i++) {
        arr[i] = aux[i];
    }
  }
/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/    
/*  5- sorting of array */
  void sort(u8 arr[],char size){
	for(u32 i=0; i<size; i++)
    {
        /* 
         * Place currently selected element array[i]
         * to its correct place.
         */
        for(u32 j=i+1; j<size; j++)
        {
            /* 
             * Swap if currently selected array element
             * is not at its correct position.
             */
            if(arr[i] > arr[j])
            {
               SwapElment(&arr[i], &arr[j]);
            }
        }
    }  
	
  }
/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/  
  
/*  6- delete dulicate of array delete sorting  */  /*find the problem in it */
void Delete_Dup(u8 arr[], u8ptr size){
u32  i, j,  k ;	
   for(i=0; i< *size; i++){
		 for(j=i+1; j< *size; j++)
        {
            if(arr[i] > arr[j])
            { /* Delete the current duplicate element */
            
			for(k=j ; k< *size-1;k++){
				arr[k]= arr[k+1];
			}
			/* Decrement size after removing duplicate element */
                *size--;
		    /* If shifting of elements occur then don't increment j */
                j--;
            }
      }
   }
}

  
 /*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/   

/*  7- search on element of array */ 
    u8  Search(u8 arr[], char data, char size){
	for (int i = 0; i < size; i++)
		if (data == arr[i])
			return arr[i];
	return 0;
  }
  /*==============================END_FUNCTION_======================================*/ 
int iterativeBinarySearch(u8 array[], u8 start_index, u8 end_index, u8 element){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/ 

/* 8- repeat the element of array */ 
  u8 Get_max_repeat(u8 arr[] , u8ptr size){
	  u32  i , j , count = 1 , max_element ;
	  u32  max_count = 0;
	  /*Searches for duplicate element*/ 
	for(i=0; i<*size ; i++){
		for (j= i+1 ; j<*size ; j++){
			if(arr[i] == arr[j]){   /* If any duplicate found */
				count++;
				if (count > max_count){
					max_element = arr[j];
				}
			}
		}
	}
	return max_element ;
  }
/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/
  
/* 9- averge of array  */
f32 average (f32  arr[] , u8ptr size){
	f32 sum = 0.0  , avg ;
	u32 i ; 
	for (i= 0 ; i< *size ; i++){
		sum += arr[i];
	}
	
	printf("sum = %.1f \n" , sum);
	avg = sum / *size ;

  return avg ;
}

/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/

/* 10- min and max of element in array */
void Min_Max(u8 arr[] ,u8ptr size){
	u8 i , max , min , index_min = -1 , index_max = -1;
	min = max = arr[0];
	for (i=0; i< *size ;i++){
		if(arr[i]<= min)   {
			min = arr[i] ;
			index_min = i;
		}
		if (arr[i] > max){
			max = arr[i];
			index_max = i;
					}
	}
	printf("max of array = %d\tindex of =%d\n" ,max,index_max);
	printf("min of array = %d\tindex of =%d\n" , min ,index_min);	
}


/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/

void Update(u8 arr[], char index, char data, char size) {
	arr[index] = data;
}

/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/

int Compare (char arr1[] ,char arr2[] ,char size){
 for(int i = 0 ; i<= size ; i++){
	 if(arr1[i]!= arr2[i])
			return 1;
 }
 return 0;
}

/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/  
  
 int countElement(int arr[], int num, int size)  // repeat element into array or not
{
    int occr = 0;

 	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num)
		{
			occr++;
		}
	}

	printf("%d Occurred %d Times.\n", num, occr);
} 

/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/

void DuplicateUnsorted(int arr[] , int length){
	
    //Searches for duplicate element
  for(int i = 0; i <=length - 1; i++){
      int count = 1;
      for(int j = i+1; j <length; j++){
         if(arr[i] == arr[j]){
            count++;
            arr[j] = -1;
         }
      }
      if(count > 1 && arr[i] != -1){
          printf("%d is appearing: %d times\n", arr[i], count);
      }
   }	

}
/*==============================END_FUNCTION_======================================*/  
/*==============================START_FUNCTION_======================================*/

 void ReverseString (char * str){
     int i , len , temp ;
     len = strlen(str);
     for(i=0 ; i<len/2 ;i++){
        temp = str[i];
        str[i]= str[len-i-1];
        str[len-i-1] = temp;
     }
  }
  

void RepeatUnsorted(int arr[],int size){	
	for(int i=0;i<size-1;++i){
		  int count =1;
		for(int j= i+1;j<size;++j){
		  if(arr[i] == arr[j]){
			  count++;
			  arr[j]=1;
		  }
		}			

	
	if(count >1 && arr[i] != 1){
	
	
	 printf(%d is repeat%d\n,arr[i],count)
	}
	
	
	}	
	
}



int Sum (int arr[] , int size ){
int sum = 0 ;
for(int i=0;i<size;++i){
	sum+=arr[i];
}	
return sum ;	
}