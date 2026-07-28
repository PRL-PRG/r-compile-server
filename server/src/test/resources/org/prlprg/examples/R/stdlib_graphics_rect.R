#? stdlib
`rect` <- function (xleft, ybottom, xright, ytop, density = NULL, angle = 45, 
    col = NA, border = NULL, lty = par("lty"), lwd = par("lwd"), 
    ...) 
{
    if (is.numeric(density) && all(is.na(density) | density < 
        0)) 
        density <- NULL
    if (!is.null(density) && !is.null(angle)) {
        if (is.logical(border) && !is.na(border)) {
            border <- if (border) 
                col
            else NA
        }
        n <- range(length(xleft), length(xright), length(ybottom), 
            length(ytop))
        if (n[1L] == 0) 
            stop("invalid rectangle specification")
        n <- n[2L]
        x <- rbind(rep.int(NA, n), xleft, xright, xright, xleft)[-1L]
        y <- rbind(rep.int(NA, n), ybottom, ybottom, ytop, ytop)[-1L]
        polygon(x, y, col = col, border = border, lty = lty, 
            lwd = lwd, density = density, angle = angle, ...)
    }
    else .External.graphics(C_rect, as.double(xleft), as.double(ybottom), 
        as.double(xright), as.double(ytop), col = col, border = border, 
        lty = lty, lwd = lwd, ...)
    invisible()
}

# Examples
require(grDevices)
## set up the plot region:
op <- par(bg = "thistle")
plot(c(100, 250), c(300, 450), type = "n", xlab = "", ylab = "",
     main = "2 x 11 rectangles; 'rect(100+i,300+i,  150+i,380+i)'")
i <- 4*(0:10)
## draw rectangles with bottom left (100, 300)+i
## and top right (150, 380)+i
rect(100+i, 300+i, 150+i, 380+i, col = rainbow(11, start = 0.7, end = 0.1))
rect(240-i, 320+i, 250-i, 410+i, col = heat.colors(11), lwd = i/5)
## Background alternating  ( transparent / "bg" ) :
j <- 10*(0:5)
rect(125+j, 360+j,   141+j, 405+j/2, col = c(NA,0),
     border = "gold", lwd = 2)
rect(125+j, 296+j/2, 141+j, 331+j/5, col = c(NA,"midnightblue"))
mtext("+  2 x 6 rect(*, col = c(NA,0)) and  col = c(NA,\"m..blue\")")

## an example showing colouring and shading
plot(c(100, 200), c(300, 450), type= "n", xlab = "", ylab = "")
rect(100, 300, 125, 350) # transparent
rect(100, 400, 125, 450, col = "green", border = "blue") # coloured
rect(115, 375, 150, 425, col = par("bg"), border = "transparent")
rect(150, 300, 175, 350, density = 10, border = "red")
rect(150, 400, 175, 450, density = 30, col = "blue",
     angle = -30, border = "transparent")

legend(180, 450, legend = 1:4, fill = c(NA, "green", par("fg"), "blue"),
       density = c(NA, NA, 10, 30), angle = c(NA, NA, 30, -30))

par(op)

