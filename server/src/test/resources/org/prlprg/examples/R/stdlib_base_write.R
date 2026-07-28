#? stdlib
`write` <- function (x, file = "data", ncolumns = if (is.character(x)) 1 else 5, 
    append = FALSE, sep = " ") 
cat(x, file = file, sep = c(rep.int(sep, ncolumns - 1), "\n"), 
    append = append)

# Examples
# Demonstrate default ncolumns, writing to the console
write(month.abb,  "")  # 1 element  per line for "character"
write(stack.loss, "")  # 5 elements per line for "numeric"

# Build a file with sequential calls
fil <- tempfile("data")
write("# Model settings", fil)
write(month.abb, fil, ncolumns = 6, append = TRUE)
write("\n# Initial parameter values", fil, append = TRUE)
write(sqrt(stack.loss), fil, append = TRUE)
if(interactive()) file.show(fil)
unlink(fil) # tidy up

