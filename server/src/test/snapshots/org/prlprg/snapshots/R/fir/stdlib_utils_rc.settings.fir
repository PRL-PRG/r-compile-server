fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner472388370;
    st `rc.settings` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner472388370(ops, ns, args, dots, func, ipck, S3, data, help, argdb, fuzzy, quotes, files, backtick) {
  (reg ops:*, reg ns:*, reg args:*, reg dots:*, reg func:*, reg ipck:*, reg S3:*, reg data:*, reg help:*, reg argdb:*, reg fuzzy:*, reg quotes:*, reg files:*, reg backtick:*) -+> V { var ops:*, var ns:*, var args:*, var dots:*, var func:*, var ipck:*, var S3:*, var data:*, var help:*, var argdb:*, var fuzzy:*, var quotes:*, var files:*, var backtick:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg match_call:cls, reg r2:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg unlist:cls, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c1:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p:p(V +), reg r7:V, reg r10:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg missing:cls, reg r13:V, reg r14:V, reg c2:L, reg checkAndChange:cls, reg ops1:*, reg ops2:V, reg p1:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg missing1:cls, reg r20:V, reg r21:V, reg c3:L, reg checkAndChange1:cls, reg ns1:*, reg ns2:V, reg p2:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg missing2:cls, reg r27:V, reg r28:V, reg c4:L, reg checkAndChange2:cls, reg args1:*, reg args2:V, reg p3:p(V +), reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg missing3:cls, reg r34:V, reg r35:V, reg c5:L, reg checkAndChange3:cls, reg dots1:*, reg dots2:V, reg p4:p(V +), reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg missing4:cls, reg r41:V, reg r42:V, reg c6:L, reg checkAndChange4:cls, reg func1:*, reg func2:V, reg p5:p(V +), reg r44:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg missing5:cls, reg r48:V, reg r49:V, reg c7:L, reg checkAndChange5:cls, reg ipck1:*, reg ipck2:V, reg p6:p(V +), reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg missing6:cls, reg r55:V, reg r56:V, reg c8:L, reg checkAndChange6:cls, reg S4:*, reg S5:V, reg p7:p(V +), reg r58:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r60:V, reg r61:V, reg missing7:cls, reg r62:V, reg r63:V, reg c9:L, reg checkAndChange7:cls, reg data1:*, reg data2:V, reg p8:p(V +), reg r65:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r67:V, reg r68:V, reg missing8:cls, reg r69:V, reg r70:V, reg c10:L, reg checkAndChange8:cls, reg help1:*, reg help2:V, reg p9:p(V +), reg r72:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r74:V, reg r75:V, reg missing9:cls, reg r76:V, reg r77:V, reg c11:L, reg checkAndChange9:cls, reg argdb1:*, reg argdb2:V, reg p10:p(V +), reg r79:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r81:V, reg r82:V, reg missing10:cls, reg r83:V, reg r84:V, reg c12:L, reg checkAndChange10:cls, reg files1:*, reg files2:V, reg p11:p(V +), reg r86:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r88:V, reg r89:V, reg missing11:cls, reg r90:V, reg r91:V, reg c13:L, reg checkAndChange11:cls, reg quotes1:*, reg quotes2:V, reg p12:p(V +), reg r93:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r95:V, reg r96:V, reg missing12:cls, reg r97:V, reg r98:V, reg c14:L, reg checkAndChange12:cls, reg fuzzy1:*, reg fuzzy2:V, reg p13:p(V +), reg r100:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r102:V, reg r103:V, reg missing13:cls, reg r104:V, reg r105:V, reg c15:L, reg checkAndChange13:cls, reg backtick1:*, reg backtick2:V, reg p14:p(V +), reg r107:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r109:V, reg r110:V, reg invisible:cls, reg r111:V |
    mkenv;
    st ops = ops;
    st ns = ns;
    st args = args;
    st dots = dots;
    st func = func;
    st ipck = ipck;
    st S3 = S3;
    st data = data;
    st help = help;
    st argdb = argdb;
    st fuzzy = fuzzy;
    st quotes = quotes;
    st files = files;
    st backtick = backtick;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L46() else L47();
  L0(r1):
    r4 = `==`(r1, 1.0);
    c = `as.logical`(r4);
    if c then L51() else L1();
  L46():
    match_call = ldf `match.call`;
    check L48() else D0();
  L47():
    r = dyn base(<lang match.call()>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    r10 = clos inner4072702069;
    st checkAndChange = r10;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L56() else L57();
  L48():
    r2 = dyn match_call();
    check L49() else D1();
  L51():
    unlist = ldf unlist;
    check L52() else D3();
  D1():
    deopt 4 [r2];
  D3():
    deopt 10 [];
  L3(r12):
    r14 = `!`(r12);
    c2 = `as.logical`(r14);
    if c2 then L58() else L4();
  L49():
    length = ldf length in base;
    r3 = dyn length(r2);
    check L50() else D2();
  L52():
    p = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      c1 = `is.object`(_CompletionEnv1);
      if c1 then L1() else L2(_CompletionEnv1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", _CompletionEnv1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_CompletionEnv3):
      __ = ldf `[[` in base;
      r5 = dyn __(_CompletionEnv3, "settings");
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn unlist(p);
    check L53() else D4();
  L56():
    missing = ldf missing in base;
    r13 = dyn missing(<sym ops>);
    goto L3(r13);
  L57():
    r11 = dyn base1(<sym ops>);
    goto L3(r11);
  D2():
    deopt 6 [r3];
  D4():
    deopt 12 [r7];
  L4():
    goto L5();
  L5():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L62() else L63();
  L50():
    goto L0(r3);
  L53():
    popenv;
    return r7;
  L58():
    checkAndChange = ldf checkAndChange;
    check L59() else D5();
  D5():
    deopt 24 [];
  L6(r19):
    r21 = `!`(r19);
    c3 = `as.logical`(r21);
    if c3 then L64() else L7();
  L59():
    p1 = prom<V +>{
      ops1 = ld ops;
      ops2 = force? ops1;
      checkMissing(ops2);
      return ops2;
    };
    r16 = dyn checkAndChange("ops", p1);
    check L60() else D6();
  L62():
    missing1 = ldf missing in base;
    r20 = dyn missing1(<sym ns>);
    goto L6(r20);
  L63():
    r18 = dyn base2(<sym ns>);
    goto L6(r18);
  D6():
    deopt 27 [r16];
  L7():
    goto L8();
  L8():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L68() else L69();
  L60():
    goto L5();
  L64():
    checkAndChange1 = ldf checkAndChange;
    check L65() else D7();
  D7():
    deopt 35 [];
  L9(r26):
    r28 = `!`(r26);
    c4 = `as.logical`(r28);
    if c4 then L70() else L10();
  L65():
    p2 = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r23 = dyn checkAndChange1("ns", p2);
    check L66() else D8();
  L68():
    missing2 = ldf missing in base;
    r27 = dyn missing2(<sym args>);
    goto L9(r27);
  L69():
    r25 = dyn base3(<sym args>);
    goto L9(r25);
  D8():
    deopt 38 [r23];
  L10():
    goto L11();
  L11():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  L66():
    goto L8();
  L70():
    checkAndChange2 = ldf checkAndChange;
    check L71() else D9();
  D9():
    deopt 46 [];
  L12(r33):
    r35 = `!`(r33);
    c5 = `as.logical`(r35);
    if c5 then L76() else L13();
  L71():
    p3 = prom<V +>{
      args1 = ld args;
      args2 = force? args1;
      checkMissing(args2);
      return args2;
    };
    r30 = dyn checkAndChange2("args", p3);
    check L72() else D10();
  L74():
    missing3 = ldf missing in base;
    r34 = dyn missing3(<sym dots>);
    goto L12(r34);
  L75():
    r32 = dyn base4(<sym dots>);
    goto L12(r32);
  D10():
    deopt 49 [r30];
  L13():
    goto L14();
  L14():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L80() else L81();
  L72():
    goto L11();
  L76():
    checkAndChange3 = ldf checkAndChange;
    check L77() else D11();
  D11():
    deopt 57 [];
  L15(r40):
    r42 = `!`(r40);
    c6 = `as.logical`(r42);
    if c6 then L82() else L16();
  L77():
    p4 = prom<V +>{
      dots1 = ld dots;
      dots2 = force? dots1;
      checkMissing(dots2);
      return dots2;
    };
    r37 = dyn checkAndChange3("dots", p4);
    check L78() else D12();
  L80():
    missing4 = ldf missing in base;
    r41 = dyn missing4(<sym func>);
    goto L15(r41);
  L81():
    r39 = dyn base5(<sym func>);
    goto L15(r39);
  D12():
    deopt 60 [r37];
  L16():
    goto L17();
  L17():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L86() else L87();
  L78():
    goto L14();
  L82():
    checkAndChange4 = ldf checkAndChange;
    check L83() else D13();
  D13():
    deopt 68 [];
  L18(r47):
    r49 = `!`(r47);
    c7 = `as.logical`(r49);
    if c7 then L88() else L19();
  L83():
    p5 = prom<V +>{
      func1 = ld func;
      func2 = force? func1;
      checkMissing(func2);
      return func2;
    };
    r44 = dyn checkAndChange4("func", p5);
    check L84() else D14();
  L86():
    missing5 = ldf missing in base;
    r48 = dyn missing5(<sym ipck>);
    goto L18(r48);
  L87():
    r46 = dyn base6(<sym ipck>);
    goto L18(r46);
  D14():
    deopt 71 [r44];
  L19():
    goto L20();
  L20():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L92() else L93();
  L84():
    goto L17();
  L88():
    checkAndChange5 = ldf checkAndChange;
    check L89() else D15();
  D15():
    deopt 79 [];
  L21(r54):
    r56 = `!`(r54);
    c8 = `as.logical`(r56);
    if c8 then L94() else L22();
  L89():
    p6 = prom<V +>{
      ipck1 = ld ipck;
      ipck2 = force? ipck1;
      checkMissing(ipck2);
      return ipck2;
    };
    r51 = dyn checkAndChange5("ipck", p6);
    check L90() else D16();
  L92():
    missing6 = ldf missing in base;
    r55 = dyn missing6(<sym S3>);
    goto L21(r55);
  L93():
    r53 = dyn base7(<sym S3>);
    goto L21(r53);
  D16():
    deopt 82 [r51];
  L22():
    goto L23();
  L23():
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L98() else L99();
  L90():
    goto L20();
  L94():
    checkAndChange6 = ldf checkAndChange;
    check L95() else D17();
  D17():
    deopt 90 [];
  L24(r61):
    r63 = `!`(r61);
    c9 = `as.logical`(r63);
    if c9 then L100() else L25();
  L95():
    p7 = prom<V +>{
      S4 = ld S3;
      S5 = force? S4;
      checkMissing(S5);
      return S5;
    };
    r58 = dyn checkAndChange6("S3", p7);
    check L96() else D18();
  L98():
    missing7 = ldf missing in base;
    r62 = dyn missing7(<sym data>);
    goto L24(r62);
  L99():
    r60 = dyn base8(<sym data>);
    goto L24(r60);
  D18():
    deopt 93 [r58];
  L25():
    goto L26();
  L26():
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L104() else L105();
  L96():
    goto L23();
  L100():
    checkAndChange7 = ldf checkAndChange;
    check L101() else D19();
  D19():
    deopt 101 [];
  L27(r68):
    r70 = `!`(r68);
    c10 = `as.logical`(r70);
    if c10 then L106() else L28();
  L101():
    p8 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r65 = dyn checkAndChange7("data", p8);
    check L102() else D20();
  L104():
    missing8 = ldf missing in base;
    r69 = dyn missing8(<sym help>);
    goto L27(r69);
  L105():
    r67 = dyn base9(<sym help>);
    goto L27(r67);
  D20():
    deopt 104 [r65];
  L28():
    goto L29();
  L29():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L110() else L111();
  L102():
    goto L26();
  L106():
    checkAndChange8 = ldf checkAndChange;
    check L107() else D21();
  D21():
    deopt 112 [];
  L30(r75):
    r77 = `!`(r75);
    c11 = `as.logical`(r77);
    if c11 then L112() else L31();
  L107():
    p9 = prom<V +>{
      help1 = ld help;
      help2 = force? help1;
      checkMissing(help2);
      return help2;
    };
    r72 = dyn checkAndChange8("help", p9);
    check L108() else D22();
  L110():
    missing9 = ldf missing in base;
    r76 = dyn missing9(<sym argdb>);
    goto L30(r76);
  L111():
    r74 = dyn base10(<sym argdb>);
    goto L30(r74);
  D22():
    deopt 115 [r72];
  L31():
    goto L32();
  L32():
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L116() else L117();
  L108():
    goto L29();
  L112():
    checkAndChange9 = ldf checkAndChange;
    check L113() else D23();
  D23():
    deopt 123 [];
  L33(r82):
    r84 = `!`(r82);
    c12 = `as.logical`(r84);
    if c12 then L118() else L34();
  L113():
    p10 = prom<V +>{
      argdb1 = ld argdb;
      argdb2 = force? argdb1;
      checkMissing(argdb2);
      return argdb2;
    };
    r79 = dyn checkAndChange9("argdb", p10);
    check L114() else D24();
  L116():
    missing10 = ldf missing in base;
    r83 = dyn missing10(<sym files>);
    goto L33(r83);
  L117():
    r81 = dyn base11(<sym files>);
    goto L33(r81);
  D24():
    deopt 126 [r79];
  L34():
    goto L35();
  L35():
    sym12 = ldf missing;
    base12 = ldf missing in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L122() else L123();
  L114():
    goto L32();
  L118():
    checkAndChange10 = ldf checkAndChange;
    check L119() else D25();
  D25():
    deopt 134 [];
  L36(r89):
    r91 = `!`(r89);
    c13 = `as.logical`(r91);
    if c13 then L124() else L37();
  L119():
    p11 = prom<V +>{
      files1 = ld files;
      files2 = force? files1;
      checkMissing(files2);
      return files2;
    };
    r86 = dyn checkAndChange10("files", p11);
    check L120() else D26();
  L122():
    missing11 = ldf missing in base;
    r90 = dyn missing11(<sym quotes>);
    goto L36(r90);
  L123():
    r88 = dyn base12(<sym quotes>);
    goto L36(r88);
  D26():
    deopt 137 [r86];
  L37():
    goto L38();
  L38():
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L128() else L129();
  L120():
    goto L35();
  L124():
    checkAndChange11 = ldf checkAndChange;
    check L125() else D27();
  D27():
    deopt 145 [];
  L39(r96):
    r98 = `!`(r96);
    c14 = `as.logical`(r98);
    if c14 then L130() else L40();
  L125():
    p12 = prom<V +>{
      quotes1 = ld quotes;
      quotes2 = force? quotes1;
      checkMissing(quotes2);
      return quotes2;
    };
    r93 = dyn checkAndChange11("quotes", p12);
    check L126() else D28();
  L128():
    missing12 = ldf missing in base;
    r97 = dyn missing12(<sym fuzzy>);
    goto L39(r97);
  L129():
    r95 = dyn base13(<sym fuzzy>);
    goto L39(r95);
  D28():
    deopt 148 [r93];
  L40():
    goto L41();
  L41():
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L134() else L135();
  L126():
    goto L38();
  L130():
    checkAndChange12 = ldf checkAndChange;
    check L131() else D29();
  D29():
    deopt 156 [];
  L42(r103):
    r105 = `!`(r103);
    c15 = `as.logical`(r105);
    if c15 then L136() else L43();
  L131():
    p13 = prom<V +>{
      fuzzy1 = ld fuzzy;
      fuzzy2 = force? fuzzy1;
      checkMissing(fuzzy2);
      return fuzzy2;
    };
    r100 = dyn checkAndChange12("fuzzy", p13);
    check L132() else D30();
  L134():
    missing13 = ldf missing in base;
    r104 = dyn missing13(<sym backtick>);
    goto L42(r104);
  L135():
    r102 = dyn base14(<sym backtick>);
    goto L42(r102);
  D30():
    deopt 159 [r100];
  L43():
    goto L44();
  L44():
    sym15 = ldf invisible;
    base15 = ldf invisible in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L140() else L141();
  L132():
    goto L41();
  L136():
    checkAndChange13 = ldf checkAndChange;
    check L137() else D31();
  D31():
    deopt 167 [];
  L45(r110):
    popenv;
    return r110;
  L137():
    p14 = prom<V +>{
      backtick1 = ld backtick;
      backtick2 = force? backtick1;
      checkMissing(backtick2);
      return backtick2;
    };
    r107 = dyn checkAndChange13("backtick", p14);
    check L138() else D32();
  L140():
    invisible = ldf invisible in base;
    r111 = dyn invisible();
    check L142() else D33();
  L141():
    r109 = dyn base15();
    goto L45(r109);
  D32():
    deopt 170 [r107];
  D33():
    deopt 176 [r111];
  L138():
    goto L44();
  L142():
    goto L45(r111);
  }
}
fun inner4072702069(what, value) {
  (reg what:*, reg value:*) -+> V { var what:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg value1:*, reg value2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg value3:*, reg value4:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c15:L, reg r7:V, reg value5:*, reg value6:V, reg is_na:cls, reg r8:V, reg r9:V, reg c16:L, reg c17:V, reg c19:L, reg value7:*, reg value8:V, reg l:*, reg c20:L, reg value11:V, reg l3:*, reg value12:V, reg l4:*, reg dr:V, reg dc:L, reg dx:V, reg value15:V, reg l6:*, reg value16:V, reg dx1:V, reg r10:V, reg c21:L, reg value18:V, reg l8:*, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg value20:V, reg l10:*, reg dx5:V, reg what1:*, reg what2:V, reg ____:cls, reg r11:V, reg c22:L, reg value22:V, reg l12:*, reg dr4:V, reg dc2:L, reg dx6:V, reg value24:V, reg dx7:V, reg r12:V |
    mkenv;
    st what = what;
    st value = value;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L11() else L1(c);
  L7():
    value1 = ld value;
    check L9() else D0();
  L8():
    r = dyn base(<sym value>);
    goto L0(r);
  D0():
    deopt 2 [value1];
  L1(c2):
    c10 = `as.logical`(c2);
    if c10 then L16() else L3(c10);
  L9():
    value2 = force? value1;
    checkMissing(value2);
    length = ldf length in base;
    r2 = dyn length(value2);
    check L10() else D1();
  L11():
    sym1 = ldf `is.logical`;
    base1 = ldf `is.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    c7 = `as.logical`(r5);
    c8 = `&&`(c5, c7);
    goto L1(c8);
  L3(c12):
    c19 = `as.logical`(c12);
    if c19 then L22() else L5();
  L10():
    goto L0(r2);
  L12():
    value3 = ld value;
    check L14() else D2();
  L13():
    r4 = dyn base1(<sym value>);
    goto L2(c, r4);
  L16():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  D2():
    deopt 9 [c, value3];
  L4(c15, r7):
    r9 = `!`(r7);
    c16 = `as.logical`(r9);
    c17 = `&&`(c15, c16);
    goto L3(c17);
  L5():
    invisible.0();
    popenv;
    return NULL;
  L14():
    value4 = force? value3;
    checkMissing(value4);
    c6 = `is.logical`(value4);
    goto L2(c, c6);
  L17():
    value5 = ld value;
    check L19() else D3();
  L18():
    r6 = dyn base2(<sym value>);
    goto L4(c10, r6);
  L22():
    value7 = ld value;
    check L23() else D5();
  D3():
    deopt 15 [c10, value5];
  D5():
    deopt 21 [value7];
  L19():
    value6 = force? value5;
    checkMissing(value6);
    is_na = ldf `is.na` in base;
    r8 = dyn is_na(value6);
    check L20() else D4();
  L23():
    value8 = force? value7;
    checkMissing(value8);
    l = ld `.CompletionEnv`;
    c20 = `is.object`(l);
    if c20 then L25() else L26(value8, l, value8, l);
  D4():
    deopt 18 [c10, r8];
  L20():
    goto L4(c10, r8);
  L24(value15, l6, value16, dx1):
    c21 = `is.object`(dx1);
    if c21 then L28() else L29(value15, l6, dx1);
  L25():
    dr = tryDispatchBuiltin.1("$", l);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(value8, l, value8, dr);
  L26(value11, l3, value12, l4):
    r10 = `$`(l4, <sym settings>);
    goto L24(value11, l3, value12, r10);
  L6(value20, l10, dx5):
    c22 = `is.object`(l10);
    if c22 then L33() else L34(value20, l10);
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(value8, l, value8, dx);
  L28():
    dr2 = tryDispatchBuiltin.0("[[<-", dx1, value16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(value15, l6, dr2);
  L29(value18, l8, dx3):
    what1 = ld what;
    check L31() else D6();
  D6():
    deopt 27 [value18, l8, dx3, value16, what1];
  L30():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L6(value15, l6, dx4);
  L31():
    what2 = force? what1;
    ____ = ldf `[[<-` in base;
    r11 = dyn ____(dx3, value16, what2);
    goto L6(value18, l8, r11);
  L32(value24, dx7):
    st `.CompletionEnv` = dx7;
    invisible.0();
    popenv;
    return value24;
  L33():
    dr4 = tryDispatchBuiltin.0("$<-", l10, dx5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(value20, dr4);
  L34(value22, l12):
    r12 = `$<-`(l12, <sym settings>, dx5);
    goto L32(value22, r12);
  L35():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L32(value20, dx6);
  }
}