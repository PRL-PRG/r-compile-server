fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2566295788;
    st `.findOrCopyClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2566295788(class, classDef, where, purpose) {
  (reg class:*, reg classDef:*, reg where:*, reg purpose:*) -+> V { var class:*, var classDef:*, var where:*, var purpose:*, reg findClass:cls, reg classDef1:*, reg classDef2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg whereIs:*, reg whereIs1:V, reg length:cls, reg r5:V, reg c:L, reg whereIs2:*, reg whereIs3:V, reg c1:L, reg whereIs5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg purpose1:*, reg purpose2:V, reg r7:V, reg c2:L, reg warning:cls, reg gettextf:cls, reg _dQ:cls, reg class1:*, reg class2:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg sQuote:cls, reg __1:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg purpose3:*, reg purpose4:V, reg p6:p(V +), reg sQuote1:cls, reg getPackageName:cls, reg where3:*, reg where4:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg r19:V, reg p9:p(V +), reg r21:V, reg p10:p(V +), reg r23:V, reg where5:*, reg where6:V |
    mkenv;
    st class = class;
    st classDef = classDef;
    st where = where;
    st purpose = purpose;
    findClass = ldf findClass;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      classDef1 = ld classDef;
      classDef2 = force? classDef1;
      checkMissing(classDef2);
      return classDef2;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r2 = dyn findClass(p, p1);
    check L6() else D1();
  D1():
    deopt 4 [r2];
  L6():
    st whereIs = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r4):
    c = `as.logical`(r4);
    if c then L11() else L1();
  L7():
    whereIs = ld whereIs;
    check L9() else D2();
  L8():
    r3 = dyn base(<sym whereIs>);
    goto L0(r3);
  D2():
    deopt 8 [whereIs];
  L1():
    purpose1 = ld purpose;
    check L17() else D5();
  L9():
    whereIs1 = force? whereIs;
    checkMissing(whereIs1);
    length = ldf length in base;
    r5 = dyn length(whereIs1);
    check L10() else D3();
  L11():
    whereIs2 = ld whereIs;
    check L12() else D4();
  D3():
    deopt 11 [r5];
  D4():
    deopt 12 [whereIs2];
  D5():
    deopt 17 [purpose1];
  L10():
    goto L0(r5);
  L12():
    whereIs3 = force? whereIs2;
    checkMissing(whereIs3);
    c1 = `is.object`(whereIs3);
    if c1 then L13() else L14(whereIs3);
  L17():
    purpose2 = force? purpose1;
    checkMissing(purpose2);
    r7 = `!=`(purpose2, "subclass");
    c2 = `as.logical`(r7);
    if c2 then L18() else L3();
  L2(dx1):
    popenv;
    return dx1;
  L3():
    goto L4();
  L4():
    where5 = ld where;
    check L22() else D8();
  L13():
    dr = tryDispatchBuiltin.1("[[", whereIs3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(whereIs5):
    __ = ldf `[[` in base;
    r6 = dyn __(whereIs5, 1);
    goto L2(r6);
  L18():
    warning = ldf warning;
    check L19() else D6();
  D6():
    deopt 22 [];
  D8():
    deopt 31 [where5];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L19():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        _dQ = ldf `.dQ`;
        p2 = prom<V +>{
          class1 = ld class;
          class2 = force? class1;
          checkMissing(class2);
          return class2;
        };
        r9 = dyn _dQ(p2);
        return r9;
      };
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          __1 = ldf `@` in base;
          r11 = dyn __1(<sym classDef>, <sym package>);
          return r11;
        };
        r13 = dyn sQuote(p4);
        return r13;
      };
      p6 = prom<V +>{
        purpose3 = ld purpose;
        purpose4 = force? purpose3;
        checkMissing(purpose4);
        return purpose4;
      };
      p9 = prom<V +>{
        sQuote1 = ldf sQuote;
        p8 = prom<V +>{
          getPackageName = ldf getPackageName;
          p7 = prom<V +>{
            where3 = ld where;
            where4 = force? where3;
            checkMissing(where4);
            return where4;
          };
          r17 = dyn getPackageName(p7, FALSE);
          return r17;
        };
        r19 = dyn sQuote1(p8);
        return r19;
      };
      r21 = dyn gettextf("class %s is defined (with package slot %s) but no metadata object found to revise %s information---not imported?  Making a copy in package %s", p3, p5, p6, p9);
      return r21;
    };
    r23 = dyn warning[, `call.`, domain](p10, FALSE, NA_LGL);
    check L20() else D7();
  L22():
    where6 = force? where5;
    checkMissing(where6);
    popenv;
    return where6;
  D7():
    deopt 28 [r23];
  L20():
    goto L4();
  }
}