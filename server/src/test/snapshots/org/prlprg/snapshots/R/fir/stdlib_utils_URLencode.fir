fun main() {
  () -+> V { reg r:cls, reg URLencode:cls, reg r1:V, reg URLdecode:cls, reg y:*, reg y1:V, reg p:p(V +), reg r3:V, reg URLencode1:cls, reg r4:V, reg URLdecode1:cls, reg y2:*, reg y3:V, reg p1:p(V +), reg r6:V, reg URLdecode2:cls, reg p2:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg URLencode2:cls, reg z:*, reg z1:V, reg p3:p(V +), reg r12:V, reg URLencode3:cls, reg z2:*, reg z3:V, reg p4:p(V +), reg r14:V, reg c:cls, reg r15:V, reg URLdecode3:cls, reg URLencode4:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg c1:cls, reg r18:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V |
    mkenv;
    r = clos inner1552210273;
    st URLencode = r;
    URLencode = ldf URLencode;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn URLencode("a url with spaces and / and @");
    check L2() else D1();
  D1():
    deopt 6 [r1];
  L2():
    st y = r1;
    URLdecode = ldf URLdecode;
    check L3() else D2();
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r3 = dyn URLdecode(p);
    check L4() else D3();
  D3():
    deopt 11 [r3];
  L4():
    URLencode1 = ldf URLencode;
    check L5() else D4();
  D4():
    deopt 13 [];
  L5():
    r4 = dyn URLencode1[, reserved]("a url with spaces and / and @", TRUE);
    check L6() else D5();
  D5():
    deopt 17 [r4];
  L6():
    st y = r4;
    URLdecode1 = ldf URLdecode;
    check L7() else D6();
  D6():
    deopt 20 [];
  L7():
    p1 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r6 = dyn URLdecode1(p1);
    check L8() else D7();
  D7():
    deopt 22 [r6];
  L8():
    URLdecode2 = ldf URLdecode;
    check L9() else D8();
  D8():
    deopt 24 [];
  L9():
    p2 = prom<V +>{
      st z = "ab%20cd";
      invisible.0();
      return "ab%20cd";
    };
    r8 = dyn URLdecode2(p2);
    check L10() else D9();
  D9():
    deopt 26 [r8];
  L10():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0():
    URLdecode3 = ldf URLdecode;
    check L18() else D15();
  L11():
    URLencode2 = ldf URLencode;
    check L13() else D10();
  L12():
    r9 = dyn base(<lang URLencode(z)>, <lang URLencode(z, repeated=TRUE)>);
    goto L0();
  D10():
    deopt 30 [];
  D15():
    deopt 42 [];
  L13():
    p3 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r12 = dyn URLencode2(p3);
    check L14() else D11();
  L18():
    p6 = prom<V +>{
      URLencode4 = ldf URLencode;
      p5 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r17):
        return r17;
      L1():
        c1 = ldf c in base;
        r18 = dyn c1("url with space", "another one");
        goto L0(r18);
      L2():
        r16 = dyn base1("url with space", "another one");
        goto L0(r16);
      };
      r20 = dyn URLencode4(p5);
      return r20;
    };
    r22 = dyn URLdecode3(p6);
    check L19() else D16();
  D11():
    deopt 32 [r12];
  D16():
    deopt 44 [r22];
  L14():
    URLencode3 = ldf URLencode;
    check L15() else D12();
  L19():
    st y = r22;
    invisible.0();
    popenv;
    return r22;
  D12():
    deopt 34 [];
  L15():
    p4 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r14 = dyn URLencode3[, repeated](p4, TRUE);
    check L16() else D13();
  D13():
    deopt 38 [r14];
  L16():
    c = ldf c in base;
    r15 = dyn c(r12, r14);
    check L17() else D14();
  D14():
    deopt 40 [r15];
  L17():
    goto L0();
  }
}
fun inner1552210273(URL, reserved, repeated) {
  (reg URL:*, reg reserved:*, reg repeated:*) -+> V { var URL:*, var reserved:*, reg reserved_isMissing:L, reg reserved_orDefault:*, var repeated:*, reg repeated_isMissing:L, reg repeated_orDefault:*, reg vapply:cls, reg URL1:*, reg URL2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg character:cls, reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st URL = URL;
    reserved_isMissing = missing.0(reserved);
    if reserved_isMissing then L0(FALSE) else L0(reserved);
  L0(reserved_orDefault):
    st reserved = reserved_orDefault;
    repeated_isMissing = missing.0(repeated);
    if repeated_isMissing then L1(FALSE) else L1(repeated);
  L1(repeated_orDefault):
    st repeated = repeated_orDefault;
    vapply = ldf vapply;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      URL1 = ld URL;
      URL2 = force? URL1;
      checkMissing(URL2);
      return URL2;
    };
    p1 = prom<V +>{
      r1 = clos inner487324683;
      return r1;
    };
    p2 = prom<V +>{
      character = ldf character;
      r3 = dyn character(1.0);
      return r3;
    };
    r5 = dyn vapply[, , , `USE.NAMES`](p, p1, p2, FALSE);
    check L3() else D1();
  D1():
    deopt 7 [r5];
  L3():
    popenv;
    return r5;
  }
}
fun inner487324683(URL) {
  (reg URL:*) -+> V { var URL:*, reg repeated:*, reg repeated1:V, reg r:V, reg c:L, reg c2:V, reg grepl:cls, reg URL1:*, reg URL2:V, reg p:p(V +), reg r2:V, reg c3:L, reg c4:V, reg c6:L, reg URL3:*, reg URL4:V, reg paste0:cls, reg reserved:*, reg reserved1:V, reg r5:V, reg c7:L, reg p1:p(V +), reg r7:V, reg strsplit:cls, reg URL5:*, reg URL6:V, reg p2:p(V +), reg r9:V, reg c8:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg grep:cls, reg OK:*, reg OK1:V, reg p3:p(V +), reg x:*, reg x1:V, reg p4:p(V +), reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg z:*, reg z1:V, reg length:cls, reg r18:V, reg c9:L, reg vapply:cls, reg x2:*, reg x3:V, reg c10:L, reg x5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg z2:*, reg z3:V, reg __1:cls, reg r19:V, reg p5:p(V +), reg r21:cls, reg p6:p(V +), reg r23:V, reg y:*, reg y1:V, reg l:*, reg c11:L, reg y3:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg y5:V, reg dx5:V, reg z4:*, reg z5:V, reg ___:cls, reg r24:V, reg paste1:cls, reg x6:*, reg x7:V, reg p7:p(V +), reg r26:V |
    mkenv;
    st URL = URL;
    repeated = ld repeated;
    check L8() else D0();
  D0():
    deopt 0 [repeated];
  L8():
    repeated1 = force? repeated;
    checkMissing(repeated1);
    r = `!`(repeated1);
    c = `as.logical`(r);
    if c then L9() else L0(c);
  L0(c2):
    c6 = `as.logical`(c2);
    if c6 then L13() else L1();
  L9():
    grepl = ldf grepl;
    check L10() else D1();
  D1():
    deopt 4 [c];
  L1():
    paste0 = ldf paste0;
    check L17() else D4();
  L10():
    p = prom<V +>{
      URL1 = ld URL;
      URL2 = force? URL1;
      checkMissing(URL2);
      return URL2;
    };
    r2 = dyn grepl[, , useBytes]("%[[:xdigit:]]{2}", p, TRUE);
    check L11() else D2();
  L13():
    URL3 = ld URL;
    check L14() else D3();
  D2():
    deopt 9 [c, r2];
  D3():
    deopt 11 [URL3];
  D4():
    deopt 17 [];
  L11():
    c3 = `as.logical`(r2);
    c4 = `&&`(c, c3);
    goto L0(c4);
  L14():
    URL4 = force? URL3;
    checkMissing(URL4);
    popenv;
    return URL4;
  L17():
    p1 = prom<V +>{
      reserved = ld reserved;
      reserved1 = force? reserved;
      checkMissing(reserved1);
      r5 = `!`(reserved1);
      c7 = `as.logical`(r5);
      if c7 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "][!$&'()*+,;=:/?@#";
    };
    r7 = dyn paste0("[^", p1, "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz0123456789._~-", "]");
    check L18() else D5();
  D5():
    deopt 23 [r7];
  L18():
    st OK = r7;
    strsplit = ldf strsplit;
    check L19() else D6();
  D6():
    deopt 26 [];
  L19():
    p2 = prom<V +>{
      URL5 = ld URL;
      URL6 = force? URL5;
      checkMissing(URL6);
      return URL6;
    };
    r9 = dyn strsplit(p2, "");
    check L20() else D7();
  D7():
    deopt 29 [r9];
  L20():
    c8 = `is.object`(r9);
    if c8 then L21() else L22(r9);
  L3(dx1):
    st x = dx1;
    grep = ldf grep;
    check L24() else D8();
  L21():
    dr = tryDispatchBuiltin.1("[[", r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(r11):
    __ = ldf `[[` in base;
    r12 = dyn __(r11, 1);
    goto L3(r12);
  D8():
    deopt 35 [];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L24():
    p3 = prom<V +>{
      OK = ld OK;
      OK1 = force? OK;
      checkMissing(OK1);
      return OK1;
    };
    p4 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r15 = dyn grep(p3, p4);
    check L25() else D9();
  D9():
    deopt 38 [r15];
  L25():
    st z = r15;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L4(r17):
    c9 = `as.logical`(r17);
    if c9 then L30() else L5();
  L26():
    z = ld z;
    check L28() else D10();
  L27():
    r16 = dyn base(<sym z>);
    goto L4(r16);
  D10():
    deopt 42 [z];
  L5():
    goto L7();
  L7():
    paste1 = ldf paste;
    check L39() else D16();
  L28():
    z1 = force? z;
    checkMissing(z1);
    length = ldf length in base;
    r18 = dyn length(z1);
    check L29() else D11();
  L30():
    vapply = ldf vapply;
    check L31() else D12();
  D11():
    deopt 45 [r18];
  D12():
    deopt 47 [];
  D16():
    deopt 63 [];
  L29():
    goto L4(r18);
  L31():
    p5 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      c10 = `is.object`(x3);
      if c10 then L1() else L2(x3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x5):
      z2 = ld z;
      z3 = force? z2;
      __1 = ldf `[` in base;
      r19 = dyn __1(x5, z3);
      goto L0(r19);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      r21 = clos inner2501545716;
      return r21;
    };
    r23 = dyn vapply(p5, p6, "");
    check L32() else D13();
  L39():
    p7 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r26 = dyn paste1[, collapse](p7, "");
    check L40() else D17();
  D13():
    deopt 51 [r23];
  D17():
    deopt 67 [r26];
  L32():
    st y = r23;
    y = ld y;
    check L33() else D14();
  L40():
    popenv;
    return r26;
  D14():
    deopt 53 [y];
  L33():
    y1 = force? y;
    checkMissing(y1);
    l = ld x;
    c11 = `is.object`(l);
    if c11 then L34() else L35(y1, l);
  L6(y5, dx5):
    st x = dx5;
    goto L7();
  L34():
    dr4 = tryDispatchBuiltin.0("[<-", l, y1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L36() else L35(y1, dr4);
  L35(y3, l2):
    z4 = ld z;
    check L37() else D15();
  D15():
    deopt 56 [y3, l2, y1, z4];
  L36():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(y1, dx4);
  L37():
    z5 = force? z4;
    ___ = ldf `[<-` in base;
    r24 = dyn ___(l2, y1, z5);
    goto L6(y3, r24);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste0:cls, reg toupper:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg charToRaw:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg as_character:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    st x = x;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      toupper = ldf toupper;
      p1 = prom<V +>{
        sym = ldf `as.character`;
        base = ldf `as.character` in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        charToRaw = ldf charToRaw;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r3 = dyn charToRaw(p);
        as_character = ldf `as.character` in base;
        r4 = dyn as_character(r3);
        goto L0(r4);
      L2():
        r = dyn base(<lang charToRaw(x)>);
        goto L0(r);
      };
      r6 = dyn toupper(p1);
      return r6;
    };
    r8 = dyn paste0[, , collapse]("%", p2, "");
    check L1() else D1();
  D1():
    deopt 6 [r8];
  L1():
    popenv;
    return r8;
  }
}