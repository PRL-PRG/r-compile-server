compiler::enableJIT(0)

dyn.load('test.so')
cp <- readRDS('test.RDS')
env <- as.environment(list(n=1000000))
parent.env(env) <- globalenv()

mine <- function() .Call('f_623453645', env, cp, '623453645')
ast <- function (n=env$n) {
            s <- 0
            i <- 0
            while (i < n) {
              s <- s + i
              i <- i + 1
            }
            s
          }

bc <- compiler::cmpfun(ast, options=list(optimize=3))

microbenchmark::microbenchmark(mine(), ast(), bc(), times=10)
