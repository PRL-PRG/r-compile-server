#? stdlib
`strwidth` <- function (s, units = "user", cex = NULL, font = NULL, vfont = NULL, 
    ...) 
{
    if (!is.null(vfont)) 
        vfont <- c(typeface = pmatch(vfont[1L], Hershey$typeface), 
            fontindex = pmatch(vfont[2L], Hershey$fontindex))
    .External.graphics(C_strWidth, as.graphicsAnnot(s), pmatch(units, 
        c("user", "figure", "inches")), cex, font, vfont, ...)
}

# Examples
str.ex <- c("W","w","I",".","WwI.")
op <- par(pty = "s"); plot(1:100, 1:100, type = "n")
sw <- strwidth(str.ex); sw
all.equal(sum(sw[1:4]), sw[5])
#- since the last string contains the others

sw.i <- strwidth(str.ex, "inches"); 25.4 * sw.i  # width in [mm]
unique(sw / sw.i)
# constant factor: 1 value
mean(sw.i / strwidth(str.ex, "fig")) / par('fin')[1]  # = 1: are the same

## See how letters fall in classes
##  -- depending on graphics device and font!
all.lett <- c(letters, LETTERS)
shL <- strheight(all.lett, units = "inches") * 72  # 'big points'
table(shL)  # all have same heights ...
mean(shL)/par("cin")[2] # around 0.6

(swL <- strwidth(all.lett, units = "inches") * 72)  # 'big points'
split(all.lett, factor(round(swL, 2)))

sumex <- expression(sum(x[i], i=1,n), e^{i * pi} == -1)
strwidth(sumex)
strheight(sumex)

par(op)  #- reset to previous setting

