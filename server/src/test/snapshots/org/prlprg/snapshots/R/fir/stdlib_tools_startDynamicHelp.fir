fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2062688009;
    st startDynamicHelp = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2062688009(start) {
  (reg start:*) -+> V { var start:*, reg start_isMissing:L, reg start_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Sys_getenv:cls, reg r2:V, reg nzchar:cls, reg r3:V, reg c:L, reg httpdPort:cls, reg p:p(V +), reg r5:V, reg warning:cls, reg r6:V, reg __:cls, reg r7:V, reg r8:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg httpdPort1:cls, reg r12:V, reg invisible:cls, reg r13:V, reg httpdPort2:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg start1:*, reg start2:V, reg is_na:cls, reg r19:V, reg c1:L, reg port:*, reg port1:V, reg r20:V, reg c2:L, reg startDynamicHelp:cls, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg port2:*, reg port3:V, reg invisible1:cls, reg r26:V, reg start3:*, reg start4:V, reg c3:L, reg c5:V, reg port4:*, reg port5:V, reg c6:L, reg c7:V, reg c9:L, reg port6:*, reg port7:V, reg r29:V, reg c10:L, reg stop:cls, reg r30:V, reg r31:V, reg stop1:cls, reg r32:V, reg start5:*, reg start6:V, reg r34:V, reg c11:L, reg c13:V, reg port8:*, reg port9:V, reg r35:V, reg c14:L, reg c15:V, reg c17:L, reg stop2:cls, reg r36:V, reg start7:*, reg start8:V, reg c18:L, reg __1:cls, reg r38:V, reg r39:cls, reg r40:V, reg getOption:cls, reg r41:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg ports:*, reg ports1:V, reg c19:V, reg c20:L, reg __2:cls, reg r44:V, reg r45:cls, reg r46:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg r54:R, reg r55:R, reg r56:V, reg r57:V, reg Sys_time:cls, reg r58:V, reg unclass:cls, reg r59:V, reg r60:V, reg r61:V, reg __3:cls, reg r62:V, reg r63:V, reg r64:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r66:V, reg r67:V, reg ports2:*, reg ports3:V, reg as_integer:cls, reg r68:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r69:V, reg r70:V, reg ports4:*, reg ports5:V, reg r71:V, reg all:cls, reg r72:V, reg c21:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r73:V, reg r74:V, reg invisible2:cls, reg r75:V, reg message:cls, reg r78:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r79:V, reg r80:V, reg ports6:*, reg ports7:V, reg r81:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c22:L, reg x:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r82:V, reg i7:I, reg r83:V, reg C_startHTTPD:*, reg C_startHTTPD1:V, reg ports8:*, reg ports9:V, reg c23:L, reg i9:I, reg C_startHTTPD3:V, reg r85:S, reg ports11:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg C_startHTTPD5:V, reg r87:S, reg dx1:V, reg i12:*, reg i13:V, reg __4:cls, reg r88:V, reg vargs:dots, reg r89:V, reg status:*, reg status1:V, reg r90:V, reg c24:L, reg httpdPort3:cls, reg ports12:*, reg ports13:V, reg c25:L, reg ports15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i16:*, reg i17:V, reg __5:cls, reg r91:V, reg p1:p(V +), reg r93:V, reg status2:*, reg status3:V, reg r95:V, reg c26:L, reg OK:*, reg OK1:V, reg c27:L, reg message1:cls, reg r97:V, reg __6:cls, reg r98:V, reg r99:cls, reg r100:V, reg r101:V, reg warning1:cls, reg r102:V, reg __7:cls, reg r103:V, reg r104:cls, reg r105:V, reg httpdPort4:cls, reg p2:p(V +), reg r107:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r109:V, reg C_stopHTTPD:*, reg C_stopHTTPD1:V, reg vargs1:dots, reg r111:V, reg httpdPort5:cls, reg r112:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r113:V, reg r114:V, reg httpdPort6:cls, reg r115:V, reg invisible3:cls, reg r116:V |
    mkenv;
    start_isMissing = missing.0(start);
    if start_isMissing then L0(TRUE) else L0(start);
  L0(start_orDefault):
    st start = start_orDefault;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L1(r1):
    c = `as.logical`(r1);
    if c then L49() else L2();
  L44():
    Sys_getenv = ldf `Sys.getenv`;
    check L46() else D0();
  L45():
    r = dyn base(<lang Sys.getenv("R_DISABLE_HTTPD")>);
    goto L1(r);
  D0():
    deopt 3 [];
  L2():
    httpdPort2 = ldf httpdPort;
    check L64() else D13();
  L46():
    r2 = dyn Sys_getenv("R_DISABLE_HTTPD");
    check L47() else D1();
  L49():
    httpdPort = ldf httpdPort;
    check L50() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 9 [];
  D13():
    deopt 36 [];
  L47():
    nzchar = ldf nzchar in base;
    r3 = dyn nzchar(r2);
    check L48() else D2();
  L50():
    p = prom<V +>{
      return -1;
    };
    r5 = dyn httpdPort(p);
    check L51() else D4();
  L64():
    r16 = dyn httpdPort2();
    check L65() else D14();
  D2():
    deopt 7 [r3];
  D4():
    deopt 11 [r5];
  D14():
    deopt 37 [r16];
  L48():
    goto L1(r3);
  L51():
    warning = ldf warning;
    check L52() else D5();
  L65():
    st port = r16;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L66() else L67();
  D5():
    deopt 13 [];
  L5(r18):
    c1 = `as.logical`(r18);
    if c1 then L70() else L6();
  L52():
    r6 = dyn warning[, `immediate.`]("httpd server disabled by R_DISABLE_HTTPD", TRUE);
    check L53() else D6();
  L66():
    start1 = ld start;
    check L68() else D15();
  L67():
    r17 = dyn base2(<sym start>);
    goto L5(r17);
  D6():
    deopt 17 [r6];
  D15():
    deopt 41 [start1];
  L6():
    start3 = ld start;
    check L83() else D22();
  L53():
    __ = ldf `::`;
    check L54() else D7();
  L68():
    start2 = force? start1;
    checkMissing(start2);
    is_na = ldf `is.na` in base;
    r19 = dyn is_na(start2);
    check L69() else D16();
  L70():
    port = ld port;
    check L71() else D17();
  D7():
    deopt 19 [];
  D16():
    deopt 44 [r19];
  D17():
    deopt 45 [port];
  D22():
    deopt 65 [start3];
  L54():
    r7 = dyn __("utils", "flush.console");
    check L55() else D8();
  L69():
    goto L5(r19);
  L71():
    port1 = force? port;
    checkMissing(port1);
    r20 = `<=`(port1, 0);
    c2 = `as.logical`(r20);
    if c2 then L72() else L7();
  L83():
    start4 = force? start3;
    checkMissing(start4);
    c3 = `as.logical`(start4);
    if c3 then L84() else L11(c3);
  D8():
    deopt 22 [r7];
  L7():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L77() else L78();
  L11(c5):
    c9 = `as.logical`(c5);
    if c9 then L87() else L12();
  L55():
    checkFun.0(r7);
    r8 = r7 as cls;
    r9 = dyn r8();
    check L56() else D9();
  L72():
    startDynamicHelp = ldf startDynamicHelp;
    check L73() else D18();
  L84():
    port4 = ld port;
    check L85() else D23();
  D9():
    deopt 24 [r9];
  D18():
    deopt 50 [];
  D23():
    deopt 67 [c3, port4];
  L9(r25):
    popenv;
    return r25;
  L12():
    goto L15();
  L15():
    start5 = ld start;
    check L96() else D29();
  L56():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L57() else L58();
  L73():
    r21 = dyn startDynamicHelp(TRUE);
    check L74() else D19();
  L77():
    port2 = ld port;
    check L79() else D20();
  L78():
    r24 = dyn base3(<sym port>);
    goto L9(r24);
  L85():
    port5 = force? port4;
    checkMissing(port5);
    c6 = `as.logical`(port5);
    c7 = `&&`(c3, c6);
    goto L11(c7);
  L87():
    port6 = ld port;
    check L88() else D24();
  D19():
    deopt 52 [r21];
  D20():
    deopt 58 [port2];
  D24():
    deopt 70 [port6];
  D29():
    deopt 84 [start5];
  L3(r11):
    popenv;
    return r11;
  L57():
    httpdPort1 = ldf httpdPort;
    check L59() else D10();
  L58():
    r10 = dyn base1(<lang httpdPort()>);
    goto L3(r10);
  L74():
    popenv;
    return r21;
  L79():
    port3 = force? port2;
    checkMissing(port3);
    invisible1 = ldf invisible in base;
    r26 = dyn invisible1(port3);
    check L80() else D21();
  L88():
    port7 = force? port6;
    checkMissing(port7);
    r29 = `>`(port7, 0);
    c10 = `as.logical`(r29);
    if c10 then L89() else L13();
  L96():
    start6 = force? start5;
    checkMissing(start6);
    r34 = `!`(start6);
    c11 = `as.logical`(r34);
    if c11 then L97() else L16(c11);
  D10():
    deopt 28 [];
  D21():
    deopt 61 [r26];
  L13():
    stop1 = ldf stop;
    check L93() else D27();
  L14(r31):
    goto L15();
  L16(c13):
    c17 = `as.logical`(c13);
    if c17 then L100() else L17();
  L59():
    r12 = dyn httpdPort1();
    check L60() else D11();
  L80():
    goto L9(r26);
  L89():
    stop = ldf stop;
    check L90() else D25();
  L97():
    port8 = ld port;
    check L98() else D30();
  D11():
    deopt 29 [r12];
  D25():
    deopt 75 [];
  D27():
    deopt 79 [];
  D30():
    deopt 87 [c11, port8];
  L17():
    goto L18();
  L18():
    start7 = ld start;
    check L104() else D33();
  L60():
    invisible = ldf invisible in base;
    r13 = dyn invisible(r12);
    check L61() else D12();
  L90():
    r30 = dyn stop("server already running");
    check L91() else D26();
  L93():
    r32 = dyn stop1("server could not be started on an earlier attempt");
    check L94() else D28();
  L98():
    port9 = force? port8;
    checkMissing(port9);
    r35 = `<=`(port9, 0);
    c14 = `as.logical`(r35);
    c15 = `&&`(c11, c14);
    goto L16(c15);
  L100():
    stop2 = ldf stop;
    check L101() else D31();
  D12():
    deopt 31 [r13];
  D26():
    deopt 77 [r30];
  D28():
    deopt 81 [r32];
  D31():
    deopt 93 [];
  D33():
    deopt 98 [start7];
  L61():
    goto L3(r13);
  L91():
    goto L14(r30);
  L94():
    goto L14(r32);
  L101():
    r36 = dyn stop2("no running server to stop");
    check L102() else D32();
  L104():
    start8 = force? start7;
    checkMissing(start8);
    c18 = `as.logical`(start8);
    if c18 then L105() else L19();
  D32():
    deopt 95 [r36];
  L19():
    sym11 = ldf `.Call`;
    base11 = ldf `.Call` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L179() else L180();
  L41():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L184() else L185();
  L102():
    goto L18();
  L105():
    __1 = ldf `::`;
    check L106() else D34();
  D34():
    deopt 101 [];
  L42():
    httpdPort5 = ldf httpdPort;
    check L182() else D76();
  L43(r114):
    popenv;
    return r114;
  L106():
    r38 = dyn __1("utils", "flush.console");
    check L107() else D35();
  L179():
    C_stopHTTPD = ld C_stopHTTPD;
    check L181() else D75();
  L180():
    r109 = dyn base11(<sym C_stopHTTPD>);
    goto L42();
  L184():
    httpdPort6 = ldf httpdPort;
    check L186() else D78();
  L185():
    r113 = dyn base12(<lang httpdPort()>);
    goto L43(r113);
  D35():
    deopt 104 [r38];
  D75():
    deopt 247 [C_stopHTTPD];
  D76():
    deopt 251 [];
  D78():
    deopt 257 [];
  L107():
    checkFun.0(r38);
    r39 = r38 as cls;
    r40 = dyn r39();
    check L108() else D36();
  L181():
    C_stopHTTPD1 = force? C_stopHTTPD;
    checkMissing(C_stopHTTPD1);
    vargs1 = dots[];
    r111 = `.Call`(C_stopHTTPD1, vargs1, <missing>);
    goto L42();
  L182():
    r112 = dyn httpdPort5(0);
    check L183() else D77();
  L186():
    r115 = dyn httpdPort6();
    check L187() else D79();
  D36():
    deopt 106 [r40];
  D77():
    deopt 253 [r112];
  D79():
    deopt 258 [r115];
  L108():
    st OK = FALSE;
    getOption = ldf getOption;
    check L109() else D37();
  L183():
    goto L41();
  L187():
    invisible3 = ldf invisible in base;
    r116 = dyn invisible3(r115);
    check L188() else D80();
  D37():
    deopt 111 [];
  D80():
    deopt 260 [r116];
  L109():
    r41 = dyn getOption("help.ports");
    check L110() else D38();
  L188():
    goto L43(r116);
  D38():
    deopt 113 [r41];
  L110():
    st ports = r41;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L111() else L112();
  L20(r43):
    c20 = `as.logical`(r43);
    if c20 then L114() else L21();
  L111():
    ports = ld ports;
    check L113() else D39();
  L112():
    r42 = dyn base4(<sym ports>);
    goto L20(r42);
  D39():
    deopt 116 [ports];
  L21():
    goto L23();
  L23():
    sym6 = ldf `as.integer`;
    base6 = ldf `as.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L125() else L126();
  L113():
    ports1 = force? ports;
    checkMissing(ports1);
    c19 = `==`(ports1, NULL);
    goto L20(c19);
  L114():
    __2 = ldf `::`;
    check L115() else D40();
  D40():
    deopt 123 [10000.0, 22000.0];
  L24(r67):
    st ports = r67;
    sym7 = ldf all;
    base7 = ldf all in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L129() else L130();
  L115():
    r44 = dyn __2("stats", "runif");
    check L116() else D41();
  L125():
    ports2 = ld ports;
    check L127() else D47();
  L126():
    r66 = dyn base6(<sym ports>);
    goto L24(r66);
  D41():
    deopt 126 [10000.0, 22000.0, r44];
  D47():
    deopt 149 [ports2];
  L25(r70):
    c21 = `as.logical`(r70);
    if c21 then L133() else L26();
  L116():
    checkFun.0(r44);
    r45 = r44 as cls;
    r46 = dyn r45(10.0);
    check L117() else D42();
  L127():
    ports3 = force? ports2;
    checkMissing(ports3);
    as_integer = ldf `as.integer` in base;
    r68 = dyn as_integer(ports3);
    check L128() else D48();
  L129():
    ports4 = ld ports;
    check L131() else D49();
  L130():
    r69 = dyn base7(<lang `==`(ports, 0.0)>);
    goto L25(r69);
  D42():
    deopt 129 [10000.0, 22000.0, r46];
  D48():
    deopt 152 [r68];
  D49():
    deopt 156 [ports4];
  L26():
    message = ldf message;
    check L139() else D52();
  L117():
    sym5 = ldf unclass;
    base5 = ldf unclass in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L118() else L119();
  L128():
    goto L24(r68);
  L131():
    ports5 = force? ports4;
    checkMissing(ports5);
    r71 = `==`(ports5, 0.0);
    all = ldf all in base;
    r72 = dyn all(r71);
    check L132() else D50();
  L133():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L134() else L135();
  D50():
    deopt 161 [r72];
  D52():
    deopt 171 [];
  L22(r54, r55, r56, r57):
    r60 = `/`(r57, 300.0);
    r61 = `+`(r56, r60);
    __3 = ldf `%%` in base;
    r62 = dyn __3(r61, 1.0);
    check L123() else D46();
  L27(r74):
    popenv;
    return r74;
  L118():
    Sys_time = ldf `Sys.time`;
    check L120() else D43();
  L119():
    r53 = dyn base5(<lang Sys.time()>);
    goto L22(10000.0, 22000.0, r46, r53);
  L132():
    goto L25(r72);
  L134():
    invisible2 = ldf invisible in base;
    r75 = dyn invisible2(0.0);
    check L136() else D51();
  L135():
    r73 = dyn base8(0.0);
    goto L27(r73);
  L139():
    r78 = dyn message[, appendLF]("starting httpd help server ...", FALSE);
    check L140() else D53();
  D43():
    deopt 132 [10000.0, 22000.0, r46];
  D46():
    deopt 141 [r54, r55, r62];
  D51():
    deopt 166 [r75];
  D53():
    deopt 175 [r78];
  L120():
    r58 = dyn Sys_time();
    check L121() else D44();
  L123():
    r63 = `*`(r55, r62);
    r64 = `+`(r54, r63);
    st ports = r64;
    goto L23();
  L136():
    goto L27(r75);
  L140():
    sym9 = ldf seq_along;
    base9 = ldf seq_along in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L141() else L142();
  D44():
    deopt 133 [10000.0, 22000.0, r46, r58];
  L29(r80):
    s = toForSeq(r80);
    l = length(s);
    i = 0;
    goto L30(i);
  L121():
    unclass = ldf unclass in base;
    r59 = dyn unclass(r58);
    check L122() else D45();
  L141():
    ports6 = ld ports;
    check L143() else D54();
  L142():
    r79 = dyn base9(<sym ports>);
    goto L29(r79);
  D45():
    deopt 135 [10000.0, 22000.0, r46, r59];
  D54():
    deopt 177 [ports6];
  L30(i1):
    i2 = `+`.1(i1, 1);
    c22 = `<`.1(l, i2);
    if c22 then L144() else L38();
  L122():
    goto L22(10000.0, 22000.0, r46, r59);
  L143():
    ports7 = force? ports6;
    checkMissing(ports7);
    r81 = seq_along(ports7);
    goto L29(r81);
  L34():
    OK = ld OK;
    check L163() else D62();
  L38():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym10 = ldf `.Call`;
    base10 = ldf `.Call` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L145() else L146();
  L144():
    goto L34();
  D62():
    deopt 216 [OK];
  L31(i7, r83):
    st status = r83;
    status = ld status;
    check L153() else D58();
  L145():
    C_startHTTPD = ld C_startHTTPD;
    check L147() else D55();
  L146():
    r82 = dyn base10(<sym C_startHTTPD>, "127.0.0.1", <lang `[`(ports, i)>);
    goto L31(i2, r82);
  L163():
    OK1 = force? OK;
    checkMissing(OK1);
    c27 = `as.logical`(OK1);
    if c27 then L164() else L39();
  D55():
    deopt 181 [i2, C_startHTTPD];
  D58():
    deopt 190 [i7, status];
  L39():
    warning1 = ldf warning;
    check L171() else D68();
  L40(r101):
    goto L41();
  L147():
    C_startHTTPD1 = force? C_startHTTPD;
    checkMissing(C_startHTTPD1);
    ports8 = ld ports;
    check L148() else D56();
  L153():
    status1 = force? status;
    checkMissing(status1);
    r90 = `==`(status1, 0);
    c24 = `as.logical`(r90);
    if c24 then L154() else L33();
  L164():
    message1 = ldf message;
    check L165() else D63();
  D56():
    deopt 183 [i2, C_startHTTPD1, "127.0.0.1", ports8];
  D63():
    deopt 219 [];
  D68():
    deopt 230 [];
  L33():
    status2 = ld status;
    check L159() else D61();
  L148():
    ports9 = force? ports8;
    checkMissing(ports9);
    c23 = `is.object`(ports9);
    if c23 then L149() else L150(i2, C_startHTTPD1, "127.0.0.1", ports9);
  L154():
    st OK = TRUE;
    httpdPort3 = ldf httpdPort;
    check L155() else D59();
  L165():
    r97 = dyn message1(" done");
    check L166() else D64();
  L171():
    r102 = dyn warning1[, `immediate.`]("failed to start the httpd server", TRUE);
    check L172() else D69();
  D59():
    deopt 198 [i7];
  D61():
    deopt 205 [i7, status2];
  D64():
    deopt 221 [r97];
  D69():
    deopt 234 [r102];
  L32(i11, C_startHTTPD5, r87, dx1):
    vargs = dots[r87, dx1];
    r89 = `.Call`(C_startHTTPD5, vargs, <missing>);
    goto L31(i11, r89);
  L149():
    dr = tryDispatchBuiltin.1("[", ports9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L151() else L150(i2, C_startHTTPD1, "127.0.0.1", dr);
  L150(i9, C_startHTTPD3, r85, ports11):
    i12 = ld i;
    check L152() else D57();
  L155():
    p1 = prom<V +>{
      ports12 = ld ports;
      ports13 = force? ports12;
      checkMissing(ports13);
      c25 = `is.object`(ports13);
      if c25 then L1() else L2(ports13);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", ports13);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(ports15):
      i16 = ld i;
      i17 = force? i16;
      __5 = ldf `[` in base;
      r91 = dyn __5(ports15, i17);
      goto L0(r91);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r93 = dyn httpdPort3(p1);
    check L156() else D60();
  L159():
    status3 = force? status2;
    checkMissing(status3);
    r95 = `!=`(status3, -2);
    c26 = `as.logical`(r95);
    if c26 then L160() else L36();
  L166():
    __6 = ldf `::`;
    check L167() else D65();
  L172():
    __7 = ldf `::`;
    check L173() else D70();
  D57():
    deopt 185 [i9, C_startHTTPD3, r85, ports11, i12];
  D60():
    deopt 200 [i7, r93];
  D65():
    deopt 223 [];
  D70():
    deopt 236 [];
  L36():
    goto L30(i7);
  L151():
    dx = getTryDispatchBuiltinValue(dr);
    goto L32(i2, C_startHTTPD1, "127.0.0.1", dx);
  L152():
    i13 = force? i12;
    __4 = ldf `[` in base;
    r88 = dyn __4(ports11, i13);
    goto L32(i9, C_startHTTPD3, r85, r88);
  L156():
    goto L34();
  L160():
    goto L34();
  L167():
    r98 = dyn __6("utils", "flush.console");
    check L168() else D66();
  L173():
    r103 = dyn __7("utils", "flush.console");
    check L174() else D71();
  D66():
    deopt 226 [r98];
  D71():
    deopt 239 [r103];
  L168():
    checkFun.0(r98);
    r99 = r98 as cls;
    r100 = dyn r99();
    check L169() else D67();
  L174():
    checkFun.0(r103);
    r104 = r103 as cls;
    r105 = dyn r104();
    check L175() else D72();
  D67():
    deopt 228 [r100];
  D72():
    deopt 241 [r105];
  L169():
    goto L40(r100);
  L175():
    httpdPort4 = ldf httpdPort;
    check L176() else D73();
  D73():
    deopt 243 [];
  L176():
    p2 = prom<V +>{
      return -1;
    };
    r107 = dyn httpdPort4(p2);
    check L177() else D74();
  D74():
    deopt 245 [r107];
  L177():
    goto L40(r107);
  }
}