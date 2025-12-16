#? stdlib
`confint` <- function (object, parm, level = 0.95, ...) 
UseMethod("confint")

# Examples
fit <- lm(100/mpg ~ disp + hp + wt + am, data = mtcars)
confint(fit)
confint(fit, "wt")

## from example(glm)
counts <- c(18,17,15,20,10,20,25,13,12)
outcome <- gl(3, 1, 9); treatment <- gl(3, 3)
glm.D93 <- glm(counts ~ outcome + treatment, family = poisson())
confint(glm.D93) 
confint.default(glm.D93)  # based on asymptotic normality
