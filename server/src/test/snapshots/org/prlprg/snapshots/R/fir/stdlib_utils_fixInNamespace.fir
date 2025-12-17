fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3938751172;
    st fixInNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3938751172(x, ns, pos, envir, `...`) {
  (reg x:*, reg ns:*, reg pos:*, reg envir:*, reg ddd:dots) -+> V { var x:*, var ns:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, reg p:p(V +), var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg pos1:*, reg pos2:V, reg as_environment:cls, reg r3:V, reg p1:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg substitute:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg subx:*, reg subx1:V, reg c:L, reg c1:L, reg deparse:cls, reg subx2:*, reg subx3:V, reg p2:p(V +), reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg subx4:*, reg subx5:V, reg c2:L, reg r15:V, reg c3:L, reg c4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg c8:L, reg r17:V, reg subx6:*, reg subx7:V, reg length:cls, reg r18:V, reg r19:V, reg c9:L, reg c10:V, reg c12:L, reg stop:cls, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg missing:cls, reg r24:V, reg c13:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg envir1:*, reg envir2:V, reg attr:cls, reg r27:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg r29:V, reg nm:*, reg nm1:V, reg c14:V, reg c15:L, reg c16:V, reg startsWith:cls, reg nm2:*, reg nm3:V, reg p3:p(V +), reg r31:V, reg r32:V, reg c18:L, reg c19:V, reg c21:L, reg stop1:cls, reg r33:V, reg asNamespace:cls, reg substring:cls, reg nm4:*, reg nm5:V, reg p4:p(V +), reg r36:V, reg p5:p(V +), reg r38:V, reg asNamespace1:cls, reg ns1:*, reg ns2:V, reg p6:p(V +), reg r41:V, reg edit:cls, reg get:cls, reg subx8:*, reg subx9:V, reg p7:p(V +), reg ns3:*, reg ns4:V, reg p8:p(V +), reg r44:V, reg p9:p(V +), reg ddd1:dots?, reg r46:V, reg assignInNamespace:cls, reg subx10:*, reg subx11:V, reg p10:p(V +), reg x1:*, reg x2:V, reg p11:p(V +), reg ns5:*, reg ns6:V, reg p12:p(V +), reg r50:V |
    mkenv;
    st x = x;
    st ns = ns;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0() else L1(pos);
  L0():
    p = prom<V +>{
      return -1.0;
    };
    goto L1(p);
  L1(pos_orDefault):
    st pos = pos_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L2() else L3(envir);
  L2():
    p1 = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      as_environment = ldf `as.environment` in base;
      r3 = dyn as_environment(pos2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym pos>);
      goto L0(r1);
    };
    goto L3(p1);
  L3(envir_orDefault):
    st envir = envir_orDefault;
    st `...` = ddd;
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L4(r6):
    st subx = r6;
    sym2 = ldf `is.name`;
    base2 = ldf `is.name` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L21():
    substitute = ldf substitute in base;
    r7 = dyn substitute(<sym x>);
    goto L4(r7);
  L22():
    r5 = dyn base1(<sym x>);
    goto L4(r5);
  L5(r9):
    c1 = `as.logical`(r9);
    if c1 then L26() else L6();
  L23():
    subx = ld subx;
    check L25() else D0();
  L24():
    r8 = dyn base2(<sym subx>);
    goto L5(r8);
  D0():
    deopt 5 [subx];
  L6():
    goto L7();
  L7():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L25():
    subx1 = force? subx;
    checkMissing(subx1);
    c = `is.symbol`(subx1);
    goto L5(c);
  L26():
    deparse = ldf deparse;
    check L27() else D1();
  D1():
    deopt 9 [];
  L8(r14):
    r15 = `!`(r14);
    c3 = `as.logical`(r15);
    if c3 then L9(c3) else L33();
  L27():
    p2 = prom<V +>{
      subx2 = ld subx;
      subx3 = force? subx2;
      checkMissing(subx3);
      return subx3;
    };
    r11 = dyn deparse(p2);
    check L28() else D2();
  L30():
    subx4 = ld subx;
    check L32() else D3();
  L31():
    r13 = dyn base3(<sym subx>);
    goto L8(r13);
  D2():
    deopt 11 [r11];
  D3():
    deopt 16 [subx4];
  L9(c4):
    c12 = `as.logical`(c4);
    if c12 then L39() else L11();
  L28():
    st subx = r11;
    goto L7();
  L32():
    subx5 = force? subx4;
    checkMissing(subx5);
    c2 = `is.character`(subx5);
    goto L8(c2);
  L33():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L10(c8, r17):
    r19 = `!=`(r17, 1);
    c9 = `as.logical`(r19);
    c10 = `||`(c8, c9);
    goto L9(c10);
  L11():
    goto L12();
  L12():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L34():
    subx6 = ld subx;
    check L36() else D4();
  L35():
    r16 = dyn base4(<sym subx>);
    goto L10(c3, r16);
  L39():
    stop = ldf stop;
    check L40() else D6();
  D4():
    deopt 22 [c3, subx6];
  D6():
    deopt 30 [];
  L13(r23):
    c13 = `as.logical`(r23);
    if c13 then L45() else L14();
  L36():
    subx7 = force? subx6;
    checkMissing(subx7);
    length = ldf length in base;
    r18 = dyn length(subx7);
    check L37() else D5();
  L40():
    r20 = dyn stop("'fixInNamespace' requires a name");
    check L41() else D7();
  L43():
    missing = ldf missing in base;
    r24 = dyn missing(<sym ns>);
    goto L13(r24);
  L44():
    r22 = dyn base5(<sym ns>);
    goto L13(r22);
  D5():
    deopt 25 [c3, r18];
  D7():
    deopt 32 [r20];
  L14():
    asNamespace1 = ldf asNamespace;
    check L64() else D17();
  L20():
    edit = ldf edit;
    check L66() else D19();
  L37():
    goto L10(c3, r18);
  L41():
    goto L12();
  L45():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L46() else L47();
  D17():
    deopt 71 [];
  D19():
    deopt 76 [];
  L15(r26):
    st nm = r26;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L50() else L51();
  L46():
    envir1 = ld envir;
    check L48() else D8();
  L47():
    r25 = dyn base6[, , exact](<sym envir>, "name", TRUE);
    goto L15(r25);
  L64():
    p6 = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r41 = dyn asNamespace1(p6);
    check L65() else D18();
  L66():
    p9 = prom<V +>{
      get = ldf get;
      p7 = prom<V +>{
        subx8 = ld subx;
        subx9 = force? subx8;
        checkMissing(subx9);
        return subx9;
      };
      p8 = prom<V +>{
        ns3 = ld ns;
        ns4 = force? ns3;
        checkMissing(ns4);
        return ns4;
      };
      r44 = dyn get[, envir, inherits](p7, p8, FALSE);
      return r44;
    };
    ddd1 = ld `...`;
    r46 = dyn edit[, `...`](p9, ddd1);
    check L67() else D20();
  D8():
    deopt 40 [envir1];
  D18():
    deopt 73 [r41];
  D20():
    deopt 79 [r46];
  L16(r29):
    c15 = `as.logical`(r29);
    if c15 then L17(c15) else L53();
  L48():
    envir2 = force? envir1;
    checkMissing(envir2);
    attr = ldf attr in base;
    r27 = dyn attr(envir2, "name", TRUE);
    check L49() else D9();
  L50():
    nm = ld nm;
    check L52() else D10();
  L51():
    r28 = dyn base7(<sym nm>);
    goto L16(r28);
  L65():
    st ns = r41;
    goto L20();
  L67():
    st x = r46;
    assignInNamespace = ldf assignInNamespace;
    check L68() else D21();
  D9():
    deopt 46 [r27];
  D10():
    deopt 49 [nm];
  D21():
    deopt 82 [];
  L17(c16):
    c21 = `as.logical`(c16);
    if c21 then L57() else L18();
  L49():
    goto L15(r27);
  L52():
    nm1 = force? nm;
    checkMissing(nm1);
    c14 = `==`(nm1, NULL);
    goto L16(c14);
  L53():
    startsWith = ldf startsWith;
    check L54() else D11();
  L68():
    p10 = prom<V +>{
      subx10 = ld subx;
      subx11 = force? subx10;
      checkMissing(subx11);
      return subx11;
    };
    p11 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p12 = prom<V +>{
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      return ns6;
    };
    r50 = dyn assignInNamespace(p10, p11, p12);
    check L69() else D22();
  D11():
    deopt 53 [c15];
  D22():
    deopt 86 [r50];
  L18():
    goto L19();
  L19():
    asNamespace = ldf asNamespace;
    check L61() else D15();
  L54():
    p3 = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    r31 = dyn startsWith(p3, "package:");
    check L55() else D12();
  L57():
    stop1 = ldf stop;
    check L58() else D13();
  L69():
    popenv;
    return r50;
  D12():
    deopt 56 [c15, r31];
  D13():
    deopt 60 [];
  D15():
    deopt 66 [];
  L55():
    r32 = `!`(r31);
    c18 = `as.logical`(r32);
    c19 = `||`(c15, c18);
    goto L17(c19);
  L58():
    r33 = dyn stop1("environment specified is not a package");
    check L59() else D14();
  L61():
    p5 = prom<V +>{
      substring = ldf substring;
      p4 = prom<V +>{
        nm4 = ld nm;
        nm5 = force? nm4;
        checkMissing(nm5);
        return nm5;
      };
      r36 = dyn substring(p4, 9);
      return r36;
    };
    r38 = dyn asNamespace(p5);
    check L62() else D16();
  D14():
    deopt 62 [r33];
  D16():
    deopt 68 [r38];
  L59():
    goto L19();
  L62():
    st ns = r38;
    goto L20();
  }
}