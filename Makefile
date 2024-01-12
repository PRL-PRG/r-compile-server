# Maven commands
# ---
build:
	mvn $(MVN_ARGS) package

format:
	mvn $(MVN_ARGS) spotless:apply

# `test` only runs unit tests
test:
	mvn $(MVN_ARGS) test

# `verify` runs both tests and static analyses
verify:
	mvn $(MVN_ARGS) verify

clean:
	mvn $(MVN_ARGS) clean
# ---

# Install pre-commit and pre-push hooks
setup:
	cp -f .githooks/pre-commit.sh .git/hooks/pre-commit
	cp -f .githooks/pre-push.sh .git/hooks/pre-push
