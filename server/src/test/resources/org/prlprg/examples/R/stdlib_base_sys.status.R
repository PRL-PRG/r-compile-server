#? stdlib
`sys.status` <- function () 
list(sys.calls = sys.calls(), sys.parents = sys.parents(), sys.frames = sys.frames())
