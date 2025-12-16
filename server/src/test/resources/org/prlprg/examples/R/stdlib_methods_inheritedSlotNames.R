#? stdlib
`inheritedSlotNames` <- function (Class, where = topenv(parent.frame())) 
{
    ext <- if (isClassDef(Class)) 
        Class@contains
    else if (isClass(Class, where = where)) 
        getClass(Class, where = where)@contains
    supcl <- .selectSuperClasses(ext, namesOnly = FALSE)
    supdefs <- lapply(supcl, function(s) {
        getClassDef(s@superClass, package = packageSlot(s))
    })
    unique(unlist(lapply(supdefs, slotNames), use.names = FALSE))
}

# Examples
.srch <- search()
library(stats4)
inheritedSlotNames("mle")

if(require("Matrix", quietly = TRUE)) withAutoprint({
  inheritedSlotNames("Matrix")       # NULL
  ## whereas
  inheritedSlotNames("sparseMatrix") # --> Dim & Dimnames
  ##  i.e. inherited from "Matrix" class
  cl <- getClass("dgCMatrix")        # six slots, etc
  inheritedSlotNames(cl) # *all* six slots are inherited
})


