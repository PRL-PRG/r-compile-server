# Saner makefile
MAKEFLAGS += --no-builtin-rules

# Install pre-commit and pre-push hooks
setup:
	cp -f .githooks/pre-commit.sh .git/hooks/pre-commit
