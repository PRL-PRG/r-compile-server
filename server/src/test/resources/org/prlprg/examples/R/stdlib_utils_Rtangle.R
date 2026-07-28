#? stdlib
`Rtangle` <- function () 
{
    list(setup = RtangleSetup, runcode = RtangleRuncode, writedoc = RtangleWritedoc, 
        finish = RtangleFinish, checkopts = RweaveLatexOptions)
}

# Examples
nmRnw <- "example-1.Rnw"
exfile <- system.file("Sweave", nmRnw, package = "utils")
## Create R source file
Stangle(exfile)
nmR <- sub("Rnw$", "R", nmRnw) # the (default) R output file name
if(interactive()) file.show("example-1.R")
file.rename("example-1.R", "example-1_def.R")
## Smaller R source file with custom annotation:
my.Ann <- function(options, chunk, output) {
  cat("### chunk #", options$chunknr, ": ",
      if(!is.null(ol <- options$label)) ol else .RtangleCodeLabel(chunk),
      if(!options$eval) " (eval = FALSE)", "\n",
      file = output, sep = "")
}
Stangle(exfile, annotate = my.Ann)
if(interactive()) file.show("example-1.R")
file.rename("example-1.R", "example-1_myA.R")
Stangle(exfile, annotate = my.Ann, drop.evalFALSE=TRUE)
if(interactive()) file.show("example-1.R")
file.rename("example-1.R", "example-1_myA-noF.R")

