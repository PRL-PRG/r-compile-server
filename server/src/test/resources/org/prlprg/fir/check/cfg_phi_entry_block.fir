fun main {
    () --> I { |
        # cfg-error: Entry block cannot have phi parameters
        bb0(phi r1:I):
            return r1;
    }
}