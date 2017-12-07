# Data Structure

## 알고리즘

문제를 해결하기 위한 방법 또는 **절차**

### 알고리즘의 조건

* 명확성
* 수행 가능성
* 유한성
* 0개 이상의 입력
* 1개 이상의 출력

---

#### 명확성

코드가 명확하게 어떻게 돌아가는지 알 수 있어야 한다.

---

#### 수행 가능성

코드가 실제로 수행 가능해야 한다.

---

#### 유한성

무한루프가 돌지 않아야 한다.

---

#### 0개 이상의 입력

최소한 **0개 이상의 입력**이 존재해야한다.


---

#### 1개 이상의 출력

최소한 **1개 이상의 출력**이 존재해야한다.

---

## 그래프

* Kruskal
* Prim
* Sollin
* DFS (깊이 우선탐색)
* BFS (너비 우선탐색)

----

#### Kruskal

그래프에서 **가중치가 가장 작은 순서대로 선택**하는 방법

#### Prim

**노드의 간선 중에서 작은 것부터 선택**하는 방법

#### Sollin

**남는 노드 없이 간선**을 연결하는 방법

---

#### Kruscal, Prim, Sollin

* 신장트리는 모두 같다
    * 가중치의 합이 같다
* 순서는 다르다

---

#### DFS (깊이 우선탐색)

* 스택 사용
* 백트래킹 발생
* 미로 탐색

```c
#include <stdio.h>

int arr[6][6];
char visited[2][6]={'A','B','C','D','E','F',
					'F','F','F','F','F','F'};
				
void dfs(int v);
	
int main()
{
	int i,j,n;
	
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
			scanf("%d",&arr[i][j]); // 0과 1만 입력받아야 정상 작동
	
	printf("\nStart node => ");
	scanf("%d",&n);
	
	dfs(n);
}

void dfs(int v)
{
	int j;
	
	if(visited[1][v] == 'F')
	{
		visited[1][v] = 'T';
		printf("%c ",visited[0][v]);
	}
	for(j=0;j<6;j++)
		if(arr[v][j] == 1 && visited[1][j] == 'F')
			dfs(j);
			
	return;
}
```

|   |a|b|c|d|e|f|
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
|**a**|0|1|0|0|1|1|
|**b**|1|0|1|1|0|0|
|**c**|0|1|0|1|0|0|
|**d**|0|1|1|0|0|0|
|**e**|1|0|0|0|0|1|
|**f**|1|0|0|0|1|0|

(입력 시에 사용해도 좋을 DFS 표이다.)

#### BFS (너비 우선 탐색)

* 큐 사용
* 백트래킹이 발생하지 않음
* 최단거리 탐지에 사용

필요로 하는 최소의 큐 크기는 **n-1** 이다.

---
#### DFS, BFS

알파벳 순서대로 오름차순 (↑), 내림차순 (↓)에 따라 탐색을 실행한다.

---

### 시간 복잡도

**O(n)** 과 같이 표현하며 프로그램에서 **시간 복잡도가 가장 큰 것만** 표기한다.

* 이중 for문 : O(n²)
```c
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        sum += i;
```

* 단일 for문 : O(n)
```c
for(i=0;i<n;i++)
    sum += i;
```

* 분할 정복 : O(logn)
    * 정렬
    * 하노이 알고리즘
    * 트리 구조

* 단일 (또는 다중) 계산 : O(1)
<br>-> 연산은 빠른 속도로 진행되기 때문에 모든 연산을 1로 보아도 된다.

```c
sum = n*(n+1)/2;
```

위의 코드가 for문 내에서 돌아간다고 치면 for문이 한번 돌 때 연산은 한 번만 진행되기 때문에 시간 복잡도는 O(n)이 아닌 O(1) 이다.

---
### Hanoi

#### 조건

1. 큰 원판 위에 작은 원판만 올 수 있다.
2. **한 번에 하나의 원판만** 이동할 수 있다.

|원판 개수|이동 횟수|
|:-:|:-:|
|1|1|
|2|3|
|3|7|
|...|...|
|n|2ⁿ-1|

하노이 원판 이동 횟수

= 완전이진트리의 최대 노드 개수

= 포화 이진트리의 노드 개수

```c
#include <stdio.h>

int hanoi(int x);

int main()
{
	int n;
	
	scanf("%d",&n);
	printf("%d ",hanoi(n));
	
	return 0;
}

int hanoi(int x)
{
	if(x==1) return 1;
	
	return hanoi(x-1)+1+hanoi(x-1);
}
```
```c
#include <stdio.h>

void hanoi(int x, char sc, char mc, char dc);

int main()
{
	int n;
	
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	
	return 0;
}

void hanoi(int x, char sc, char mc, char dc)
{
	if(x==0) return;
	
	hanoi(x-1,sc,dc,mc);
	printf("%d : %c -> %c\n", x, sc, dc);
	hanoi(x-1,mc,sc,dc);
}
```

```c
if(x==1) return 1;
```
```c
if(x==0) return;
```
위의 `if`문들은 알고리즘 조건 중에서 **유한성**을 만족시켜주는 조건문이다.

---

### Red Black Tree

* 모든 노드는 **Red** 노드 혹은 **Black** 노드 이다.
* 루트노드는 항상 **Black** 노드
* 리프노드는 항상 **Black** 노드
* **Red** 노드의 자식노드는 항상 **Black** 노드
* 어떤 노드로부터 모든 리프노드까지 경로는 **Black** 노드 개수가 동일

