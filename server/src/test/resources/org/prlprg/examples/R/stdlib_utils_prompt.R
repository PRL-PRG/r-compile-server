#? stdlib
`prompt` <- function (object, filename = NULL, name = NULL, ...) 
UseMethod("prompt")

# Examples
require(graphics)
oldwd <- setwd(tempdir())
prompt(plot.default)
prompt(interactive, force.function = TRUE)
unlink("plot.default.Rd")
unlink("interactive.Rd")

prompt(women) # data.frame
unlink("women.Rd")

prompt(sunspots) # non-data.frame data
unlink("sunspots.Rd")

setwd(oldwd)



