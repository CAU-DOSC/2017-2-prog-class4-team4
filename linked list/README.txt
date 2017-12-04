# README file for TEAM[4,4]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

<목표>
입력된 여러 개의 정수를 연결리스트를 사용하여 다양한 방법으로 저장된 값을 출력한다.

<프로젝트 요약>

 1. 정수값을 입력 받는다(CTRL-Z 가 입력될 때까지 입력받음)
 2. 입력되는 정수값은 linked list를 구성 하면서 node에 저장
 3. 출력값 - 입력자료의 개수 출력 
	   - 입력자료의 입력 역순 출력
	   - 입력자료의 중간위치 값 출력
	   - 입력자료를 입력순으로 출력
	   - 입력자료에서 홀수번째 자료 삭제
	   - 남은 자료를 순서대로 출력

< ownership >

readme - 이찬영(chan0139)
header - 박소현(carriesue)
main - 유승훈(ysh4296)
library - 김병주(superbottlegod), 최승원(seung1)


< fuction descriptions >

name : createNode		
input parameter : value
output parameter : cur

name : append
input parameter : head, cur
output parameter : head

name : nodeNum
input parameter : head
output parameter : cnt

name : reverse
input parameter : head
output parameter : void

name : midNum
input parameter : head
output parameter : void

name : print
input parameter : head
output parameter : void

name : oddlt
input parameter : head
output parameter : head


< Declaration of important data and data types in user header file>

파일명 - header.h

사용된 헤더파일 - <stdio.h>, <stdlib.h>, <string.h>

데이터 형식 - struct linked_list

구조체 안의 데이터 - int n, struct linked_list *next

main에 사용할 함수 선언 - createNode, append, nodeNum, reverse, midNum, print, oddlt

< Team's brief idea >

- 

