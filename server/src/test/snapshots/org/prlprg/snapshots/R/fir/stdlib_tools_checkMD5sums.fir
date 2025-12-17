fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner379409139;
    st checkMD5sums = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner379409139(package, dir) {
  (reg package:*, reg dir:*) -+> V { var package:*, var dir:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg find_package:cls, reg package1:*, reg package2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg dir1:*, reg dir2:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg file_path:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r13:V, reg file_exists:cls, reg md5file:*, reg md5file1:V, reg p2:p(V +), reg r15:V, reg r16:V, reg c2:L, reg readLines:cls, reg md5file2:*, reg md5file3:V, reg p3:p(V +), reg r20:V, reg sub:cls, reg inlines:*, reg inlines1:V, reg p4:p(V +), reg r22:V, reg sub1:cls, reg inlines2:*, reg inlines3:V, reg p5:p(V +), reg r24:V, reg l:*, reg names__:cls, reg r25:V, reg getwd:cls, reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg dot:*, reg dot1:V, reg c3:V, reg c4:L, reg stop:cls, reg r29:V, reg setwd:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg r32:V, reg md5sum:cls, reg dir7:cls, reg dir8:*, reg dir9:V, reg p7:p(V +), reg r34:V, reg p8:p(V +), reg r36:V, reg setwd1:cls, reg dot2:*, reg dot3:V, reg p9:p(V +), reg r38:V, reg x:*, reg x1:V, reg c5:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg x6:V, reg r40:V, reg x7:*, reg x8:V, reg names:cls, reg r41:V, reg r42:V, reg __:cls, reg r43:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg x9:*, reg x10:V, reg names1:cls, reg r46:V, reg _notin_:cls, reg nmxx:*, reg nmxx1:V, reg p10:p(V +), reg nmx:*, reg nmx1:V, reg p11:p(V +), reg r49:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg not_here:*, reg not_here1:V, reg any:cls, reg r52:V, reg c6:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg not_here2:*, reg not_here3:V, reg sum:cls, reg r55:V, reg r56:V, reg c7:L, reg cat:cls, reg paste:cls, reg sQuote:cls, reg nmxx2:*, reg nmxx3:V, reg c8:L, reg nmxx5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg not_here4:*, reg not_here5:V, reg __1:cls, reg r57:V, reg p12:p(V +), reg r59:V, reg p13:p(V +), reg r61:V, reg p14:p(V +), reg r63:V, reg r64:V, reg cat1:cls, reg sQuote1:cls, reg nmxx6:*, reg nmxx7:V, reg c9:L, reg nmxx9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg not_here6:*, reg not_here7:V, reg __2:cls, reg r65:V, reg p15:p(V +), reg r67:V, reg p16:p(V +), reg r69:V, reg nmxx10:*, reg nmxx11:V, reg c10:L, reg nmxx13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg not_here8:*, reg not_here9:V, reg r71:V, reg __3:cls, reg r72:V, reg xx:*, reg xx1:V, reg c11:L, reg xx3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg nmxx14:*, reg nmxx15:V, reg __4:cls, reg r73:V, reg x11:*, reg x12:V, reg c12:L, reg dx11:V, reg x14:V, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg dx15:V, reg nmxx16:*, reg nmxx17:V, reg __5:cls, reg r74:V, reg r75:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r76:V, reg r77:V, reg diff:*, reg diff1:V, reg any1:cls, reg r78:V, reg c13:L, reg nmxx18:*, reg nmxx19:V, reg c14:L, reg nmxx21:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg diff2:*, reg diff3:V, reg __6:cls, reg r79:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r80:V, reg r81:V, reg files:*, reg files1:V, reg length1:cls, reg r82:V, reg r83:V, reg c15:L, reg cat2:cls, reg paste1:cls, reg sQuote2:cls, reg files2:*, reg files3:V, reg p17:p(V +), reg r85:V, reg p18:p(V +), reg r87:V, reg p19:p(V +), reg r89:V, reg r90:V, reg cat3:cls, reg sQuote3:cls, reg files4:*, reg files5:V, reg p20:p(V +), reg r92:V, reg p21:p(V +), reg r94:V, reg res:*, reg res1:V |
    mkenv;
    st package = package;
    st dir = dir;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L0(r1):
    c = `as.logical`(r1);
    if c then L32() else L1();
  L30():
    missing = ldf missing in base;
    r2 = dyn missing(<sym dir>);
    goto L0(r2);
  L31():
    r = dyn base(<sym dir>);
    goto L0(r);
  L1():
    goto L2();
  L2():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L32():
    find_package = ldf `find.package`;
    check L33() else D0();
  D0():
    deopt 4 [];
  L3(r7):
    r9 = `!=`(r7, 1);
    c1 = `as.logical`(r9);
    if c1 then L40() else L4();
  L33():
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    r4 = dyn find_package[, quiet](p, TRUE);
    check L34() else D1();
  L36():
    dir1 = ld dir;
    check L38() else D2();
  L37():
    r6 = dyn base1(<sym dir>);
    goto L3(r6);
  D1():
    deopt 8 [r4];
  D2():
    deopt 14 [dir1];
  L4():
    file_path = ldf `file.path`;
    check L43() else D4();
  L34():
    st dir = r4;
    goto L2();
  L38():
    dir2 = force? dir1;
    checkMissing(dir2);
    length = ldf length in base;
    r8 = dyn length(dir2);
    check L39() else D3();
  L40():
    popenv;
    return NA_LGL;
  D3():
    deopt 17 [r8];
  D4():
    deopt 26 [];
  L39():
    goto L3(r8);
  L43():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r13 = dyn file_path(p1, "MD5");
    check L44() else D5();
  D5():
    deopt 29 [r13];
  L44():
    st md5file = r13;
    file_exists = ldf `file.exists`;
    check L45() else D6();
  D6():
    deopt 32 [];
  L45():
    p2 = prom<V +>{
      md5file = ld md5file;
      md5file1 = force? md5file;
      checkMissing(md5file1);
      return md5file1;
    };
    r15 = dyn file_exists(p2);
    check L46() else D7();
  D7():
    deopt 34 [r15];
  L46():
    r16 = `!`(r15);
    c2 = `as.logical`(r16);
    if c2 then L47() else L6();
  L6():
    readLines = ldf readLines;
    check L50() else D8();
  L47():
    popenv;
    return NA_LGL;
  D8():
    deopt 42 [];
  L50():
    p3 = prom<V +>{
      md5file2 = ld md5file;
      md5file3 = force? md5file2;
      checkMissing(md5file3);
      return md5file3;
    };
    r20 = dyn readLines(p3);
    check L51() else D9();
  D9():
    deopt 44 [r20];
  L51():
    st inlines = r20;
    sub = ldf sub;
    check L52() else D10();
  D10():
    deopt 47 [];
  L52():
    p4 = prom<V +>{
      inlines = ld inlines;
      inlines1 = force? inlines;
      checkMissing(inlines1);
      return inlines1;
    };
    r22 = dyn sub("^([0-9a-fA-F]*)(.*)", "\\1", p4);
    check L53() else D11();
  D11():
    deopt 51 [r22];
  L53():
    st xx = r22;
    sub1 = ldf sub;
    check L54() else D12();
  D12():
    deopt 54 [];
  L54():
    p5 = prom<V +>{
      inlines2 = ld inlines;
      inlines3 = force? inlines2;
      checkMissing(inlines3);
      return inlines3;
    };
    r24 = dyn sub1("^[0-9a-fA-F]* [ |*](.*)", "\\1", p5);
    check L55() else D13();
  D13():
    deopt 58 [r24];
  L55():
    l = ld xx;
    names__ = ldf `names<-`;
    check L56() else D14();
  D14():
    deopt 60 [r24, l, r24];
  L56():
    r25 = dyn names__(l, NULL, r24);
    check L57() else D15();
  D15():
    deopt 62 [r24, r25];
  L57():
    st xx = r25;
    st nmxx = r24;
    getwd = ldf getwd;
    check L58() else D16();
  D16():
    deopt 66 [];
  L58():
    r26 = dyn getwd();
    check L59() else D17();
  D17():
    deopt 67 [r26];
  L59():
    st dot = r26;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L60() else L61();
  L8(r28):
    c4 = `as.logical`(r28);
    if c4 then L63() else L9();
  L60():
    dot = ld dot;
    check L62() else D18();
  L61():
    r27 = dyn base2(<sym dot>);
    goto L8(r27);
  D18():
    deopt 70 [dot];
  L9():
    goto L10();
  L10():
    setwd = ldf setwd;
    check L67() else D21();
  L62():
    dot1 = force? dot;
    checkMissing(dot1);
    c3 = `==`(dot1, NULL);
    goto L8(c3);
  L63():
    stop = ldf stop;
    check L64() else D19();
  D19():
    deopt 74 [];
  D21():
    deopt 80 [];
  L64():
    r29 = dyn stop("current working directory cannot be ascertained");
    check L65() else D20();
  L67():
    p6 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r32 = dyn setwd(p6);
    check L68() else D22();
  D20():
    deopt 76 [r29];
  D22():
    deopt 82 [r32];
  L65():
    goto L10();
  L68():
    md5sum = ldf md5sum;
    check L69() else D23();
  D23():
    deopt 84 [];
  L69():
    p8 = prom<V +>{
      dir7 = ldf dir;
      p7 = prom<V +>{
        dir8 = ld dir;
        dir9 = force? dir8;
        checkMissing(dir9);
        return dir9;
      };
      r34 = dyn dir7[, recursive](p7, TRUE);
      return r34;
    };
    r36 = dyn md5sum(p8);
    check L70() else D24();
  D24():
    deopt 86 [r36];
  L70():
    st x = r36;
    setwd1 = ldf setwd;
    check L71() else D25();
  D25():
    deopt 89 [];
  L71():
    p9 = prom<V +>{
      dot2 = ld dot;
      dot3 = force? dot2;
      checkMissing(dot3);
      return dot3;
    };
    r38 = dyn setwd1(p9);
    check L72() else D26();
  D26():
    deopt 91 [r38];
  L72():
    x = ld x;
    check L73() else D27();
  D27():
    deopt 92 [x];
  L73():
    x1 = force? x;
    checkMissing(x1);
    c5 = `is.object`(x1);
    if c5 then L74() else L75(x1);
  L11(dx1):
    st x = dx1;
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  L74():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L76() else L75(dr);
  L75(x3):
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L77() else L78();
  L12(x6, r40):
    r42 = `!=`(r40, "MD5");
    __ = ldf `[` in base;
    r43 = dyn __(x6, r42);
    goto L11(r43);
  L13(r45):
    st nmx = r45;
    st res = TRUE;
    _notin_ = ldf `%notin%`;
    check L85() else D32();
  L76():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L77():
    x7 = ld x;
    check L79() else D28();
  L78():
    r39 = dyn base3(<sym x>);
    goto L12(x3, r39);
  L81():
    x9 = ld x;
    check L83() else D30();
  L82():
    r44 = dyn base4(<sym x>);
    goto L13(r44);
  D28():
    deopt 96 [x3, x7];
  D30():
    deopt 106 [x9];
  D32():
    deopt 115 [];
  L79():
    x8 = force? x7;
    checkMissing(x8);
    names = ldf names in base;
    r41 = dyn names(x8);
    check L80() else D29();
  L83():
    x10 = force? x9;
    checkMissing(x10);
    names1 = ldf names in base;
    r46 = dyn names1(x10);
    check L84() else D31();
  L85():
    p10 = prom<V +>{
      nmxx = ld nmxx;
      nmxx1 = force? nmxx;
      checkMissing(nmxx1);
      return nmxx1;
    };
    p11 = prom<V +>{
      nmx = ld nmx;
      nmx1 = force? nmx;
      checkMissing(nmx1);
      return nmx1;
    };
    r49 = dyn _notin_(p10, p11);
    check L86() else D33();
  D29():
    deopt 99 [x3, r41];
  D31():
    deopt 109 [r46];
  D33():
    deopt 118 [r49];
  L80():
    goto L12(x3, r41);
  L84():
    goto L13(r46);
  L86():
    st `not.here` = r49;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L87() else L88();
  L14(r51):
    c6 = `as.logical`(r51);
    if c6 then L91() else L15();
  L87():
    not_here = ld `not.here`;
    check L89() else D34();
  L88():
    r50 = dyn base5(<sym not.here>);
    goto L14(r50);
  D34():
    deopt 122 [not_here];
  L15():
    goto L19();
  L19():
    nmxx10 = ld nmxx;
    check L103() else D42();
  L89():
    not_here1 = force? not_here;
    checkMissing(not_here1);
    any = ldf any in base;
    r52 = dyn any(not_here1);
    check L90() else D35();
  L91():
    st res = FALSE;
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L92() else L93();
  D35():
    deopt 125 [r52];
  D42():
    deopt 155 [nmxx10];
  L16(r54):
    r56 = `>`(r54, 1);
    c7 = `as.logical`(r56);
    if c7 then L96() else L17();
  L90():
    goto L14(r52);
  L92():
    not_here2 = ld `not.here`;
    check L94() else D36();
  L93():
    r53 = dyn base6(<sym not.here>);
    goto L16(r53);
  L103():
    nmxx11 = force? nmxx10;
    checkMissing(nmxx11);
    c10 = `is.object`(nmxx11);
    if c10 then L104() else L105(nmxx11);
  D36():
    deopt 131 [not_here2];
  L17():
    cat1 = ldf cat;
    check L100() else D40();
  L18(r64):
    goto L19();
  L20(dx7):
    st nmxx = dx7;
    xx = ld xx;
    check L108() else D44();
  L94():
    not_here3 = force? not_here2;
    checkMissing(not_here3);
    sum = ldf sum in base;
    r55 = dyn sum(not_here3);
    check L95() else D37();
  L96():
    cat = ldf cat;
    check L97() else D38();
  L104():
    dr6 = tryDispatchBuiltin.1("[", nmxx11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L106() else L105(dr6);
  L105(nmxx13):
    not_here8 = ld `not.here`;
    check L107() else D43();
  D37():
    deopt 134 [r55];
  D38():
    deopt 138 [];
  D40():
    deopt 146 [];
  D43():
    deopt 157 [nmxx13, not_here8];
  D44():
    deopt 162 [xx];
  L95():
    goto L16(r55);
  L97():
    p14 = prom<V +>{
      paste = ldf paste;
      p13 = prom<V +>{
        sQuote = ldf sQuote;
        p12 = prom<V +>{
          nmxx2 = ld nmxx;
          nmxx3 = force? nmxx2;
          checkMissing(nmxx3);
          c8 = `is.object`(nmxx3);
          if c8 then L1() else L2(nmxx3);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", nmxx3);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(nmxx5):
          not_here4 = ld `not.here`;
          not_here5 = force? not_here4;
          __1 = ldf `[` in base;
          r57 = dyn __1(nmxx5, not_here5);
          goto L0(r57);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r59 = dyn sQuote(p12);
        return r59;
      };
      r61 = dyn paste[, collapse](p13, ", ");
      return r61;
    };
    r63 = dyn cat[, , , sep]("files", p14, "are missing\n", " ");
    check L98() else D39();
  L100():
    p16 = prom<V +>{
      sQuote1 = ldf sQuote;
      p15 = prom<V +>{
        nmxx6 = ld nmxx;
        nmxx7 = force? nmxx6;
        checkMissing(nmxx7);
        c9 = `is.object`(nmxx7);
        if c9 then L1() else L2(nmxx7);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", nmxx7);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(nmxx9):
        not_here6 = ld `not.here`;
        not_here7 = force? not_here6;
        __2 = ldf `[` in base;
        r65 = dyn __2(nmxx9, not_here7);
        goto L0(r65);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r67 = dyn sQuote1(p15);
      return r67;
    };
    r69 = dyn cat1[, , , sep]("file", p16, "is missing\n", " ");
    check L101() else D41();
  L106():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L20(dx6);
  L107():
    not_here9 = force? not_here8;
    checkMissing(not_here9);
    r71 = `!`(not_here9);
    __3 = ldf `[` in base;
    r72 = dyn __3(nmxx13, r71);
    goto L20(r72);
  L108():
    xx1 = force? xx;
    checkMissing(xx1);
    c11 = `is.object`(xx1);
    if c11 then L109() else L110(xx1);
  D39():
    deopt 144 [r63];
  D41():
    deopt 152 [r69];
  L21(dx9):
    x11 = ld x;
    check L113() else D46();
  L98():
    goto L18(r63);
  L101():
    goto L18(r69);
  L109():
    dr8 = tryDispatchBuiltin.1("[", xx1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L111() else L110(dr8);
  L110(xx3):
    nmxx14 = ld nmxx;
    check L112() else D45();
  D45():
    deopt 164 [xx3, nmxx14];
  D46():
    deopt 166 [dx9, x11];
  L111():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L21(dx8);
  L112():
    nmxx15 = force? nmxx14;
    __4 = ldf `[` in base;
    r73 = dyn __4(xx3, nmxx15);
    goto L21(r73);
  L113():
    x12 = force? x11;
    checkMissing(x12);
    c12 = `is.object`(x12);
    if c12 then L114() else L115(dx9, x12);
  L22(dx14, dx15):
    r75 = `!=`(dx14, dx15);
    st diff = r75;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L118() else L119();
  L114():
    dr10 = tryDispatchBuiltin.1("[", x12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L116() else L115(dx9, dr10);
  L115(dx11, x14):
    nmxx16 = ld nmxx;
    check L117() else D47();
  D47():
    deopt 168 [dx11, x14, nmxx16];
  L23(r77):
    c13 = `as.logical`(r77);
    if c13 then L122() else L24();
  L116():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L22(dx9, dx13);
  L117():
    nmxx17 = force? nmxx16;
    __5 = ldf `[` in base;
    r74 = dyn __5(x14, nmxx17);
    goto L22(dx11, r74);
  L118():
    diff = ld diff;
    check L120() else D48();
  L119():
    r76 = dyn base7(<sym diff>);
    goto L23(r76);
  D48():
    deopt 175 [diff];
  L24():
    goto L29();
  L29():
    res = ld res;
    check L139() else D58();
  L120():
    diff1 = force? diff;
    checkMissing(diff1);
    any1 = ldf any in base;
    r78 = dyn any1(diff1);
    check L121() else D49();
  L122():
    st res = FALSE;
    nmxx18 = ld nmxx;
    check L123() else D50();
  D49():
    deopt 178 [r78];
  D50():
    deopt 182 [nmxx18];
  D58():
    deopt 212 [res];
  L121():
    goto L23(r78);
  L123():
    nmxx19 = force? nmxx18;
    checkMissing(nmxx19);
    c14 = `is.object`(nmxx19);
    if c14 then L124() else L125(nmxx19);
  L139():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  L25(dx17):
    st files = dx17;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L128() else L129();
  L124():
    dr12 = tryDispatchBuiltin.1("[", nmxx19);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L126() else L125(dr12);
  L125(nmxx21):
    diff2 = ld diff;
    check L127() else D51();
  D51():
    deopt 184 [nmxx21, diff2];
  L26(r81):
    r83 = `>`(r81, 1);
    c15 = `as.logical`(r83);
    if c15 then L132() else L27();
  L126():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L25(dx16);
  L127():
    diff3 = force? diff2;
    __6 = ldf `[` in base;
    r79 = dyn __6(nmxx21, diff3);
    goto L25(r79);
  L128():
    files = ld files;
    check L130() else D52();
  L129():
    r80 = dyn base8(<sym files>);
    goto L26(r80);
  D52():
    deopt 190 [files];
  L27():
    cat3 = ldf cat;
    check L136() else D56();
  L28(r90):
    goto L29();
  L130():
    files1 = force? files;
    checkMissing(files1);
    length1 = ldf length in base;
    r82 = dyn length1(files1);
    check L131() else D53();
  L132():
    cat2 = ldf cat;
    check L133() else D54();
  D53():
    deopt 193 [r82];
  D54():
    deopt 197 [];
  D56():
    deopt 205 [];
  L131():
    goto L26(r82);
  L133():
    p19 = prom<V +>{
      paste1 = ldf paste;
      p18 = prom<V +>{
        sQuote2 = ldf sQuote;
        p17 = prom<V +>{
          files2 = ld files;
          files3 = force? files2;
          checkMissing(files3);
          return files3;
        };
        r85 = dyn sQuote2(p17);
        return r85;
      };
      r87 = dyn paste1[, collapse](p18, ", ");
      return r87;
    };
    r89 = dyn cat2[, , , sep]("files", p19, "have the wrong MD5 checksums\n", " ");
    check L134() else D55();
  L136():
    p21 = prom<V +>{
      sQuote3 = ldf sQuote;
      p20 = prom<V +>{
        files4 = ld files;
        files5 = force? files4;
        checkMissing(files5);
        return files5;
      };
      r92 = dyn sQuote3(p20);
      return r92;
    };
    r94 = dyn cat3("file", p21, "has the wrong MD5 checksum\n");
    check L137() else D57();
  D55():
    deopt 203 [r89];
  D57():
    deopt 209 [r94];
  L134():
    goto L28(r89);
  L137():
    goto L28(r94);
  }
}