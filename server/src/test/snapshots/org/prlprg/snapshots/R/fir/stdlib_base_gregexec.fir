fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4170804266;
    st gregexec = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4170804266(pattern, text, `ignore.case`, perl, fixed, useBytes) {
  (reg pattern:*, reg text:*, reg ignore_case:*, reg perl:*, reg fixed:*, reg useBytes:*) -+> V { var pattern:*, var text:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg is_factor:cls, reg text1:*, reg text2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg levels:cls, reg text3:*, reg text4:V, reg p1:p(V +), reg r5:V, reg length:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c8:L, reg r10:V, reg r11:V, reg text5:*, reg text6:V, reg length1:cls, reg r12:V, reg r13:V, reg c9:L, reg c10:V, reg c12:L, reg gregexec:cls, reg pattern1:*, reg pattern2:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg levels1:cls, reg text7:*, reg text8:V, reg p3:p(V +), reg r18:V, reg c13:cls, reg r19:V, reg p4:p(V +), reg ignore_case1:*, reg ignore_case2:V, reg p5:p(V +), reg perl1:*, reg perl2:V, reg p6:p(V +), reg fixed1:*, reg fixed2:V, reg p7:p(V +), reg useBytes1:*, reg useBytes2:V, reg p8:p(V +), reg r25:V, reg out:*, reg out1:V, reg c14:L, reg out3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg out6:V, reg r27:V, reg out7:*, reg out8:V, reg length2:cls, reg r28:V, reg __:cls, reg r29:V, reg out9:*, reg out10:V, reg c15:L, reg out12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg text9:*, reg text10:V, reg __1:cls, reg r30:V, reg outna:*, reg outna1:V, reg l:*, reg c16:L, reg outna3:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg outna10:V, reg l5:*, reg outna11:V, reg r32:V, reg text11:*, reg text12:V, reg is_na:cls, reg r33:V, reg ___:cls, reg r34:V, reg out13:*, reg out14:V, reg gregexpr:cls, reg pattern3:*, reg pattern4:V, reg p9:p(V +), reg text13:*, reg text14:V, reg p10:p(V +), reg ignore_case3:*, reg ignore_case4:V, reg p11:p(V +), reg fixed3:*, reg fixed4:V, reg p12:p(V +), reg useBytes3:*, reg useBytes4:V, reg p13:p(V +), reg perl3:*, reg perl4:V, reg p14:p(V +), reg r43:V, reg perl5:*, reg perl6:V, reg c17:L, reg c19:V, reg fixed5:*, reg fixed6:V, reg r44:V, reg c20:L, reg c21:V, reg c23:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg c24:cls, reg r47:V, reg r48:cls, reg lapply:cls, reg dat:*, reg dat1:V, reg p15:p(V +), reg process:*, reg process1:V, reg p16:p(V +), reg r51:V, reg lapply1:cls, reg regmatches:cls, reg text15:*, reg text16:V, reg p17:p(V +), reg dat2:*, reg dat3:V, reg p18:p(V +), reg r54:V, reg p19:p(V +), reg regexec:*, reg regexec1:V, reg p20:p(V +), reg pattern5:*, reg pattern6:V, reg p21:p(V +), reg ignore_case5:*, reg ignore_case6:V, reg p22:p(V +), reg perl7:*, reg perl8:V, reg p23:p(V +), reg fixed7:*, reg fixed8:V, reg p24:p(V +), reg useBytes5:*, reg useBytes6:V, reg p25:p(V +), reg r62:V, reg lengths:cls, reg m1:*, reg m2:V, reg p26:p(V +), reg r64:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r65:V, reg r66:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r67:V, reg r68:V, reg m3:*, reg m4:V, reg length3:cls, reg r69:V, reg vector:cls, reg r70:V, reg mlen:*, reg mlen1:V, reg r71:V, reg dat4:*, reg dat5:V, reg c25:L, reg dat7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg im:*, reg im1:V, reg r72:V, reg __2:cls, reg r73:V, reg l6:*, reg c26:L, reg dx9:V, reg l8:*, reg dr8:V, reg dc4:L, reg dx11:V, reg dx13:V, reg im2:*, reg im3:V, reg r74:V, reg ___1:cls, reg r75:V, reg Map:cls, reg r76:cls, reg p27:p(V +), reg dat8:*, reg dat9:V, reg c27:L, reg dat11:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg im4:*, reg im5:V, reg __3:cls, reg r78:V, reg p28:p(V +), reg m5:*, reg m6:V, reg c28:L, reg m8:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg im6:*, reg im7:V, reg __4:cls, reg r80:V, reg p29:p(V +), reg r82:V, reg l9:*, reg c29:L, reg r84:V, reg l11:*, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg im8:*, reg im9:V, reg ___2:cls, reg r87:V, reg res:*, reg res1:V |
    mkenv;
    st pattern = pattern;
    st text = text;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L0(FALSE) else L0(ignore_case);
  L0(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L1(FALSE) else L1(perl);
  L1(perl_orDefault):
    st perl = perl_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L2(FALSE) else L2(fixed);
  L2(fixed_orDefault):
    st fixed = fixed_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L3(FALSE) else L3(useBytes);
  L3(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    is_factor = ldf `is.factor`;
    check L22() else D0();
  D0():
    deopt 1 [];
  L22():
    p = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    r1 = dyn is_factor(p);
    check L23() else D1();
  D1():
    deopt 3 [r1];
  L23():
    c = `as.logical`(r1);
    if c then L24() else L4(c);
  L4(c2):
    c12 = `as.logical`(c2);
    if c12 then L35() else L7();
  L24():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L5(c5, r3):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L7():
    gregexpr = ldf gregexpr;
    check L62() else D18();
  L25():
    levels = ldf levels;
    check L27() else D2();
  L26():
    r2 = dyn base(<lang levels(text)>);
    goto L5(c, r2);
  L35():
    gregexec = ldf gregexec;
    check L36() else D7();
  D2():
    deopt 7 [c];
  D7():
    deopt 20 [];
  D18():
    deopt 62 [];
  L6(c8, r10, r11):
    r13 = `<`(r10, r11);
    c9 = `as.logical`(r13);
    c10 = `&&`(c8, c9);
    goto L4(c10);
  L27():
    p1 = prom<V +>{
      text3 = ld text;
      text4 = force? text3;
      checkMissing(text4);
      return text4;
    };
    r5 = dyn levels(p1);
    check L28() else D3();
  L30():
    text5 = ld text;
    check L32() else D5();
  L31():
    r9 = dyn base1(<sym text>);
    goto L6(c5, r3, r9);
  L36():
    p2 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      levels1 = ldf levels;
      p3 = prom<V +>{
        text7 = ld text;
        text8 = force? text7;
        checkMissing(text8);
        return text8;
      };
      r18 = dyn levels1(p3);
      c13 = ldf c in base;
      r19 = dyn c13(r18, NA_STR);
      goto L0(r19);
    L2():
      r15 = dyn base2(<lang levels(text)>, NA_STR);
      goto L0(r15);
    };
    p5 = prom<V +>{
      ignore_case1 = ld `ignore.case`;
      ignore_case2 = force? ignore_case1;
      checkMissing(ignore_case2);
      return ignore_case2;
    };
    p6 = prom<V +>{
      perl1 = ld perl;
      perl2 = force? perl1;
      checkMissing(perl2);
      return perl2;
    };
    p7 = prom<V +>{
      fixed1 = ld fixed;
      fixed2 = force? fixed1;
      checkMissing(fixed2);
      return fixed2;
    };
    p8 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    r25 = dyn gregexec(p2, p4, p5, p6, p7, p8);
    check L37() else D8();
  L62():
    p9 = prom<V +>{
      pattern3 = ld pattern;
      pattern4 = force? pattern3;
      checkMissing(pattern4);
      return pattern4;
    };
    p10 = prom<V +>{
      text13 = ld text;
      text14 = force? text13;
      checkMissing(text14);
      return text14;
    };
    p11 = prom<V +>{
      ignore_case3 = ld `ignore.case`;
      ignore_case4 = force? ignore_case3;
      checkMissing(ignore_case4);
      return ignore_case4;
    };
    p12 = prom<V +>{
      fixed3 = ld fixed;
      fixed4 = force? fixed3;
      checkMissing(fixed4);
      return fixed4;
    };
    p13 = prom<V +>{
      useBytes3 = ld useBytes;
      useBytes4 = force? useBytes3;
      checkMissing(useBytes4);
      return useBytes4;
    };
    p14 = prom<V +>{
      perl3 = ld perl;
      perl4 = force? perl3;
      checkMissing(perl4);
      return perl4;
    };
    r43 = dyn gregexpr[pattern, text, `ignore.case`, fixed, useBytes, perl](p9, p10, p11, p12, p13, p14);
    check L63() else D19();
  D3():
    deopt 9 [c, r5];
  D5():
    deopt 13 [c5, r3, text5];
  D8():
    deopt 27 [r25];
  D19():
    deopt 75 [r43];
  L28():
    length = ldf length in base;
    r6 = dyn length(r5);
    check L29() else D4();
  L32():
    text6 = force? text5;
    checkMissing(text6);
    length1 = ldf length in base;
    r12 = dyn length1(text6);
    check L33() else D6();
  L37():
    st out = r25;
    out = ld out;
    check L38() else D9();
  L63():
    st dat = r43;
    perl5 = ld perl;
    check L64() else D20();
  D4():
    deopt 11 [c, r6];
  D6():
    deopt 16 [c5, r3, r12];
  D9():
    deopt 29 [out];
  D20():
    deopt 77 [perl5];
  L29():
    goto L5(c, r6);
  L33():
    goto L6(c5, r3, r12);
  L38():
    out1 = force? out;
    checkMissing(out1);
    c14 = `is.object`(out1);
    if c14 then L39() else L40(out1);
  L64():
    perl6 = force? perl5;
    checkMissing(perl6);
    c17 = `as.logical`(perl6);
    if c17 then L65() else L14(c17);
  L8(dx1):
    st outna = dx1;
    out9 = ld out;
    check L46() else D12();
  L14(c19):
    c23 = `as.logical`(c19);
    if c23 then L68() else L15();
  L39():
    dr = tryDispatchBuiltin.1("[", out1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(dr);
  L40(out3):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L65():
    fixed5 = ld fixed;
    check L66() else D21();
  D12():
    deopt 39 [out9];
  D21():
    deopt 79 [c17, fixed5];
  L9(out6, r27):
    __ = ldf `[` in base;
    r29 = dyn __(out6, r27);
    goto L8(r29);
  L15():
    lapply1 = ldf lapply;
    check L75() else D25();
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L42():
    out7 = ld out;
    check L44() else D10();
  L43():
    r26 = dyn base3(<sym out>);
    goto L9(out3, r26);
  L46():
    out10 = force? out9;
    checkMissing(out10);
    c15 = `is.object`(out10);
    if c15 then L47() else L48(out10);
  L66():
    fixed6 = force? fixed5;
    checkMissing(fixed6);
    r44 = `!`(fixed6);
    c20 = `as.logical`(r44);
    c21 = `&&`(c17, c20);
    goto L14(c21);
  L68():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  D10():
    deopt 33 [out3, out7];
  D25():
    deopt 100 [];
  L10(dx3):
    st out = dx3;
    outna = ld outna;
    check L51() else D14();
  L16(r46):
    st `capt.attr` = r46;
    r48 = clos inner2501545716;
    st process = r48;
    lapply = ldf lapply;
    check L72() else D23();
  L44():
    out8 = force? out7;
    checkMissing(out8);
    length2 = ldf length in base;
    r28 = dyn length2(out8);
    check L45() else D11();
  L47():
    dr2 = tryDispatchBuiltin.1("[", out10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48(dr2);
  L48(out12):
    text9 = ld text;
    check L50() else D13();
  L69():
    c24 = ldf c in base;
    r47 = dyn c24("capture.start", "capture.length", "capture.names");
    check L71() else D22();
  L70():
    r45 = dyn base5("capture.start", "capture.length", "capture.names");
    goto L16(r45);
  L75():
    p19 = prom<V +>{
      regmatches = ldf regmatches;
      p17 = prom<V +>{
        text15 = ld text;
        text16 = force? text15;
        checkMissing(text16);
        return text16;
      };
      p18 = prom<V +>{
        dat2 = ld dat;
        dat3 = force? dat2;
        checkMissing(dat3);
        return dat3;
      };
      r54 = dyn regmatches(p17, p18);
      return r54;
    };
    p20 = prom<V +>{
      regexec = ld regexec;
      regexec1 = force? regexec;
      checkMissing(regexec1);
      return regexec1;
    };
    p21 = prom<V +>{
      pattern5 = ld pattern;
      pattern6 = force? pattern5;
      checkMissing(pattern6);
      return pattern6;
    };
    p22 = prom<V +>{
      ignore_case5 = ld `ignore.case`;
      ignore_case6 = force? ignore_case5;
      checkMissing(ignore_case6);
      return ignore_case6;
    };
    p23 = prom<V +>{
      perl7 = ld perl;
      perl8 = force? perl7;
      checkMissing(perl8);
      return perl8;
    };
    p24 = prom<V +>{
      fixed7 = ld fixed;
      fixed8 = force? fixed7;
      checkMissing(fixed8);
      return fixed8;
    };
    p25 = prom<V +>{
      useBytes5 = ld useBytes;
      useBytes6 = force? useBytes5;
      checkMissing(useBytes6);
      return useBytes6;
    };
    r62 = dyn lapply1[, , pattern, `ignore.case`, perl, fixed, useBytes](p19, p20, p21, p22, p23, p24, p25);
    check L76() else D26();
  D11():
    deopt 36 [out3, r28];
  D13():
    deopt 41 [out12, text9];
  D14():
    deopt 45 [outna];
  D22():
    deopt 89 [r47];
  D23():
    deopt 95 [];
  D26():
    deopt 113 [r62];
  L45():
    goto L9(out3, r28);
  L49():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L50():
    text10 = force? text9;
    __1 = ldf `[` in base;
    r30 = dyn __1(out12, text10);
    goto L10(r30);
  L51():
    outna1 = force? outna;
    checkMissing(outna1);
    l = ld out;
    c16 = `is.object`(l);
    if c16 then L52() else L53(outna1, l);
  L71():
    goto L16(r47);
  L72():
    p15 = prom<V +>{
      dat = ld dat;
      dat1 = force? dat;
      checkMissing(dat1);
      return dat1;
    };
    p16 = prom<V +>{
      process = ld process;
      process1 = force? process;
      checkMissing(process1);
      return process1;
    };
    r51 = dyn lapply(p15, p16);
    check L73() else D24();
  L76():
    st m1 = r62;
    lengths = ldf lengths;
    check L77() else D27();
  D24():
    deopt 98 [r51];
  D27():
    deopt 116 [];
  L11(dx5):
    st out = dx5;
    out13 = ld out;
    check L59() else D17();
  L52():
    dr4 = tryDispatchBuiltin.0("[<-", l, outna1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L54() else L53(outna1, dr4);
  L53(outna3, l2):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L73():
    popenv;
    return r51;
  L77():
    p26 = prom<V +>{
      m1 = ld m1;
      m2 = force? m1;
      checkMissing(m2);
      return m2;
    };
    r64 = dyn lengths(p26);
    check L78() else D28();
  D17():
    deopt 56 [out13];
  D28():
    deopt 118 [r64];
  L12(outna10, l5, outna11, r32):
    ___ = ldf `[<-` in base;
    r34 = dyn ___(l5, outna11, r32);
    goto L11(r34);
  L54():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L55():
    text11 = ld text;
    check L57() else D15();
  L56():
    r31 = dyn base4(<sym text>);
    goto L12(outna3, l2, outna1, r31);
  L59():
    out14 = force? out13;
    checkMissing(out14);
    popenv;
    return out14;
  L78():
    st mlen = r64;
    sym6 = ldf vector;
    base6 = ldf vector in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L79() else L80();
  D15():
    deopt 50 [outna3, l2, outna1, text11];
  L17(r66):
    st res = r66;
    mlen = ld mlen;
    check L86() else D32();
  L57():
    text12 = force? text11;
    checkMissing(text12);
    is_na = ldf `is.na` in base;
    r33 = dyn is_na(text12);
    check L58() else D16();
  L79():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L81() else L82();
  L80():
    r65 = dyn base6("list", <lang length(m1)>);
    goto L17(r65);
  D16():
    deopt 53 [outna3, l2, outna1, r33];
  D32():
    deopt 132 [mlen];
  L18(r68):
    vector = ldf vector in base;
    r70 = dyn vector("list", r68);
    check L85() else D31();
  L58():
    goto L12(outna3, l2, outna1, r33);
  L81():
    m3 = ld m1;
    check L83() else D29();
  L82():
    r67 = dyn base7(<sym m1>);
    goto L18(r67);
  L86():
    mlen1 = force? mlen;
    checkMissing(mlen1);
    r71 = `>`(mlen1, 0.0);
    st im = r71;
    dat4 = ld dat;
    check L87() else D33();
  D29():
    deopt 125 [m3];
  D31():
    deopt 130 [r70];
  D33():
    deopt 137 [dat4];
  L83():
    m4 = force? m3;
    checkMissing(m4);
    length3 = ldf length in base;
    r69 = dyn length3(m4);
    check L84() else D30();
  L85():
    goto L17(r70);
  L87():
    dat5 = force? dat4;
    checkMissing(dat5);
    c25 = `is.object`(dat5);
    if c25 then L88() else L89(dat5);
  D30():
    deopt 128 [r69];
  L19(dx7):
    l6 = ld res;
    c26 = `is.object`(l6);
    if c26 then L92() else L93(dx7, l6);
  L84():
    goto L18(r69);
  L88():
    dr6 = tryDispatchBuiltin.1("[", dat5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L90() else L89(dr6);
  L89(dat7):
    im = ld im;
    check L91() else D34();
  D34():
    deopt 139 [dat7, im];
  L20(dx13):
    st res = dx13;
    Map = ldf Map;
    check L96() else D36();
  L90():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L19(dx6);
  L91():
    im1 = force? im;
    checkMissing(im1);
    r72 = `!`(im1);
    __2 = ldf `[` in base;
    r73 = dyn __2(dat7, r72);
    goto L19(r73);
  L92():
    dr8 = tryDispatchBuiltin.0("[<-", l6, dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L94() else L93(dx7, dr8);
  L93(dx9, l8):
    im2 = ld im;
    check L95() else D35();
  D35():
    deopt 144 [dx9, l8, dx7, im2];
  D36():
    deopt 150 [];
  L94():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L20(dx11);
  L95():
    im3 = force? im2;
    checkMissing(im3);
    r74 = `!`(im3);
    ___1 = ldf `[<-` in base;
    r75 = dyn ___1(l8, dx7, r74);
    goto L20(r75);
  L96():
    p27 = prom<V +>{
      r76 = clos inner937002599;
      return r76;
    };
    p28 = prom<V +>{
      dat8 = ld dat;
      dat9 = force? dat8;
      checkMissing(dat9);
      c27 = `is.object`(dat9);
      if c27 then L1() else L2(dat9);
    L0(dx15):
      return dx15;
    L1():
      dr10 = tryDispatchBuiltin.1("[", dat9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(dat11):
      im4 = ld im;
      im5 = force? im4;
      __3 = ldf `[` in base;
      r78 = dyn __3(dat11, im5);
      goto L0(r78);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx14);
    };
    p29 = prom<V +>{
      m5 = ld m1;
      m6 = force? m5;
      checkMissing(m6);
      c28 = `is.object`(m6);
      if c28 then L1() else L2(m6);
    L0(dx17):
      return dx17;
    L1():
      dr12 = tryDispatchBuiltin.1("[", m6);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(m8):
      im6 = ld im;
      im7 = force? im6;
      __4 = ldf `[` in base;
      r80 = dyn __4(m8, im7);
      goto L0(r80);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx16);
    };
    r82 = dyn Map(p27, p28, p29);
    check L97() else D37();
  D37():
    deopt 154 [r82];
  L97():
    l9 = ld res;
    c29 = `is.object`(l9);
    if c29 then L98() else L99(r82, l9);
  L21(dx19):
    st res = dx19;
    res = ld res;
    check L102() else D39();
  L98():
    dr14 = tryDispatchBuiltin.0("[<-", l9, r82);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L100() else L99(r82, dr14);
  L99(r84, l11):
    im8 = ld im;
    check L101() else D38();
  D38():
    deopt 156 [r84, l11, r82, im8];
  D39():
    deopt 160 [res];
  L100():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L21(dx18);
  L101():
    im9 = force? im8;
    ___2 = ldf `[<-` in base;
    r87 = dyn ___2(l11, r82, im9);
    goto L21(r87);
  L102():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg anyNA:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg x3:*, reg x4:V, reg r5:V, reg any:cls, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg x5:*, reg x6:V, reg t:cls, reg cbind:cls, reg x8:*, reg x9:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x10:*, reg x11:V, reg attr:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg x12:*, reg x13:V, reg attributes:cls, reg r17:V, reg l:*, reg attributes1:cls, reg r18:V, reg c10:L, reg r21:V, reg l2:*, reg r22:V, reg dr:V, reg dc:L, reg dx:V, reg r24:V, reg l4:*, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg l7:*, reg r33:V, reg r34:V, reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg l10:*, reg r44:V, reg r45:V, reg r46:V, reg x14:*, reg x15:V, reg attributes2:cls, reg r47:V, reg names:cls, reg r48:V, reg ___:cls, reg r49:V, reg attributes__:cls, reg r50:V, reg t1:cls, reg cbind1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg x16:*, reg x17:V, reg attr1:cls, reg r53:V, reg p3:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg x18:*, reg x19:V, reg attr2:cls, reg r57:V, reg p4:p(V +), reg r59:V, reg p5:p(V +), reg r61:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg x20:*, reg x21:V, reg attr3:cls, reg r64:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r65:V, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg nm:*, reg nm1:V, reg nzchar:cls, reg r69:V, reg any1:cls, reg r70:V, reg c11:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r71:V, reg r72:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r73:V, reg r74:V, reg nm2:*, reg nm3:V, reg c12:cls, reg r75:V, reg list:cls, reg r76:V, reg r77:V, reg l11:*, reg dimnames__:cls, reg r78:V, reg l12:*, reg dimnames__1:cls, reg r79:V, reg ml:*, reg ml1:V, reg l13:*, reg attr__:cls, reg r80:V, reg y:*, reg y1:V, reg l14:*, reg attributes3:cls, reg r81:V, reg c13:L, reg r84:dots, reg l16:*, reg r85:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r87:dots, reg l18:*, reg dx3:V, reg capt_attr:*, reg capt_attr1:V, reg ___1:cls, reg r88:V, reg attributes__1:cls, reg r89:V, reg y2:*, reg y3:V |
    mkenv;
    st x = x;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L21();
  L17():
    x1 = ld x;
    check L19() else D0();
  L18():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L27() else L3();
  L19():
    x2 = force? x1;
    checkMissing(x2);
    anyNA = ldf anyNA in base;
    r2 = dyn anyNA(x2);
    check L20() else D1();
  L21():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3():
    t = ldf t;
    check L30() else D5();
  L4():
    l14 = ld y;
    attributes3 = ldf attributes;
    check L80() else D34();
  L20():
    goto L0(r2);
  L22():
    x3 = ld x;
    check L24() else D2();
  L23():
    r3 = dyn base1(<lang `<`(x, 0.0)>);
    goto L2(c, r3);
  L27():
    x5 = ld x;
    check L28() else D4();
  D2():
    deopt 8 [c, x3];
  D4():
    deopt 15 [x5];
  D5():
    deopt 19 [];
  D34():
    deopt 109 [NULL, l14, NULL];
  L24():
    x4 = force? x3;
    checkMissing(x4);
    r5 = `<`(x4, 0.0);
    any = ldf any in base;
    r6 = dyn any(r5);
    check L25() else D3();
  L28():
    x6 = force? x5;
    checkMissing(x6);
    st y = x6;
    goto L4();
  L30():
    p2 = prom<V +>{
      cbind = ldf cbind;
      p = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      p1 = prom<V +>{
        sym2 = ldf attr;
        base2 = ldf attr in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r9):
        return r9;
      L1():
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        attr = ldf attr in base;
        r10 = dyn attr(x11, "capture.start");
        goto L0(r10);
      L2():
        r8 = dyn base2(<sym x>, "capture.start");
        goto L0(r8);
      };
      r12 = dyn cbind(p, p1);
      return r12;
    };
    r14 = dyn t(p2);
    check L31() else D6();
  L80():
    r81 = dyn attributes3(NULL, NULL);
    check L81() else D35();
  D3():
    deopt 13 [c, r6];
  D6():
    deopt 21 [r14];
  D35():
    deopt 111 [NULL, l14, NULL, r81];
  L25():
    goto L2(c, r6);
  L31():
    st y = r14;
    sym3 = ldf attributes;
    base3 = ldf attributes in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L81():
    c13 = `is.object`(r81);
    if c13 then L82() else L83(NULL, l14, r81);
  L5(r16):
    l = ld y;
    attributes1 = ldf attributes;
    check L36() else D9();
  L16(r87, l18, dx3):
    attributes__1 = ldf `attributes<-`;
    check L86() else D37();
  L32():
    x12 = ld x;
    check L34() else D7();
  L33():
    r15 = dyn base3(<sym x>);
    goto L5(r15);
  L82():
    dr2 = tryDispatchBuiltin.0("[<-", r81, NULL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L84() else L83(NULL, l14, dr2);
  L83(r84, l16, r85):
    capt_attr = ld `capt.attr`;
    check L85() else D36();
  D7():
    deopt 25 [x12];
  D9():
    deopt 30 [r16, l, r16];
  D36():
    deopt 113 [r84, l16, r85, NULL, capt_attr];
  D37():
    deopt 116 [r87, l18, dx3];
  L34():
    x13 = force? x12;
    checkMissing(x13);
    attributes = ldf attributes in base;
    r17 = dyn attributes(x13);
    check L35() else D8();
  L36():
    r18 = dyn attributes1(r16, NULL);
    check L37() else D10();
  L84():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(NULL, l14, dx2);
  L85():
    capt_attr1 = force? capt_attr;
    ___1 = ldf `[<-` in base;
    r88 = dyn ___1(r85, NULL, capt_attr1);
    goto L16(r84, l16, r88);
  L86():
    r89 = dyn attributes__1(l18, NULL, dx3);
    check L87() else D38();
  D8():
    deopt 28 [r17];
  D10():
    deopt 32 [r16, l, r16, r18];
  D38():
    deopt 118 [r87, r89];
  L35():
    goto L5(r17);
  L37():
    c10 = `is.object`(r18);
    if c10 then L38() else L39(r16, l, r18);
  L87():
    st y = r89;
    y2 = ld y;
    check L88() else D39();
  D39():
    deopt 120 [y2];
  L6(r24, l4, dx1):
    attributes__ = ldf `attributes<-`;
    check L48() else D14();
  L38():
    dr = tryDispatchBuiltin.0("[<-", r18, r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(r16, l, dr);
  L39(r21, l2, r22):
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L88():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D14():
    deopt 45 [r24, l4, dx1];
  L7(r32, l7, r33, r34, r35):
    ___ = ldf `[<-` in base;
    r49 = dyn ___(r33, r34, r35);
    goto L6(r32, l7, r49);
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(r16, l, dx);
  L41():
    sym5 = ldf attributes;
    base5 = ldf attributes in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L42():
    r31 = dyn base4(<lang attributes(x)>);
    goto L7(r21, l2, r22, r16, r31);
  L48():
    r50 = dyn attributes__(l4, NULL, dx1);
    check L49() else D15();
  D15():
    deopt 47 [r24, r50];
  L8(r43, l10, r44, r45, r46):
    names = ldf names in base;
    r48 = dyn names(r46);
    check L47() else D13();
  L43():
    x14 = ld x;
    check L45() else D11();
  L44():
    r42 = dyn base5(<sym x>);
    goto L8(r21, l2, r22, r16, r42);
  L49():
    st y = r50;
    t1 = ldf t;
    check L50() else D16();
  D11():
    deopt 38 [r21, l2, r22, r16, x14];
  D13():
    deopt 43 [r43, l10, r44, r45, r48];
  D16():
    deopt 50 [];
  L45():
    x15 = force? x14;
    checkMissing(x15);
    attributes2 = ldf attributes in base;
    r47 = dyn attributes2(x15);
    check L46() else D12();
  L47():
    goto L7(r43, l10, r44, r45, r48);
  L50():
    p5 = prom<V +>{
      cbind1 = ldf cbind;
      p3 = prom<V +>{
        sym6 = ldf attr;
        base6 = ldf attr in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r52):
        return r52;
      L1():
        x16 = ld x;
        x17 = force? x16;
        checkMissing(x17);
        attr1 = ldf attr in base;
        r53 = dyn attr1(x17, "match.length");
        goto L0(r53);
      L2():
        r51 = dyn base6(<sym x>, "match.length");
        goto L0(r51);
      };
      p4 = prom<V +>{
        sym7 = ldf attr;
        base7 = ldf attr in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r56):
        return r56;
      L1():
        x18 = ld x;
        x19 = force? x18;
        checkMissing(x19);
        attr2 = ldf attr in base;
        r57 = dyn attr2(x19, "capture.length");
        goto L0(r57);
      L2():
        r55 = dyn base7(<sym x>, "capture.length");
        goto L0(r55);
      };
      r59 = dyn cbind1(p3, p4);
      return r59;
    };
    r61 = dyn t1(p5);
    check L51() else D17();
  D12():
    deopt 41 [r21, l2, r22, r16, r47];
  D17():
    deopt 52 [r61];
  L46():
    goto L8(r21, l2, r22, r16, r47);
  L51():
    st ml = r61;
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L52() else L53();
  L9(r63):
    st nm = r63;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L56() else L57();
  L52():
    x20 = ld x;
    check L54() else D18();
  L53():
    r62 = dyn base8(<sym x>, "capture.names");
    goto L9(r62);
  D18():
    deopt 56 [x20];
  L10(r66):
    c11 = `as.logical`(r66);
    if c11 then L63() else L12();
  L54():
    x21 = force? x20;
    checkMissing(x21);
    attr3 = ldf attr in base;
    r64 = dyn attr3(x21, "capture.names");
    check L55() else D19();
  L56():
    sym10 = ldf nzchar;
    base10 = ldf nzchar in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L58() else L59();
  L57():
    r65 = dyn base9(<lang nzchar(nm)>);
    goto L10(r65);
  D19():
    deopt 60 [r64];
  L11(r68):
    any1 = ldf any in base;
    r70 = dyn any1(r68);
    check L62() else D22();
  L12():
    goto L15(NULL);
  L15(r77):
    l11 = ld y;
    dimnames__ = ldf `dimnames<-`;
    check L72() else D26();
  L55():
    goto L9(r64);
  L58():
    nm = ld nm;
    check L60() else D20();
  L59():
    r67 = dyn base10(<sym nm>);
    goto L11(r67);
  L63():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L64() else L65();
  D20():
    deopt 66 [nm];
  D22():
    deopt 71 [r70];
  D26():
    deopt 87 [r77, l11, r77];
  L13(r72):
    goto L15(r72);
  L60():
    nm1 = force? nm;
    checkMissing(nm1);
    nzchar = ldf nzchar in base;
    r69 = dyn nzchar(nm1);
    check L61() else D21();
  L62():
    goto L10(r70);
  L64():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L66() else L67();
  L65():
    r71 = dyn base11(<lang c("", nm)>, NULL);
    goto L13(r71);
  L72():
    r78 = dyn dimnames__(l11, NULL, r77);
    check L73() else D27();
  D21():
    deopt 69 [r69];
  D27():
    deopt 89 [r77, r78];
  L14(r74):
    list = ldf list in base;
    r76 = dyn list(r74, NULL);
    check L70() else D25();
  L61():
    goto L11(r69);
  L66():
    nm2 = ld nm;
    check L68() else D23();
  L67():
    r73 = dyn base12("", <sym nm>);
    goto L14(r73);
  L73():
    st y = r78;
    l12 = ld ml;
    dimnames__1 = ldf `dimnames<-`;
    check L74() else D28();
  D23():
    deopt 77 [nm2];
  D25():
    deopt 83 [r76];
  D28():
    deopt 92 [r77, l12, r77];
  L68():
    nm3 = force? nm2;
    checkMissing(nm3);
    c12 = ldf c in base;
    r75 = dyn c12("", nm3);
    check L69() else D24();
  L70():
    goto L13(r76);
  L74():
    r79 = dyn dimnames__1(l12, NULL, r77);
    check L75() else D29();
  D24():
    deopt 80 [r75];
  D29():
    deopt 94 [r77, r79];
  L69():
    goto L14(r75);
  L75():
    st ml = r79;
    ml = ld ml;
    check L76() else D30();
  D30():
    deopt 96 [ml];
  L76():
    ml1 = force? ml;
    checkMissing(ml1);
    l13 = ld y;
    attr__ = ldf `attr<-`;
    check L77() else D31();
  D31():
    deopt 99 [ml1, l13, ml1];
  L77():
    r80 = dyn attr__(l13, NULL, "match.length", ml1);
    check L78() else D32();
  D32():
    deopt 102 [ml1, r80];
  L78():
    st y = r80;
    y = ld y;
    check L79() else D33();
  D33():
    deopt 104 [y];
  L79():
    y1 = force? y;
    checkMissing(y1);
    goto L4();
  }
}
fun inner937002599(outer, inner) {
  (reg outer:*, reg inner:*) -+> V { var outer:*, var inner:*, reg do_call:cls, reg cbind:*, reg cbind1:V, reg p:p(V +), reg inner1:*, reg inner2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg inner3:*, reg inner4:V, reg attributes:cls, reg r5:V, reg l:*, reg attributes1:cls, reg r6:V, reg c:L, reg r9:V, reg l2:*, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg r12:V, reg l4:*, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg l7:*, reg r21:V, reg r22:V, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg l10:*, reg r32:V, reg r33:V, reg r34:V, reg inner5:*, reg inner6:V, reg attributes2:cls, reg r35:V, reg names:cls, reg r36:V, reg ___:cls, reg r37:V, reg attributes__:cls, reg r38:V, reg do_call1:cls, reg cbind2:*, reg cbind3:V, reg p2:p(V +), reg lapply:cls, reg inner7:*, reg inner8:V, reg p3:p(V +), reg attr:*, reg attr1:V, reg p4:p(V +), reg r42:V, reg p5:p(V +), reg r44:V, reg l11:*, reg attr__:cls, reg r45:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg r47:V, reg outer1:*, reg outer2:V, reg attr2:cls, reg r48:V, reg l12:*, reg attr__1:cls, reg r49:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg r51:V, reg outer3:*, reg outer4:V, reg attr3:cls, reg r52:V, reg l13:*, reg attr__2:cls, reg r53:V, reg tmp:*, reg tmp1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r54:V, reg tmp4:V, reg r55:V, reg rep:cls, reg r56:V, reg r57:V |
    mkenv;
    st outer = outer;
    st inner = inner;
    do_call = ldf `do.call`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      cbind = ld cbind;
      cbind1 = force? cbind;
      checkMissing(cbind1);
      return cbind1;
    };
    p1 = prom<V +>{
      inner1 = ld inner;
      inner2 = force? inner1;
      checkMissing(inner2);
      return inner2;
    };
    r2 = dyn do_call(p, p1);
    check L8() else D1();
  D1():
    deopt 4 [r2];
  L8():
    st tmp = r2;
    sym = ldf attributes;
    base = ldf attributes in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r4):
    l = ld tmp;
    attributes1 = ldf attributes;
    check L13() else D4();
  L9():
    inner3 = ld inner;
    check L11() else D2();
  L10():
    r3 = dyn base(<sym inner>);
    goto L0(r3);
  D2():
    deopt 8 [inner3];
  D4():
    deopt 13 [r4, l, r4];
  L11():
    inner4 = force? inner3;
    checkMissing(inner4);
    attributes = ldf attributes in base;
    r5 = dyn attributes(inner4);
    check L12() else D3();
  L13():
    r6 = dyn attributes1(r4, NULL);
    check L14() else D5();
  D3():
    deopt 11 [r5];
  D5():
    deopt 15 [r4, l, r4, r6];
  L12():
    goto L0(r5);
  L14():
    c = `is.object`(r6);
    if c then L15() else L16(r4, l, r6);
  L1(r12, l4, dx1):
    attributes__ = ldf `attributes<-`;
    check L25() else D9();
  L15():
    dr = tryDispatchBuiltin.0("[<-", r6, r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(r4, l, dr);
  L16(r9, l2, r10):
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D9():
    deopt 28 [r12, l4, dx1];
  L2(r20, l7, r21, r22, r23):
    ___ = ldf `[<-` in base;
    r37 = dyn ___(r21, r22, r23);
    goto L1(r20, l7, r37);
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(r4, l, dx);
  L18():
    sym2 = ldf attributes;
    base2 = ldf attributes in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L19():
    r19 = dyn base1(<lang attributes(inner)>);
    goto L2(r9, l2, r10, r4, r19);
  L25():
    r38 = dyn attributes__(l4, NULL, dx1);
    check L26() else D10();
  D10():
    deopt 30 [r12, r38];
  L3(r31, l10, r32, r33, r34):
    names = ldf names in base;
    r36 = dyn names(r34);
    check L24() else D8();
  L20():
    inner5 = ld inner;
    check L22() else D6();
  L21():
    r30 = dyn base2(<sym inner>);
    goto L3(r9, l2, r10, r4, r30);
  L26():
    st tmp = r38;
    do_call1 = ldf `do.call`;
    check L27() else D11();
  D6():
    deopt 21 [r9, l2, r10, r4, inner5];
  D8():
    deopt 26 [r31, l10, r32, r33, r36];
  D11():
    deopt 33 [];
  L22():
    inner6 = force? inner5;
    checkMissing(inner6);
    attributes2 = ldf attributes in base;
    r35 = dyn attributes2(inner6);
    check L23() else D7();
  L24():
    goto L2(r31, l10, r32, r33, r36);
  L27():
    p2 = prom<V +>{
      cbind2 = ld cbind;
      cbind3 = force? cbind2;
      checkMissing(cbind3);
      return cbind3;
    };
    p5 = prom<V +>{
      lapply = ldf lapply;
      p3 = prom<V +>{
        inner7 = ld inner;
        inner8 = force? inner7;
        checkMissing(inner8);
        return inner8;
      };
      p4 = prom<V +>{
        attr = ld attr;
        attr1 = force? attr;
        checkMissing(attr1);
        return attr1;
      };
      r42 = dyn lapply(p3, p4, "match.length");
      return r42;
    };
    r44 = dyn do_call1(p2, p5);
    check L28() else D12();
  D7():
    deopt 24 [r9, l2, r10, r4, r35];
  D12():
    deopt 36 [r44];
  L23():
    goto L3(r9, l2, r10, r4, r35);
  L28():
    l11 = ld tmp;
    attr__ = ldf `attr<-`;
    check L29() else D13();
  D13():
    deopt 38 [r44, l11, r44];
  L29():
    r45 = dyn attr__(l11, NULL, "match.length", r44);
    check L30() else D14();
  D14():
    deopt 41 [r44, r45];
  L30():
    st tmp = r45;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L4(r47):
    l12 = ld tmp;
    attr__1 = ldf `attr<-`;
    check L35() else D17();
  L31():
    outer1 = ld outer;
    check L33() else D15();
  L32():
    r46 = dyn base3(<sym outer>, "useBytes");
    goto L4(r46);
  D15():
    deopt 45 [outer1];
  D17():
    deopt 51 [r47, l12, r47];
  L33():
    outer2 = force? outer1;
    checkMissing(outer2);
    attr2 = ldf attr in base;
    r48 = dyn attr2(outer2, "useBytes");
    check L34() else D16();
  L35():
    r49 = dyn attr__1(l12, NULL, "useBytes", r47);
    check L36() else D18();
  D16():
    deopt 49 [r48];
  D18():
    deopt 54 [r47, r49];
  L34():
    goto L4(r48);
  L36():
    st tmp = r49;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L5(r51):
    l13 = ld tmp;
    attr__2 = ldf `attr<-`;
    check L41() else D21();
  L37():
    outer3 = ld outer;
    check L39() else D19();
  L38():
    r50 = dyn base4(<sym outer>, "index.type");
    goto L5(r50);
  D19():
    deopt 58 [outer3];
  D21():
    deopt 64 [r51, l13, r51];
  L39():
    outer4 = force? outer3;
    checkMissing(outer4);
    attr3 = ldf attr in base;
    r52 = dyn attr3(outer4, "index.type");
    check L40() else D20();
  L41():
    r53 = dyn attr__2(l13, NULL, "index.type", r51);
    check L42() else D22();
  D20():
    deopt 62 [r52];
  D22():
    deopt 67 [r51, r53];
  L40():
    goto L5(r52);
  L42():
    st tmp = r53;
    tmp = ld tmp;
    check L43() else D23();
  D23():
    deopt 69 [tmp];
  L43():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    sym5 = ldf rep;
    base5 = ldf rep in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  L6(tmp4, r55):
    r57 = `+`(tmp4, r55);
    popenv;
    return r57;
  L44():
    rep = ldf rep in base;
    r56 = dyn rep(<lang `-`(outer, 1)>, <lang nrow(tmp)>);
    goto L6(tmp1, r56);
  L45():
    r54 = dyn base5[, each](<lang `-`(outer, 1)>, <lang nrow(tmp)>);
    goto L6(tmp1, r54);
  }
}