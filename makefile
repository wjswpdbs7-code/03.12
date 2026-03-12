#
# Makefile
# 역할: 여러 예제 프로그램을 한 번에 빌드하도록 정의된 간단한 Makefile
# 배경지식: `make`는 타겟과 규칙을 보고 필요한 파일을 컴파일하거나 명령을 실행합니다.
# 사용법: 터미널에서 `make`를 실행하면 `all` 타겟에 정의된 프로그램들이 빌드됩니다.
#
SRCS = ${wildcard *.c}
TARGET = ${SRCS:.c=}

all: ${TARGET}

clean :
		rm ${TARGET}