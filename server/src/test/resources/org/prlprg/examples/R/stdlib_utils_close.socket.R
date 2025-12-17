#? stdlib
`close.socket` <- function (socket, ...) 
.Call(C_sockclose, socket$socket)
