fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner89383630;
    st `.getGenerics` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner89383630(where, trim) {
  (reg where:*, reg trim:*) -+> V { var where:*, var trim:*, reg trim_isMissing:L, reg trim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg _envSearch:cls, reg topenv:cls, reg parent_frame:cls, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg where1:*, reg where2:V, reg is_environment:cls, reg r11:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg where3:*, reg where4:V, reg list:cls, reg r14:V, reg unlist:cls, reg lapply:cls, reg where5:*, reg where6:V, reg p2:p(V +), reg objects:*, reg objects1:V, reg p3:p(V +), reg r17:V, reg p4:p(V +), reg r19:V, reg unique:cls, reg these:*, reg these1:V, reg p5:p(V +), reg r21:V, reg these2:*, reg these3:V, reg c2:L, reg these5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg startsWith:cls, reg these6:*, reg these7:V, reg p6:p(V +), reg r23:V, reg __:cls, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg these8:*, reg these9:V, reg length:cls, reg r27:V, reg r28:V, reg c3:L, reg character:cls, reg r29:V, reg gsub:cls, reg these10:*, reg these11:V, reg p7:p(V +), reg r33:V, reg gsub1:cls, reg these12:*, reg these13:V, reg p8:p(V +), reg r35:V, reg packageNames:*, reg packageNames1:V, reg l:*, reg attr__:cls, reg r36:V, reg isTRUE:cls, reg trim1:*, reg trim2:V, reg p9:p(V +), reg r38:V, reg c4:L, reg funNames:*, reg funNames1:V, reg isFALSE:cls, reg trim3:*, reg trim4:V, reg p10:p(V +), reg r40:V, reg c5:L, reg these14:*, reg these15:V, reg gsub2:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg trim5:*, reg trim6:V, reg as_character:cls, reg r43:V, reg p11:p(V +), reg these16:*, reg these17:V, reg p12:p(V +), reg r46:V |
    mkenv;
    st where = where;
    trim_isMissing = missing.0(trim);
    if trim_isMissing then L0(TRUE) else L0(trim);
  L0(trim_orDefault):
    st trim = trim_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r1):
    c = `as.logical`(r1);
    if c then L15() else L2();
  L13():
    missing = ldf missing in base;
    r2 = dyn missing(<sym where>);
    goto L1(r2);
  L14():
    r = dyn base(<sym where>);
    goto L1(r);
  L2():
    sym1 = ldf `is.environment`;
    base1 = ldf `is.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L3():
    unlist = ldf unlist;
    check L29() else D6();
  L15():
    _envSearch = ldf `.envSearch`;
    check L16() else D0();
  D0():
    deopt 4 [];
  D6():
    deopt 24 [];
  L4(r10):
    c1 = `as.logical`(r10);
    if c1 then L23() else L5();
  L16():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r3 = dyn parent_frame();
        return r3;
      };
      r5 = dyn topenv(p);
      return r5;
    };
    r7 = dyn _envSearch(p1);
    check L17() else D1();
  L19():
    where1 = ld where;
    check L21() else D2();
  L20():
    r9 = dyn base1(<sym where>);
    goto L4(r9);
  L29():
    p4 = prom<V +>{
      lapply = ldf lapply;
      p2 = prom<V +>{
        where5 = ld where;
        where6 = force? where5;
        checkMissing(where6);
        return where6;
      };
      p3 = prom<V +>{
        objects = ld objects;
        objects1 = force? objects;
        checkMissing(objects1);
        return objects1;
      };
      r17 = dyn lapply[, , `all.names`](p2, p3, TRUE);
      return r17;
    };
    r19 = dyn unlist[, `use.names`](p4, FALSE);
    check L30() else D7();
  D1():
    deopt 6 [r7];
  D2():
    deopt 10 [where1];
  D7():
    deopt 28 [r19];
  L5():
    goto L3();
  L17():
    st where = r7;
    goto L3();
  L21():
    where2 = force? where1;
    checkMissing(where2);
    is_environment = ldf `is.environment` in base;
    r11 = dyn is_environment(where2);
    check L22() else D3();
  L23():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L30():
    st these = r19;
    unique = ldf unique;
    check L31() else D8();
  D3():
    deopt 13 [r11];
  D8():
    deopt 31 [];
  L6(r13):
    st where = r13;
    goto L3();
  L22():
    goto L4(r11);
  L24():
    where3 = ld where;
    check L26() else D4();
  L25():
    r12 = dyn base2(<sym where>);
    goto L6(r12);
  L31():
    p5 = prom<V +>{
      these = ld these;
      these1 = force? these;
      checkMissing(these1);
      return these1;
    };
    r21 = dyn unique(p5);
    check L32() else D9();
  D4():
    deopt 16 [where3];
  D9():
    deopt 33 [r21];
  L26():
    where4 = force? where3;
    checkMissing(where4);
    list = ldf list in base;
    r14 = dyn list(where4);
    check L27() else D5();
  L32():
    st these = r21;
    these2 = ld these;
    check L33() else D10();
  D5():
    deopt 19 [r14];
  D10():
    deopt 35 [these2];
  L27():
    goto L6(r14);
  L33():
    these3 = force? these2;
    checkMissing(these3);
    c2 = `is.object`(these3);
    if c2 then L34() else L35(these3);
  L7(dx1):
    st these = dx1;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L34():
    dr = tryDispatchBuiltin.1("[", these3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(these5):
    startsWith = ldf startsWith;
    check L37() else D11();
  D11():
    deopt 38 [these5];
  L8(r26):
    r28 = `==`(r26, 0);
    c3 = `as.logical`(r28);
    if c3 then L43() else L9();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L37():
    p6 = prom<V +>{
      these6 = ld these;
      these7 = force? these6;
      checkMissing(these7);
      return these7;
    };
    r23 = dyn startsWith(p6, ".__T__");
    check L38() else D12();
  L39():
    these8 = ld these;
    check L41() else D13();
  L40():
    r25 = dyn base3(<sym these>);
    goto L8(r25);
  D12():
    deopt 41 [these5, r23];
  D13():
    deopt 46 [these8];
  L9():
    gsub = ldf gsub;
    check L48() else D17();
  L38():
    __ = ldf `[` in base;
    r24 = dyn __(these5, r23);
    goto L7(r24);
  L41():
    these9 = force? these8;
    checkMissing(these9);
    length = ldf length in base;
    r27 = dyn length(these9);
    check L42() else D14();
  L43():
    character = ldf character;
    check L44() else D15();
  D14():
    deopt 49 [r27];
  D15():
    deopt 53 [];
  D17():
    deopt 59 [];
  L42():
    goto L8(r27);
  L44():
    r29 = dyn character();
    check L45() else D16();
  L48():
    p7 = prom<V +>{
      these10 = ld these;
      these11 = force? these10;
      checkMissing(these11);
      return these11;
    };
    r33 = dyn gsub("^\\.__T__(.*):([^:]+)", "\\1", p7);
    check L49() else D18();
  D16():
    deopt 54 [r29];
  D18():
    deopt 63 [r33];
  L45():
    popenv;
    return r29;
  L49():
    st funNames = r33;
    gsub1 = ldf gsub;
    check L50() else D19();
  D19():
    deopt 66 [];
  L50():
    p8 = prom<V +>{
      these12 = ld these;
      these13 = force? these12;
      checkMissing(these13);
      return these13;
    };
    r35 = dyn gsub1("^\\.__T__(.*):([^:]+(.*))", "\\2", p8);
    check L51() else D20();
  D20():
    deopt 70 [r35];
  L51():
    st packageNames = r35;
    packageNames = ld packageNames;
    check L52() else D21();
  D21():
    deopt 72 [packageNames];
  L52():
    packageNames1 = force? packageNames;
    checkMissing(packageNames1);
    l = ld funNames;
    attr__ = ldf `attr<-`;
    check L53() else D22();
  D22():
    deopt 75 [packageNames1, l, packageNames1];
  L53():
    r36 = dyn attr__(l, NULL, "package", packageNames1);
    check L54() else D23();
  D23():
    deopt 78 [packageNames1, r36];
  L54():
    st funNames = r36;
    isTRUE = ldf isTRUE;
    check L55() else D24();
  D24():
    deopt 81 [];
  L55():
    p9 = prom<V +>{
      trim1 = ld trim;
      trim2 = force? trim1;
      checkMissing(trim2);
      return trim2;
    };
    r38 = dyn isTRUE(p9);
    check L56() else D25();
  D25():
    deopt 83 [r38];
  L56():
    c4 = `as.logical`(r38);
    if c4 then L57() else L11();
  L11():
    isFALSE = ldf isFALSE;
    check L60() else D27();
  L57():
    funNames = ld funNames;
    check L58() else D26();
  D26():
    deopt 84 [funNames];
  D27():
    deopt 87 [];
  L58():
    funNames1 = force? funNames;
    checkMissing(funNames1);
    popenv;
    return funNames1;
  L60():
    p10 = prom<V +>{
      trim3 = ld trim;
      trim4 = force? trim3;
      checkMissing(trim4);
      return trim4;
    };
    r40 = dyn isFALSE(p10);
    check L61() else D28();
  D28():
    deopt 89 [r40];
  L61():
    c5 = `as.logical`(r40);
    if c5 then L62() else L12();
  L12():
    gsub2 = ldf gsub;
    check L65() else D30();
  L62():
    these14 = ld these;
    check L63() else D29();
  D29():
    deopt 90 [these14];
  D30():
    deopt 93 [];
  L63():
    these15 = force? these14;
    checkMissing(these15);
    popenv;
    return these15;
  L65():
    p11 = prom<V +>{
      sym4 = ldf `as.character`;
      base4 = ldf `as.character` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      trim5 = ld trim;
      trim6 = force? trim5;
      checkMissing(trim6);
      as_character = ldf `as.character` in base;
      r43 = dyn as_character(trim6);
      goto L0(r43);
    L2():
      r41 = dyn base4(<sym trim>);
      goto L0(r41);
    };
    p12 = prom<V +>{
      these16 = ld these;
      these17 = force? these16;
      checkMissing(these17);
      return these17;
    };
    r46 = dyn gsub2[, , , fixed](".__T__", p11, p12, TRUE);
    check L66() else D31();
  D31():
    deopt 99 [r46];
  L66():
    popenv;
    return r46;
  }
}