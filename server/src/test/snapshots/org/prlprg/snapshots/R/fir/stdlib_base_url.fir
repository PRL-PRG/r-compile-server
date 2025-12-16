fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-340245558`;
    st url = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-340245558`(description, open, blocking, encoding, method, headers) {
  (reg description:*, reg open:*, reg blocking:*, reg encoding:*, reg method:*, reg headers:*) -+> V { var description:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, var blocking:*, reg blocking_isMissing:L, reg blocking_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var method:*, reg method_isMissing:L, reg method_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), var headers:*, reg headers_isMissing:L, reg headers_orDefault:*, reg match_arg:cls, reg method1:*, reg method2:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg headers1:*, reg headers2:V, reg c1:V, reg r12:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg headers3:*, reg headers4:V, reg names:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg nh:*, reg nh1:V, reg length:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg r23:V, reg headers5:*, reg headers6:V, reg length1:cls, reg r24:V, reg r25:V, reg c3:L, reg c4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg c8:L, reg r27:V, reg nh2:*, reg nh3:V, reg r28:V, reg any:cls, reg r29:V, reg c9:L, reg c10:V, reg c12:L, reg c13:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg c17:L, reg r31:V, reg headers7:*, reg headers8:V, reg anyNA:cls, reg r32:V, reg c18:L, reg c19:V, reg c21:L, reg c22:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg c26:L, reg r34:V, reg nh4:*, reg nh5:V, reg anyNA1:cls, reg r35:V, reg c27:L, reg c28:V, reg c30:L, reg stop:cls, reg r36:V, reg paste0:cls, reg nh6:*, reg nh7:V, reg p4:p(V +), reg headers9:*, reg headers10:V, reg p5:p(V +), reg r40:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg headers11:*, reg headers12:V, reg paste1:cls, reg headers13:*, reg headers14:V, reg p6:p(V +), reg r44:V, reg list:cls, reg r45:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg description1:*, reg description2:V, reg open1:*, reg open2:V, reg blocking1:*, reg blocking2:V, reg encoding1:*, reg encoding2:V, reg method3:*, reg method4:V, reg headers15:*, reg headers16:V, reg url:cls, reg r49:V |
    mkenv;
    st description = description;
    open_isMissing = missing.0(open);
    if open_isMissing then L0("") else L0(open);
  L0(open_orDefault):
    st open = open_orDefault;
    blocking_isMissing = missing.0(blocking);
    if blocking_isMissing then L1(TRUE) else L1(blocking);
  L1(blocking_orDefault):
    st blocking = blocking_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L2() else L3(encoding);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("encoding");
      return r;
    };
    goto L3(p);
  L3(encoding_orDefault):
    st encoding = encoding_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L4() else L5(method);
  L4():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("url.method", "default");
      return r2;
    };
    goto L5(p1);
  L5(method_orDefault):
    st method = method_orDefault;
    headers_isMissing = missing.0(headers);
    if headers_isMissing then L6(NULL) else L6(headers);
  L6(headers_orDefault):
    st headers = headers_orDefault;
    match_arg = ldf `match.arg`;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p2 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c("default", "internal", "libcurl", "wininet");
      goto L0(r7);
    L2():
      r5 = dyn base("default", "internal", "libcurl", "wininet");
      goto L0(r5);
    };
    r9 = dyn match_arg(p2, p3);
    check L24() else D1();
  D1():
    deopt 4 [r9];
  L24():
    st method = r9;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L7(r11):
    r12 = `!`(r11);
    c2 = `as.logical`(r12);
    if c2 then L28() else L8();
  L25():
    headers1 = ld headers;
    check L27() else D2();
  L26():
    r10 = dyn base1(<sym headers>);
    goto L7(r10);
  D2():
    deopt 7 [headers1];
  L8():
    goto L21();
  L21():
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L72() else L73();
  L27():
    headers2 = force? headers1;
    checkMissing(headers2);
    c1 = `==`(headers2, NULL);
    goto L7(c1);
  L28():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L9(r14):
    st nh = r14;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L22(r48):
    popenv;
    return r48;
  L29():
    headers3 = ld headers;
    check L31() else D3();
  L30():
    r13 = dyn base2(<sym headers>);
    goto L9(r13);
  L72():
    description1 = ld description;
    check L74() else D23();
  L73():
    r47 = dyn base9(<lang url(description, open, blocking, encoding, method, headers)>);
    goto L22(r47);
  D3():
    deopt 13 [headers3];
  D23():
    deopt 84 [description1];
  L10(r17):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L31():
    headers4 = force? headers3;
    checkMissing(headers4);
    names = ldf names in base;
    r15 = dyn names(headers4);
    check L32() else D4();
  L33():
    nh = ld nh;
    check L35() else D5();
  L34():
    r16 = dyn base3(<sym nh>);
    goto L10(r16);
  L74():
    description2 = force? description1;
    checkMissing(description2);
    open1 = ld open;
    check L75() else D24();
  D4():
    deopt 16 [r15];
  D5():
    deopt 20 [nh];
  D24():
    deopt 86 [open1];
  L11(r22, r23):
    r25 = `!=`(r22, r23);
    c3 = `as.logical`(r25);
    if c3 then L12(c3) else L41();
  L32():
    goto L9(r15);
  L35():
    nh1 = force? nh;
    checkMissing(nh1);
    length = ldf length in base;
    r18 = dyn length(nh1);
    check L36() else D6();
  L37():
    headers5 = ld headers;
    check L39() else D7();
  L38():
    r21 = dyn base4(<sym headers>);
    goto L11(r17, r21);
  L75():
    open2 = force? open1;
    checkMissing(open2);
    blocking1 = ld blocking;
    check L76() else D25();
  D6():
    deopt 23 [r18];
  D7():
    deopt 25 [r17, headers5];
  D25():
    deopt 88 [blocking1];
  L12(c4):
    c12 = `as.logical`(c4);
    if c12 then L14(c12) else L47();
  L36():
    goto L10(r18);
  L39():
    headers6 = force? headers5;
    checkMissing(headers6);
    length1 = ldf length in base;
    r24 = dyn length1(headers6);
    check L40() else D8();
  L41():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  L76():
    blocking2 = force? blocking1;
    checkMissing(blocking2);
    encoding1 = ld encoding;
    check L77() else D26();
  D8():
    deopt 28 [r17, r24];
  D26():
    deopt 90 [encoding1];
  L13(c8, r27):
    c9 = `as.logical`(r27);
    c10 = `||`(c8, c9);
    goto L12(c10);
  L14(c13):
    c21 = `as.logical`(c13);
    if c21 then L16(c21) else L53();
  L40():
    goto L11(r17, r24);
  L42():
    nh2 = ld nh;
    check L44() else D9();
  L43():
    r26 = dyn base5(<lang `==`(nh, "")>);
    goto L13(c3, r26);
  L47():
    sym6 = ldf anyNA;
    base6 = ldf anyNA in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L48() else L49();
  L77():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    method3 = ld method;
    check L78() else D27();
  D9():
    deopt 32 [c3, nh2];
  D27():
    deopt 92 [method3];
  L15(c17, r31):
    c18 = `as.logical`(r31);
    c19 = `||`(c17, c18);
    goto L14(c19);
  L16(c22):
    c30 = `as.logical`(c22);
    if c30 then L59() else L18();
  L44():
    nh3 = force? nh2;
    checkMissing(nh3);
    r28 = `==`(nh3, "");
    any = ldf any in base;
    r29 = dyn any(r28);
    check L45() else D10();
  L48():
    headers7 = ld headers;
    check L50() else D11();
  L49():
    r30 = dyn base6(<sym headers>);
    goto L15(c12, r30);
  L53():
    sym7 = ldf anyNA;
    base7 = ldf anyNA in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L54() else L55();
  L78():
    method4 = force? method3;
    checkMissing(method4);
    headers15 = ld headers;
    check L79() else D28();
  D10():
    deopt 37 [c3, r29];
  D11():
    deopt 41 [c12, headers7];
  D28():
    deopt 94 [headers15];
  L17(c26, r34):
    c27 = `as.logical`(r34);
    c28 = `||`(c26, c27);
    goto L16(c28);
  L18():
    goto L19();
  L19():
    paste0 = ldf paste0;
    check L63() else D17();
  L45():
    goto L13(c3, r29);
  L50():
    headers8 = force? headers7;
    checkMissing(headers8);
    anyNA = ldf anyNA in base;
    r32 = dyn anyNA(headers8);
    check L51() else D12();
  L54():
    nh4 = ld nh;
    check L56() else D13();
  L55():
    r33 = dyn base7(<sym nh>);
    goto L17(c21, r33);
  L59():
    stop = ldf stop;
    check L60() else D15();
  L79():
    headers16 = force? headers15;
    checkMissing(headers16);
    url = ldf url in base;
    r49 = dyn url(description2, open2, blocking2, encoding2, method4, headers16);
    check L80() else D29();
  D12():
    deopt 44 [c12, r32];
  D13():
    deopt 48 [c21, nh4];
  D15():
    deopt 54 [];
  D17():
    deopt 60 [];
  D29():
    deopt 97 [r49];
  L51():
    goto L15(c12, r32);
  L56():
    nh5 = force? nh4;
    checkMissing(nh5);
    anyNA1 = ldf anyNA in base;
    r35 = dyn anyNA1(nh5);
    check L57() else D14();
  L60():
    r36 = dyn stop("'headers' must have names and must not be NA");
    check L61() else D16();
  L63():
    p4 = prom<V +>{
      nh6 = ld nh;
      nh7 = force? nh6;
      checkMissing(nh7);
      return nh7;
    };
    p5 = prom<V +>{
      headers9 = ld headers;
      headers10 = force? headers9;
      checkMissing(headers10);
      return headers10;
    };
    r40 = dyn paste0(p4, ": ", p5);
    check L64() else D18();
  L80():
    goto L22(r49);
  D14():
    deopt 51 [c21, r35];
  D16():
    deopt 56 [r36];
  D18():
    deopt 64 [r40];
  L57():
    goto L17(c21, r35);
  L61():
    goto L19();
  L64():
    st headers = r40;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L65() else L66();
  L20(r42):
    st headers = r42;
    goto L21();
  L65():
    headers11 = ld headers;
    check L67() else D19();
  L66():
    r41 = dyn base8(<sym headers>, <lang paste0(headers, "\r\n", collapse="")>);
    goto L20(r41);
  D19():
    deopt 68 [headers11];
  L67():
    headers12 = force? headers11;
    checkMissing(headers12);
    paste1 = ldf paste0;
    check L68() else D20();
  D20():
    deopt 71 [];
  L68():
    p6 = prom<V +>{
      headers13 = ld headers;
      headers14 = force? headers13;
      checkMissing(headers14);
      return headers14;
    };
    r44 = dyn paste1[, , collapse](p6, "\r\n", "");
    check L69() else D21();
  D21():
    deopt 76 [r44];
  L69():
    list = ldf list in base;
    r45 = dyn list(headers12, r44);
    check L70() else D22();
  D22():
    deopt 78 [r45];
  L70():
    goto L20(r45);
  }
}