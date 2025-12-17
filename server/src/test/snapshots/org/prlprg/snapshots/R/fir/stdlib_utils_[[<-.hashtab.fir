fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1082141030;
    st `[[<-.hashtab` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1082141030(h, key, `...`, value) {
  (reg h:*, reg key:*, reg ddd:dots, reg value:*) -+> V { var h:*, var key:*, var `...`:dots?, var value:*, reg sethash:cls, reg h1:*, reg h2:V, reg p:p(V +), reg key1:*, reg key2:V, reg p1:p(V +), reg value1:*, reg value2:V, reg p2:p(V +), reg r3:V, reg h3:*, reg h4:V |
    mkenv;
    st h = h;
    st key = key;
    st `...` = ddd;
    st value = value;
    sethash = ldf sethash;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      h1 = ld h;
      h2 = force? h1;
      checkMissing(h2);
      return h2;
    };
    p1 = prom<V +>{
      key1 = ld key;
      key2 = force? key1;
      checkMissing(key2);
      return key2;
    };
    p2 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r3 = dyn sethash(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    h3 = ld h;
    check L2() else D2();
  D2():
    deopt 6 [h3];
  L2():
    h4 = force? h3;
    checkMissing(h4);
    popenv;
    return h4;
  }
}