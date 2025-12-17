fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st defaultPrototype = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _defaultPrototype:*, reg _defaultPrototype1:V |
    mkenv;
    _defaultPrototype = ld `.defaultPrototype`;
    check L0() else D0();
  D0():
    deopt 0 [_defaultPrototype];
  L0():
    _defaultPrototype1 = force? _defaultPrototype;
    checkMissing(_defaultPrototype1);
    popenv;
    return _defaultPrototype1;
  }
}