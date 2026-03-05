library(rcp)
library(splines)

stopifnot(!rcp::rcp_is_compiled(splines::bs))
stopifnot(!rcp::rcp_is_compiled(bs))

rcp_cmppkg("splines")

stopifnot(rcp::rcp_is_compiled(splines::bs))
stopifnot(rcp::rcp_is_compiled(bs))

x <- as.environment("package:splines")
stopifnot(rcp::rcp_is_compiled(x$bs))

y <- getNamespace("splines")
stopifnot(rcp::rcp_is_compiled(y$bs))
