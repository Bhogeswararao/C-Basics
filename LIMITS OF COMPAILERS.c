#include<limits.h>
int main()
{
	printf("shortint:signed:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("shortint:unsigned:%hu to %hu\n",0,USHRT_MAX);
	printf("int:signed:%d to %d\n",INT_MIN,INT_MAX);
	printf("int:unsigned:%u to %u\n",UINT_MAX);
	printf("longint:signed:%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("longint:unsigned:%lu to %lu\n",0,ULONG_MAX);
	printf("longlongint:signed:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("longlongint:unsigned:%llu to %llu \n",0,ULONG_LONG_MAX);
}
