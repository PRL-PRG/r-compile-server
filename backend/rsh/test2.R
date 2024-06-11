devtools::load_all()

f <- function(a, x=xyz(), b) .External2(rsh:::C_call_fun3)

f(b=doesNotExit())
