#? stdlib
`clip` <- function (x1, x2, y1, y2) 
invisible(.External.graphics(C_clip, x1, x2, y1, y2))

# Examples
x <- rnorm(1000)
hist(x, xlim = c(-4,4))
usr <- par("usr")
clip(usr[1], -2, usr[3], usr[4])
hist(x, col = 'red', add = TRUE)
clip(2, usr[2], usr[3], usr[4])
hist(x, col = 'blue', add = TRUE)
do.call("clip", as.list(usr))  # reset to plot region

