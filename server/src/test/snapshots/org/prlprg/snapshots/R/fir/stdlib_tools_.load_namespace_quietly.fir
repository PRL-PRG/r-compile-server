fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2500306237;
    st `.load_namespace_quietly` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2500306237(package, `lib.loc`) {
  (reg package:*, reg lib_loc:*) -+> V { var package:*, var `lib.loc`:*, reg package1:*, reg package2:V, reg r:V, reg c:L, reg _try_quietly:cls, reg loadNamespace:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st package = package;
    st `lib.loc` = lib_loc;
    package1 = ld package;
    check L1() else D0();
  D0():
    deopt 0 [package1];
  L1():
    package2 = force? package1;
    checkMissing(package2);
    r = `!=`(package2, "base");
    c = `as.logical`(r);
    if c then L2() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L2():
    _try_quietly = ldf `.try_quietly`;
    check L3() else D1();
  D1():
    deopt 5 [];
  L3():
    p2 = prom<V +>{
      loadNamespace = ldf loadNamespace;
      p = prom<V +>{
        package3 = ld package;
        package4 = force? package3;
        checkMissing(package4);
        return package4;
      };
      p1 = prom<V +>{
        lib_loc1 = ld `lib.loc`;
        lib_loc2 = force? lib_loc1;
        checkMissing(lib_loc2);
        return lib_loc2;
      };
      r3 = dyn loadNamespace(p, p1);
      return r3;
    };
    r5 = dyn _try_quietly(p2);
    check L4() else D2();
  D2():
    deopt 7 [r5];
  L4():
    popenv;
    return r5;
  }
}