TARGET=talk

all:
	xelatex -shell-escape ${TARGET}
	xelatex -shell-escape ${TARGET}
	make cleanup

cleanup:
	rm ${TARGET}.aux ${TARGET}.log ${TARGET}.nav ${TARGET}.out ${TARGET}.snm ${TARGET}.toc ${TARGET}.vrb
	rm -r _minted-talk
