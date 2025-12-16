fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `nameOfClass.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:* |
    mkenv;
    st x = x;
    popenv;
    return NULL;
  }
}