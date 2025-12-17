fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner653738871;
    st getFunction = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner653738871(name, generic, mustFind, where) {
  (reg name:*, reg generic:*, reg mustFind:*, reg where:*) -+> V { var name:*, var generic:*, reg generic_isMissing:L, reg generic_orDefault:*, var mustFind:*, reg mustFind_isMissing:L, reg mustFind_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg name1:*, reg name2:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg c5:L, reg r9:V, reg name3:*, reg name4:V, reg nzchar:cls, reg r10:V, reg r11:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg gettextf:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r18:V, reg isNamespace:cls, reg where3:*, reg where4:V, reg p3:p(V +), reg r20:V, reg c10:L, reg r21:cls, reg r22:cls, reg r23:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg get0:cls, reg name5:*, reg name6:V, reg p4:p(V +), reg where5:*, reg where6:V, reg p5:p(V +), reg r28:V, reg c11:V, reg r29:V, reg c12:L, reg generic1:*, reg generic2:V, reg c13:L, reg c14:V, reg is:cls, reg f:*, reg f1:V, reg p6:p(V +), reg r31:V, reg r32:V, reg c16:L, reg c17:V, reg found:*, reg found1:V, reg c20:L, reg c21:V, reg lastEnv:cls, reg where7:*, reg where8:V, reg p7:p(V +), reg r34:V, reg c23:L, reg c24:V, reg c26:L, reg parent_env:cls, reg where9:*, reg where10:V, reg p8:p(V +), reg r37:V, reg found2:*, reg found3:V, reg r38:V, reg c27:L, reg c29:V, reg mustFind1:*, reg mustFind2:V, reg c30:L, reg c31:V, reg c33:L, reg stop1:cls, reg generic3:*, reg generic4:V, reg c34:L, reg gettextf1:cls, reg sQuote:cls, reg name7:*, reg name8:V, reg p9:p(V +), reg r40:V, reg p10:p(V +), reg r42:V, reg gettextf2:cls, reg sQuote1:cls, reg name9:*, reg name10:V, reg p11:p(V +), reg r44:V, reg p12:p(V +), reg r46:V, reg p13:p(V +), reg r48:V, reg f2:*, reg f3:V |
    mkenv;
    st name = name;
    generic_isMissing = missing.0(generic);
    if generic_isMissing then L0(TRUE) else L0(generic);
  L0(generic_orDefault):
    st generic = generic_orDefault;
    mustFind_isMissing = missing.0(mustFind);
    if mustFind_isMissing then L1(TRUE) else L1(mustFind);
  L1(mustFind_orDefault):
    st mustFind = mustFind_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L2() else L3(where);
  L2():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L3(p1);
  L3(where_orDefault):
    st where = where_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L4(r5):
    r7 = `!=`(r5, 1);
    c = `as.logical`(r7);
    if c then L5(c) else L28();
  L24():
    name1 = ld name;
    check L26() else D0();
  L25():
    r4 = dyn base(<sym name>);
    goto L4(r4);
  D0():
    deopt 2 [name1];
  L5(c1):
    c9 = `as.logical`(c1);
    if c9 then L34() else L7();
  L26():
    name2 = force? name1;
    checkMissing(name2);
    length = ldf length in base;
    r6 = dyn length(name2);
    check L27() else D1();
  L28():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  D1():
    deopt 5 [r6];
  L6(c5, r9):
    r11 = `!`(r9);
    c6 = `as.logical`(r11);
    c7 = `||`(c5, c6);
    goto L5(c7);
  L7():
    goto L8();
  L8():
    st found = FALSE;
    sym2 = ldf `as.environment`;
    base2 = ldf `as.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L27():
    goto L4(r6);
  L29():
    name3 = ld name;
    check L31() else D2();
  L30():
    r8 = dyn base1(<sym name>);
    goto L6(c, r8);
  L34():
    stop = ldf stop;
    check L35() else D4();
  D2():
    deopt 10 [c, name3];
  D4():
    deopt 17 [];
  L9(r17):
    st where = r17;
    st f = NULL;
    isNamespace = ldf isNamespace;
    check L42() else D8();
  L31():
    name4 = force? name3;
    checkMissing(name4);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(name4);
    check L32() else D3();
  L35():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      r12 = dyn gettextf("expected a non-empty character string for argument 'name'");
      return r12;
    };
    r14 = dyn stop[, domain](p2, NA_LGL);
    check L36() else D5();
  L38():
    where1 = ld where;
    check L40() else D6();
  L39():
    r16 = dyn base2(<sym where>);
    goto L9(r16);
  D3():
    deopt 13 [c, r10];
  D5():
    deopt 21 [r14];
  D6():
    deopt 29 [where1];
  D8():
    deopt 38 [];
  L32():
    goto L6(c, r10);
  L36():
    goto L8();
  L40():
    where2 = force? where1;
    checkMissing(where2);
    as_environment = ldf `as.environment` in base;
    r18 = dyn as_environment(where2);
    check L41() else D7();
  L42():
    p3 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r20 = dyn isNamespace(p3);
    check L43() else D9();
  D7():
    deopt 32 [r18];
  D9():
    deopt 40 [r20];
  L41():
    goto L9(r18);
  L43():
    c10 = `as.logical`(r20);
    if c10 then L44() else L10();
  L10():
    r23 = clos inner3253127715;
    goto L11(r23);
  L11(r22):
    st lastEnv = r22;
    goto L20();
  L44():
    r21 = clos inner3253127715;
    goto L11(r21);
  L20():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L12(r25):
    r29 = `!`(r25);
    c12 = `as.logical`(r29);
    if c12 then L50() else L13();
  L46():
    get0 = ldf get0;
    check L48() else D10();
  L47():
    r24 = dyn base3(<lang `<-`(f, get0(name, envir=where, mode="function", inherits=FALSE))>);
    goto L12(r24);
  D10():
    deopt 48 [];
  L13():
    goto L15();
  L15():
    found = ld found;
    check L57() else D15();
  L48():
    p4 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p5 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r28 = dyn get0[, envir, mode, inherits](p4, p5, "function", FALSE);
    check L49() else D11();
  L50():
    generic1 = ld generic;
    check L51() else D12();
  D11():
    deopt 56 [r28];
  D12():
    deopt 60 [generic1];
  D15():
    deopt 72 [found];
  L49():
    st f = r28;
    c11 = `==`(r28, NULL);
    goto L12(c11);
  L51():
    generic2 = force? generic1;
    checkMissing(generic2);
    c13 = `as.logical`(generic2);
    if c13 then L14(c13) else L52();
  L57():
    found1 = force? found;
    checkMissing(found1);
    c20 = `as.logical`(found1);
    if c20 then L16(c20) else L58();
  L14(c14):
    st found = c14;
    goto L15();
  L16(c21):
    c26 = `as.logical`(c21);
    if c26 then L62() else L17();
  L52():
    is = ldf is;
    check L53() else D13();
  L58():
    lastEnv = ldf lastEnv;
    check L59() else D16();
  D13():
    deopt 63 [c13];
  D16():
    deopt 75 [c20];
  L17():
    parent_env = ldf `parent.env`;
    check L65() else D18();
  L53():
    p6 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r31 = dyn is(p6, "genericFunction");
    check L54() else D14();
  L59():
    p7 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r34 = dyn lastEnv(p7);
    check L60() else D17();
  L62():
    found2 = ld found;
    check L68() else D20();
  D14():
    deopt 66 [c13, r31];
  D17():
    deopt 77 [c20, r34];
  D18():
    deopt 84 [];
  D20():
    deopt 91 [found2];
  L54():
    r32 = `!`(r31);
    c16 = `as.logical`(r32);
    c17 = `||`(c13, c16);
    goto L14(c17);
  L60():
    c23 = `as.logical`(r34);
    c24 = `||`(c20, c23);
    goto L16(c24);
  L65():
    p8 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r37 = dyn parent_env(p8);
    check L66() else D19();
  L68():
    found3 = force? found2;
    checkMissing(found3);
    r38 = `!`(found3);
    c27 = `as.logical`(r38);
    if c27 then L69() else L21(c27);
  D19():
    deopt 86 [r37];
  L21(c29):
    c33 = `as.logical`(c29);
    if c33 then L72() else L22();
  L66():
    st where = r37;
    goto L20();
  L69():
    mustFind1 = ld mustFind;
    check L70() else D21();
  D21():
    deopt 94 [c27, mustFind1];
  L22():
    goto L23();
  L23():
    f2 = ld f;
    check L76() else D24();
  L70():
    mustFind2 = force? mustFind1;
    checkMissing(mustFind2);
    c30 = `as.logical`(mustFind2);
    c31 = `&&`(c27, c30);
    goto L21(c31);
  L72():
    stop1 = ldf stop;
    check L73() else D22();
  D22():
    deopt 98 [];
  D24():
    deopt 105 [f2];
  L73():
    p13 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      c34 = `as.logical`(generic4);
      if c34 then L1() else L0();
    L0():
      gettextf2 = ldf gettextf;
      p12 = prom<V +>{
        sQuote1 = ldf sQuote;
        p11 = prom<V +>{
          name9 = ld name;
          name10 = force? name9;
          checkMissing(name10);
          return name10;
        };
        r44 = dyn sQuote1(p11);
        return r44;
      };
      r46 = dyn gettextf2("no non-generic function %s found", p12);
      return r46;
    L1():
      gettextf1 = ldf gettextf;
      p10 = prom<V +>{
        sQuote = ldf sQuote;
        p9 = prom<V +>{
          name7 = ld name;
          name8 = force? name7;
          checkMissing(name8);
          return name8;
        };
        r40 = dyn sQuote(p9);
        return r40;
      };
      r42 = dyn gettextf1("no function %s found", p10);
      return r42;
    };
    r48 = dyn stop1[, domain](p13, NA_LGL);
    check L74() else D23();
  L76():
    f3 = force? f2;
    checkMissing(f3);
    popenv;
    return f3;
  D23():
    deopt 102 [r48];
  L74():
    goto L23();
  }
}
fun inner3253127715(where) {
  (reg where:*) -+> V { var where:*, reg isBaseNamespace:cls, reg where1:*, reg where2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st where = where;
    isBaseNamespace = ldf isBaseNamespace;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r1 = dyn isBaseNamespace(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    popenv;
    return r1;
  }
}