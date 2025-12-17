fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner494887685;
    st textConnection = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner494887685(object, open, local, name, encoding) {
  (reg object:*, reg open:*, reg local:*, reg name:*, reg encoding:*) -+> V { var object:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, var local:*, reg local_isMissing:L, reg local_orDefault:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c:cls, reg r8:V, reg p2:p(V +), reg local1:*, reg local2:V, reg c1:L, reg parent_frame:cls, reg r10:V, reg r11:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg match_arg:cls, reg encoding1:*, reg encoding2:V, reg p3:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c2:cls, reg r18:V, reg match:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg name1:*, reg name2:V, reg c3:L, reg c4:L, reg c6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg c9:L, reg r23:V, reg name3:*, reg name4:V, reg length:cls, reg r24:V, reg r25:V, reg c10:L, reg c11:V, reg r26:V, reg c13:L, reg stop:cls, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg name5:*, reg name6:V, reg object1:*, reg object2:V, reg open1:*, reg open2:V, reg env:*, reg env1:V, reg type:*, reg type1:V, reg textConnection:cls, reg r31:V |
    mkenv;
    st object = object;
    open_isMissing = missing.0(open);
    if open_isMissing then L0("r") else L0(open);
  L0(open_orDefault):
    st open = open_orDefault;
    local_isMissing = missing.0(local);
    if local_isMissing then L1(FALSE) else L1(local);
  L1(local_orDefault):
    st local = local_orDefault;
    name_isMissing = missing.0(name);
    if name_isMissing then L2() else L3(name);
  L2():
    p1 = prom<V +>{
      deparse1 = ldf deparse1;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym object>);
        goto L0(r2);
      L2():
        r = dyn base(<sym object>);
        goto L0(r);
      };
      r4 = dyn deparse1(p);
      return r4;
    };
    goto L3(p1);
  L3(name_orDefault):
    st name = name_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L4() else L5(encoding);
  L4():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c = ldf c in base;
      r8 = dyn c("", "bytes", "UTF-8");
      goto L0(r8);
    L2():
      r6 = dyn base1("", "bytes", "UTF-8");
      goto L0(r6);
    };
    goto L5(p2);
  L5(encoding_orDefault):
    st encoding = encoding_orDefault;
    local1 = ld local;
    check L16() else D0();
  D0():
    deopt 0 [local1];
  L16():
    local2 = force? local1;
    checkMissing(local2);
    c1 = `as.logical`(local2);
    if c1 then L17() else L6();
  L6():
    _GlobalEnv = ld `.GlobalEnv`;
    check L21() else D3();
  L7(r11):
    st env = r11;
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L17():
    parent_frame = ldf `parent.frame`;
    check L18() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 5 [_GlobalEnv];
  L8(r13):
    st type = r13;
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L18():
    r10 = dyn parent_frame();
    check L19() else D2();
  L21():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    goto L7(_GlobalEnv1);
  L22():
    match_arg = ldf `match.arg`;
    check L24() else D4();
  L23():
    r12 = dyn base2(<lang match.arg(encoding)>, <lang c("", "bytes", "UTF-8")>);
    goto L8(r12);
  D2():
    deopt 4 [r10];
  D4():
    deopt 11 [];
  L10(r21):
    c4 = `as.logical`(r21);
    if c4 then L33() else L11(c4);
  L19():
    goto L7(r10);
  L24():
    p3 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    r15 = dyn match_arg(p3);
    check L25() else D5();
  L30():
    name1 = ld name;
    check L32() else D8();
  L31():
    r20 = dyn base4(<sym name>);
    goto L10(r20);
  D5():
    deopt 13 [r15];
  D8():
    deopt 27 [name1];
  L11(c6):
    r26 = `!`(c6);
    c13 = `as.logical`(r26);
    if c13 then L39() else L13();
  L25():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L32():
    name2 = force? name1;
    checkMissing(name2);
    c3 = `is.character`(name2);
    goto L10(c3);
  L33():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L34() else L35();
  L9(r17):
    match = ldf match in base;
    r19 = dyn match(r15, r17, NA_INT, NULL);
    check L29() else D7();
  L12(c9, r23):
    r25 = `==`(r23, 1.0);
    c10 = `as.logical`(r25);
    c11 = `&&`(c9, c10);
    goto L11(c11);
  L13():
    goto L14();
  L14():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L43() else L44();
  L26():
    c2 = ldf c in base;
    r18 = dyn c2("", "bytes", "UTF-8");
    check L28() else D6();
  L27():
    r16 = dyn base3("", "bytes", "UTF-8");
    goto L9(r16);
  L34():
    name3 = ld name;
    check L36() else D9();
  L35():
    r22 = dyn base5(<sym name>);
    goto L12(c4, r22);
  L39():
    stop = ldf stop;
    check L40() else D11();
  D6():
    deopt 20 [r18];
  D7():
    deopt 24 [r19];
  D9():
    deopt 32 [c4, name3];
  D11():
    deopt 41 [];
  L15(r30):
    popenv;
    return r30;
  L28():
    goto L9(r18);
  L29():
    goto L8(r19);
  L36():
    name4 = force? name3;
    checkMissing(name4);
    length = ldf length in base;
    r24 = dyn length(name4);
    check L37() else D10();
  L40():
    r27 = dyn stop("'name' must be a single character string");
    check L41() else D12();
  L43():
    name5 = ld name;
    check L45() else D13();
  L44():
    r29 = dyn base6(<lang textConnection(name, object, open, env, type)>);
    goto L15(r29);
  D10():
    deopt 35 [c4, r24];
  D12():
    deopt 43 [r27];
  D13():
    deopt 48 [name5];
  L37():
    goto L12(c4, r24);
  L41():
    goto L14();
  L45():
    name6 = force? name5;
    checkMissing(name6);
    object1 = ld object;
    check L46() else D14();
  D14():
    deopt 50 [object1];
  L46():
    object2 = force? object1;
    checkMissing(object2);
    open1 = ld open;
    check L47() else D15();
  D15():
    deopt 52 [open1];
  L47():
    open2 = force? open1;
    checkMissing(open2);
    env = ld env;
    check L48() else D16();
  D16():
    deopt 54 [env];
  L48():
    env1 = force? env;
    checkMissing(env1);
    type = ld type;
    check L49() else D17();
  D17():
    deopt 56 [type];
  L49():
    type1 = force? type;
    checkMissing(type1);
    textConnection = ldf textConnection in base;
    r31 = dyn textConnection(name6, object2, open2, env1, type1);
    check L50() else D18();
  D18():
    deopt 59 [r31];
  L50():
    goto L15(r31);
  }
}