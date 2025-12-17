fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1776297553;
    st `.GenericAssign` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1776297553(name, fdef, where) {
  (reg name:*, reg fdef:*, reg where:*) -+> V { var name:*, var fdef:*, var where:*, reg assign:cls, reg name1:*, reg name2:V, reg p:p(V +), reg fdef1:*, reg fdef2:V, reg p1:p(V +), reg where1:*, reg where2:V, reg p2:p(V +), reg r3:V, reg _cacheGeneric:cls, reg name3:*, reg name4:V, reg p3:p(V +), reg fdef3:*, reg fdef4:V, reg p4:p(V +), reg r6:V, reg __:cls, reg r7:V, reg assignMethodsMetaData:cls, reg name5:*, reg name6:V, reg p5:p(V +), reg methods:*, reg methods1:V, reg p6:p(V +), reg fdef5:*, reg fdef6:V, reg p7:p(V +), reg where3:*, reg where4:V, reg p8:p(V +), reg r12:V, reg _assignMethodsTableMetaData:cls, reg name7:*, reg name8:V, reg p9:p(V +), reg fdef7:*, reg fdef8:V, reg p10:p(V +), reg where5:*, reg where6:V, reg p11:p(V +), reg r16:V, reg name9:*, reg name10:V |
    mkenv;
    st name = name;
    st fdef = fdef;
    st where = where;
    assign = ldf assign;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    p2 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r3 = dyn assign(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    _cacheGeneric = ldf `.cacheGeneric`;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p3 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p4 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r6 = dyn _cacheGeneric(p3, p4);
    check L3() else D3();
  D3():
    deopt 10 [r6];
  L3():
    __ = ldf `@` in base;
    r7 = dyn __(<sym fdef>, <sym default>);
    st methods = r7;
    assignMethodsMetaData = ldf assignMethodsMetaData;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p5 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p6 = prom<V +>{
      methods = ld methods;
      methods1 = force? methods;
      checkMissing(methods1);
      return methods1;
    };
    p7 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    p8 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r12 = dyn assignMethodsMetaData(p5, p6, p7, p8);
    check L5() else D5();
  D5():
    deopt 20 [r12];
  L5():
    _assignMethodsTableMetaData = ldf `.assignMethodsTableMetaData`;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p9 = prom<V +>{
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      return name8;
    };
    p10 = prom<V +>{
      fdef7 = ld fdef;
      fdef8 = force? fdef7;
      checkMissing(fdef8);
      return fdef8;
    };
    p11 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r16 = dyn _assignMethodsTableMetaData(p9, p10, p11);
    check L7() else D7();
  D7():
    deopt 26 [r16];
  L7():
    name9 = ld name;
    check L8() else D8();
  D8():
    deopt 27 [name9];
  L8():
    name10 = force? name9;
    checkMissing(name10);
    popenv;
    return name10;
  }
}