fun main() {
  () -+> V { reg r:cls, reg data_frame:cls, reg character:cls, reg r1:V, reg p:p(V +), reg integer:cls, reg r3:V, reg p1:p(V +), reg integer1:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg strcapture:cls, reg pattern:*, reg pattern1:V, reg p3:p(V +), reg x:*, reg x1:V, reg p4:p(V +), reg proto:*, reg proto1:V, reg p5:p(V +), reg r11:V |
    mkenv;
    r = clos inner3793684547;
    st strcapture = r;
    st x = "chr1:1-1000";
    st pattern = "(.*?):([[:digit:]]+)-([[:digit:]]+)";
    data_frame = ldf `data.frame`;
    check L0() else D0();
  D0():
    deopt 10 [];
  L0():
    p = prom<V +>{
      character = ldf character;
      r1 = dyn character();
      return r1;
    };
    p1 = prom<V +>{
      integer = ldf integer;
      r3 = dyn integer();
      return r3;
    };
    p2 = prom<V +>{
      integer1 = ldf integer;
      r5 = dyn integer1();
      return r5;
    };
    r7 = dyn data_frame[chr, start, end](p, p1, p2);
    check L1() else D1();
  D1():
    deopt 17 [r7];
  L1():
    st proto = r7;
    strcapture = ldf strcapture;
    check L2() else D2();
  D2():
    deopt 20 [];
  L2():
    p3 = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p4 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p5 = prom<V +>{
      proto = ld proto;
      proto1 = force? proto;
      checkMissing(proto1);
      return proto1;
    };
    r11 = dyn strcapture(p3, p4, p5);
    check L3() else D3();
  D3():
    deopt 24 [r11];
  L3():
    popenv;
    return r11;
  }
}
fun inner3793684547(pattern, x, proto, perl, useBytes) {
  (reg pattern:*, reg x:*, reg proto:*, reg perl:*, reg useBytes:*) -+> V { var pattern:*, var x:*, var proto:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg regexec:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg perl1:*, reg perl2:V, reg p2:p(V +), reg useBytes1:*, reg useBytes2:V, reg p3:p(V +), reg r4:V, reg regmatches:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg m:*, reg m1:V, reg p5:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg proto1:*, reg proto2:V, reg length:cls, reg r10:V, reg r11:V, reg lengths:cls, reg str:*, reg str1:V, reg p6:p(V +), reg r13:V, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg ntokens:*, reg ntokens1:V, reg rep_int:cls, reg r19:V, reg list:cls, reg r20:V, reg l:*, reg c:L, reg r22:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nomatch:*, reg nomatch1:V, reg ___:cls, reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg str2:*, reg str3:V, reg length1:cls, reg r28:V, reg r29:V, reg c1:L, reg c3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg c6:L, reg r31:V, reg str4:*, reg str5:V, reg c7:L, reg c9:L, reg str7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c11:L, reg dx3:V, reg __:cls, reg r32:V, reg length2:cls, reg r33:V, reg ntokens2:*, reg ntokens3:V, reg r34:V, reg c12:L, reg c13:V, reg c15:L, reg stop:cls, reg r35:V, reg matrix:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg unlist:cls, reg str8:*, reg str9:V, reg p7:p(V +), reg r40:V, reg as_character:cls, reg r41:V, reg p8:p(V +), reg ntokens4:*, reg ntokens5:V, reg p9:p(V +), reg r44:V, reg c16:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r47:V, reg conformToProto:cls, reg mat:*, reg mat1:V, reg p10:p(V +), reg proto3:*, reg proto4:V, reg p11:p(V +), reg r50:V |
    mkenv;
    st pattern = pattern;
    st x = x;
    st proto = proto;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L0(FALSE) else L0(perl);
  L0(perl_orDefault):
    st perl = perl_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L1(FALSE) else L1(useBytes);
  L1(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    regexec = ldf regexec;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      perl1 = ld perl;
      perl2 = force? perl1;
      checkMissing(perl2);
      return perl2;
    };
    p3 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    r4 = dyn regexec[, , perl, useBytes](p, p1, p2, p3);
    check L14() else D1();
  D1():
    deopt 8 [r4];
  L14():
    st m = r4;
    regmatches = ldf regmatches;
    check L15() else D2();
  D2():
    deopt 11 [];
  L15():
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p5 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r7 = dyn regmatches(p4, p5);
    check L16() else D3();
  D3():
    deopt 14 [r7];
  L16():
    st str = r7;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L2(r9):
    r11 = `+`(r9, 1);
    st ntokens = r11;
    lengths = ldf lengths;
    check L21() else D6();
  L17():
    proto1 = ld proto;
    check L19() else D4();
  L18():
    r8 = dyn base(<sym proto>);
    goto L2(r8);
  D4():
    deopt 18 [proto1];
  D6():
    deopt 26 [];
  L19():
    proto2 = force? proto1;
    checkMissing(proto2);
    length = ldf length in base;
    r10 = dyn length(proto2);
    check L20() else D5();
  L21():
    p6 = prom<V +>{
      str = ld str;
      str1 = force? str;
      checkMissing(str1);
      return str1;
    };
    r13 = dyn lengths(p6);
    check L22() else D7();
  D5():
    deopt 21 [r10];
  D7():
    deopt 28 [r13];
  L20():
    goto L2(r10);
  L22():
    r14 = `==`(r13, 0);
    st nomatch = r14;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L3(r16):
    l = ld str;
    c = `is.object`(l);
    if c then L30() else L31(r16, l);
  L23():
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L24():
    r15 = dyn base1(<lang rep.int(NA_STR, ntokens)>);
    goto L3(r15);
  L4(r18):
    list = ldf list in base;
    r20 = dyn list(r18);
    check L29() else D10();
  L5(dx1):
    st str = dx1;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L25():
    ntokens = ld ntokens;
    check L27() else D8();
  L26():
    r17 = dyn base2(NA_STR, <sym ntokens>);
    goto L4(r17);
  L30():
    dr = tryDispatchBuiltin.0("[<-", l, r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(r16, dr);
  L31(r22, l2):
    nomatch = ld nomatch;
    check L33() else D11();
  D8():
    deopt 37 [ntokens];
  D10():
    deopt 42 [r20];
  D11():
    deopt 44 [r22, l2, r16, nomatch];
  L6(r27):
    r29 = `>`(r27, 0);
    c1 = `as.logical`(r29);
    if c1 then L38() else L7(c1);
  L27():
    ntokens1 = force? ntokens;
    checkMissing(ntokens1);
    rep_int = ldf `rep.int` in base;
    r19 = dyn rep_int(NA_STR, ntokens1);
    check L28() else D9();
  L29():
    goto L3(r20);
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L33():
    nomatch1 = force? nomatch;
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l2, r16, nomatch1);
    goto L5(r25);
  L34():
    str2 = ld str;
    check L36() else D12();
  L35():
    r26 = dyn base3(<sym str>);
    goto L6(r26);
  D9():
    deopt 40 [r19];
  D12():
    deopt 50 [str2];
  L7(c3):
    c15 = `as.logical`(c3);
    if c15 then L48() else L10();
  L28():
    goto L4(r19);
  L36():
    str3 = force? str2;
    checkMissing(str3);
    length1 = ldf length in base;
    r28 = dyn length1(str3);
    check L37() else D13();
  L38():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  D13():
    deopt 53 [r28];
  L8(c6, r31):
    ntokens2 = ld ntokens;
    check L46() else D16();
  L10():
    goto L11();
  L11():
    matrix = ldf matrix;
    check L52() else D19();
  L37():
    goto L6(r28);
  L39():
    str4 = ld str;
    check L41() else D14();
  L40():
    r30 = dyn base4(<lang `[[`(str, 1)>);
    goto L8(c1, r30);
  L48():
    stop = ldf stop;
    check L49() else D17();
  D14():
    deopt 58 [c1, str4];
  D16():
    deopt 64 [c6, r31, ntokens2];
  D17():
    deopt 69 [];
  D19():
    deopt 75 [];
  L41():
    str5 = force? str4;
    checkMissing(str5);
    c7 = `is.object`(str5);
    if c7 then L42() else L43(c1, str5);
  L46():
    ntokens3 = force? ntokens2;
    checkMissing(ntokens3);
    r34 = `!=`(r31, ntokens3);
    c12 = `as.logical`(r34);
    c13 = `&&`(c6, c12);
    goto L7(c13);
  L49():
    r35 = dyn stop("The number of captures in 'pattern' != 'length(proto)'");
    check L50() else D18();
  L52():
    p8 = prom<V +>{
      sym5 = ldf `as.character`;
      base5 = ldf `as.character` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      unlist = ldf unlist;
      p7 = prom<V +>{
        str8 = ld str;
        str9 = force? str8;
        checkMissing(str9);
        return str9;
      };
      r40 = dyn unlist(p7);
      as_character = ldf `as.character` in base;
      r41 = dyn as_character(r40);
      goto L0(r41);
    L2():
      r37 = dyn base5(<lang unlist(str)>);
      goto L0(r37);
    };
    p9 = prom<V +>{
      ntokens4 = ld ntokens;
      ntokens5 = force? ntokens4;
      checkMissing(ntokens5);
      return ntokens5;
    };
    r44 = dyn matrix[, ncol, byrow](p8, p9, TRUE);
    check L53() else D20();
  D18():
    deopt 71 [r35];
  D20():
    deopt 81 [r44];
  L9(c11, dx3):
    length2 = ldf length in base;
    r33 = dyn length2(dx3);
    check L45() else D15();
  L42():
    dr2 = tryDispatchBuiltin.1("[[", str5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(c1, dr2);
  L43(c9, str7):
    __ = ldf `[[` in base;
    r32 = dyn __(str7, 1);
    goto L9(c9, r32);
  L50():
    goto L11();
  L53():
    c16 = `is.object`(r44);
    if c16 then L54() else L55();
  D15():
    deopt 64 [c11, r33];
  L12(dx5):
    st mat = dx5;
    conformToProto = ldf conformToProto;
    check L57() else D21();
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(c1, dx2);
  L45():
    goto L8(c11, r33);
  L54():
    dr4 = tryDispatchBuiltin.1("[", r44);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L56() else L55();
  L55():
    __1 = ldf `[` in base;
    r47 = dyn __1(r44, <missing>, -1, FALSE);
    goto L12(r47);
  D21():
    deopt 91 [];
  L56():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx4);
  L57():
    p10 = prom<V +>{
      mat = ld mat;
      mat1 = force? mat;
      checkMissing(mat1);
      return mat1;
    };
    p11 = prom<V +>{
      proto3 = ld proto;
      proto4 = force? proto3;
      checkMissing(proto4);
      return proto4;
    };
    r50 = dyn conformToProto(p10, p11);
    check L58() else D22();
  D22():
    deopt 94 [r50];
  L58():
    popenv;
    return r50;
  }
}