fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.methodsIsLoaded` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg isTRUE:cls, reg _saveImage:*, reg _saveImage1:V, reg p:p(V +), reg r1:V |
    mkenv;
    isTRUE = ldf isTRUE;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      _saveImage = ld `.saveImage`;
      _saveImage1 = force? _saveImage;
      checkMissing(_saveImage1);
      return _saveImage1;
    };
    r1 = dyn isTRUE(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    popenv;
    return r1;
  }
}