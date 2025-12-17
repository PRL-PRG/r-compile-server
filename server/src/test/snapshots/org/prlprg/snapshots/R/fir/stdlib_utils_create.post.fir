fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner912070442;
    st `create.post` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner912070442(instructions, description, subject, method, address, ccaddress, filename, info) {
  (reg instructions:*, reg description:*, reg subject:*, reg method:*, reg address:*, reg ccaddress:*, reg filename:*, reg info:*) -+> V { var instructions:*, reg instructions_isMissing:L, reg instructions_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var description:*, reg description_isMissing:L, reg description_orDefault:*, var subject:*, reg subject_isMissing:L, reg subject_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg getOption:cls, reg r2:V, reg p1:p(V +), var address:*, reg address_isMissing:L, reg address_orDefault:*, var ccaddress:*, reg ccaddress_isMissing:L, reg ccaddress_orDefault:*, reg getOption1:cls, reg r4:V, reg p2:p(V +), var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, var info:*, reg info_isMissing:L, reg info_orDefault:*, reg character1:cls, reg r6:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg method1:*, reg method2:V, reg c:V, reg c1:L, reg r10:V, reg match_arg:cls, reg method3:*, reg method4:V, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg c2:cls, reg r14:V, reg p5:p(V +), reg r16:V, reg grepl:cls, reg R_version:*, reg R_version1:V, reg c3:L, reg R_version3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r17:V, reg p6:p(V +), reg r19:V, reg c4:L, reg r20:S, reg method5:*, reg method6:V, reg r21:V, reg c5:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg Sys_which:cls, reg open_prog:*, reg open_prog1:V, reg p7:p(V +), reg r25:V, reg nzchar:cls, reg r26:V, reg r27:V, reg c6:L, reg Sys_getenv:cls, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg browser:*, reg browser1:V, reg nzchar1:cls, reg r31:V, reg r32:V, reg c7:L, reg warning:cls, reg r33:V, reg flush_console:cls, reg r34:V, reg Sys_sleep:cls, reg r35:V, reg r36:V, reg message:cls, reg r37:V, reg browser2:*, reg browser3:V, reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg instructions1:*, reg instructions2:V, reg info1:*, reg info2:V, reg c8:cls, reg r42:V, reg r43:cls, reg method7:*, reg method8:V, reg r44:V, reg c9:L, reg none_method:cls, reg r45:V, reg method9:*, reg method10:V, reg r47:V, reg c10:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg missing:cls, reg r50:V, reg c11:L, reg stop:cls, reg r51:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg subject1:*, reg subject2:V, reg nzchar2:cls, reg r55:V, reg r56:V, reg c12:L, reg stop1:cls, reg r57:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg ccaddress1:*, reg ccaddress2:V, reg length:cls, reg r61:V, reg r62:V, reg c13:L, reg stop2:cls, reg r63:V, reg cat:cls, reg body:*, reg body1:V, reg p8:p(V +), reg filename1:*, reg filename2:V, reg p9:p(V +), reg r67:V, reg cat1:cls, reg description1:*, reg description2:V, reg p10:p(V +), reg r69:V, reg file_edit:cls, reg filename3:*, reg filename4:V, reg p11:p(V +), reg r71:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r72:V, reg r73:V, reg ccaddress3:*, reg ccaddress4:V, reg c14:L, reg c15:L, reg c17:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r74:V, reg c20:L, reg r75:V, reg ccaddress5:*, reg ccaddress6:V, reg nzchar3:cls, reg r76:V, reg c21:L, reg c22:V, reg c24:L, reg paste:cls, reg shQuote:cls, reg subject3:*, reg subject4:V, reg p12:p(V +), reg r78:V, reg p13:p(V +), reg shQuote1:cls, reg ccaddress7:*, reg ccaddress8:V, reg p14:p(V +), reg r81:V, reg p15:p(V +), reg shQuote2:cls, reg address1:*, reg address2:V, reg p16:p(V +), reg r84:V, reg p17:p(V +), reg filename5:*, reg filename6:V, reg p18:p(V +), reg r87:V, reg paste1:cls, reg shQuote3:cls, reg subject5:*, reg subject6:V, reg p19:p(V +), reg r90:V, reg p20:p(V +), reg shQuote4:cls, reg address3:*, reg address4:V, reg p21:p(V +), reg r93:V, reg p22:p(V +), reg filename7:*, reg filename8:V, reg p23:p(V +), reg r96:V, reg askYesNo:cls, reg paste2:cls, reg description3:*, reg description4:V, reg p24:p(V +), reg r98:V, reg p25:p(V +), reg r100:V, reg isTRUE:cls, reg answer:*, reg answer1:V, reg p26:p(V +), reg r102:V, reg c25:L, reg cat2:cls, reg r103:V, reg system:cls, reg paste3:cls, reg cmdargs:*, reg cmdargs1:V, reg p27:p(V +), reg r105:V, reg p28:p(V +), reg r107:V, reg status:*, reg status1:V, reg c26:L, reg system1:cls, reg paste4:cls, reg cmdargs2:*, reg cmdargs3:V, reg p29:p(V +), reg r109:V, reg p30:p(V +), reg r111:V, reg status2:*, reg status3:V, reg c27:L, reg system2:cls, reg paste5:cls, reg cmdargs4:*, reg cmdargs5:V, reg p31:p(V +), reg r114:V, reg p32:p(V +), reg r116:V, reg status4:*, reg status5:V, reg r118:V, reg c28:L, reg unlink:cls, reg filename9:*, reg filename10:V, reg p33:p(V +), reg r120:V, reg r121:V, reg cat3:cls, reg r122:V, reg cat4:cls, reg description5:*, reg description6:V, reg p34:p(V +), reg sQuote:cls, reg filename11:*, reg filename12:V, reg p35:p(V +), reg r125:V, reg p36:p(V +), reg r127:V, reg r128:V, reg cat5:cls, reg description7:*, reg description8:V, reg p37:p(V +), reg filename13:*, reg filename14:V, reg p38:p(V +), reg r131:V, reg method11:*, reg method12:V, reg r132:V, reg c29:L, reg cat6:cls, reg body2:*, reg body3:V, reg p39:p(V +), reg r134:V, reg method13:*, reg method14:V, reg r135:V, reg c30:L, reg paste6:cls, reg address5:*, reg address6:V, reg p40:p(V +), reg paste7:cls, reg body4:*, reg body5:V, reg p41:p(V +), reg r138:V, reg p42:p(V +), reg r140:V, reg system3:cls, reg cmd:*, reg cmd1:V, reg p43:p(V +), reg r142:V, reg method15:*, reg method16:V, reg r143:V, reg c31:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r144:V, reg r145:V, reg missing1:cls, reg r146:V, reg c32:L, reg stop3:cls, reg r147:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r149:V, reg r150:V, reg subject7:*, reg subject8:V, reg nzchar4:cls, reg r151:V, reg r152:V, reg c33:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r154:V, reg r155:V, reg ccaddress9:*, reg ccaddress10:V, reg length1:cls, reg r156:V, reg r157:V, reg c34:L, reg stop4:cls, reg r158:V, reg cat7:cls, reg description9:*, reg description10:V, reg p44:p(V +), reg r161:V, reg paste8:cls, reg address7:*, reg address8:V, reg p45:p(V +), reg subject9:*, reg subject10:V, reg p46:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r164:V, reg r165:V, reg ccaddress11:*, reg ccaddress12:V, reg c35:L, reg c36:L, reg c38:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r166:V, reg c41:L, reg r167:V, reg ccaddress13:*, reg ccaddress14:V, reg nzchar5:cls, reg r168:V, reg c42:L, reg c43:V, reg c45:L, reg paste9:cls, reg ccaddress15:*, reg ccaddress16:V, reg p47:p(V +), reg r170:V, reg p48:p(V +), reg paste10:cls, reg body6:*, reg body7:V, reg p49:p(V +), reg r173:V, reg p50:p(V +), reg r175:V, reg system4:cls, reg open_prog2:*, reg open_prog3:V, reg p51:p(V +), reg shQuote5:cls, reg URLencode:cls, reg arg:*, reg arg1:V, reg p52:p(V +), reg r178:V, reg p53:p(V +), reg r180:V, reg p54:p(V +), reg r182:V, reg c46:L, reg cat8:cls, reg r183:V, reg flush_console1:cls, reg r184:V, reg none_method1:cls, reg r185:V, reg r186:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r187:V, reg r188:V, reg invisible:cls, reg r189:V |
    mkenv;
    instructions_isMissing = missing.0(instructions);
    if instructions_isMissing then L0() else L1(instructions);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(instructions_orDefault):
    st instructions = instructions_orDefault;
    description_isMissing = missing.0(description);
    if description_isMissing then L2("post") else L2(description);
  L2(description_orDefault):
    st description = description_orDefault;
    subject_isMissing = missing.0(subject);
    if subject_isMissing then L3("") else L3(subject);
  L3(subject_orDefault):
    st subject = subject_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L4() else L5(method);
  L4():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r2 = dyn getOption("mailer");
      return r2;
    };
    goto L5(p1);
  L5(method_orDefault):
    st method = method_orDefault;
    address_isMissing = missing.0(address);
    if address_isMissing then L6("the relevant mailing list") else L6(address);
  L6(address_orDefault):
    st address = address_orDefault;
    ccaddress_isMissing = missing.0(ccaddress);
    if ccaddress_isMissing then L7() else L8(ccaddress);
  L7():
    p2 = prom<V +>{
      getOption1 = ldf getOption;
      r4 = dyn getOption1("ccaddress", "");
      return r4;
    };
    goto L8(p2);
  L8(ccaddress_orDefault):
    st ccaddress = ccaddress_orDefault;
    filename_isMissing = missing.0(filename);
    if filename_isMissing then L9("R.post") else L9(filename);
  L9(filename_orDefault):
    st filename = filename_orDefault;
    info_isMissing = missing.0(info);
    if info_isMissing then L10() else L11(info);
  L10():
    p3 = prom<V +>{
      character1 = ldf character;
      r6 = dyn character1();
      return r6;
    };
    goto L11(p3);
  L11(info_orDefault):
    st info = info_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L66() else L67();
  L12(r9):
    c1 = `as.logical`(r9);
    if c1 then L69() else L13();
  L66():
    method1 = ld method;
    check L68() else D0();
  L67():
    r8 = dyn base(<sym method>);
    goto L12(r8);
  D0():
    deopt 1 [method1];
  L13():
    match_arg = ldf `match.arg`;
    check L71() else D1();
  L14(r10):
    st method = r10;
    grepl = ldf grepl;
    check L73() else D3();
  L68():
    method2 = force? method1;
    checkMissing(method2);
    c = `==`(method2, NULL);
    goto L12(c);
  L69():
    goto L14("none");
  D1():
    deopt 7 [];
  D3():
    deopt 13 [];
  L71():
    p4 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c2 = ldf c in base;
      r14 = dyn c2("mailto", "mailx", "gnudoit", "none", "ess");
      goto L0(r14);
    L2():
      r12 = dyn base1("mailto", "mailx", "gnudoit", "none", "ess");
      goto L0(r12);
    };
    r16 = dyn match_arg(p4, p5);
    check L72() else D2();
  L73():
    p6 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c3 = `is.object`(R_version1);
      if c3 then L1() else L2(R_version1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", R_version1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(R_version3):
      r17 = `$`(R_version3, <sym platform>);
      goto L0(r17);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r19 = dyn grepl("-apple-darwin", p6);
    check L74() else D4();
  D2():
    deopt 10 [r16];
  D4():
    deopt 16 [r19];
  L72():
    goto L14(r16);
  L74():
    c4 = `as.logical`(r19);
    if c4 then L75() else L15();
  L15():
    goto L16("xdg-open");
  L16(r20):
    st open_prog = r20;
    method5 = ld method;
    check L77() else D5();
  L75():
    goto L16("open");
  D5():
    deopt 22 [method5];
  L77():
    method6 = force? method5;
    checkMissing(method6);
    r21 = `==`(method6, "mailto");
    c5 = `as.logical`(r21);
    if c5 then L78() else L17();
  L17():
    goto L24();
  L24():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L104() else L105();
  L78():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L79() else L80();
  L18(r23):
    r27 = `!`(r23);
    c6 = `as.logical`(r27);
    if c6 then L84() else L19();
  L25(r41):
    st body = r41;
    r43 = clos inner2708337952;
    st none_method = r43;
    method7 = ld method;
    check L109() else D25();
  L79():
    Sys_which = ldf `Sys.which`;
    check L81() else D6();
  L80():
    r22 = dyn base2(<lang Sys.which(open_prog)>);
    goto L18(r22);
  L104():
    instructions1 = ld instructions;
    check L106() else D22();
  L105():
    r40 = dyn base4(<sym instructions>, "--please do not edit the information below--", "", <sym info>);
    goto L25(r40);
  D6():
    deopt 29 [];
  D22():
    deopt 72 [instructions1];
  D25():
    deopt 84 [method7];
  L19():
    goto L23(NULL);
  L23(r38):
    goto L24();
  L81():
    p7 = prom<V +>{
      open_prog = ld open_prog;
      open_prog1 = force? open_prog;
      checkMissing(open_prog1);
      return open_prog1;
    };
    r25 = dyn Sys_which(p7);
    check L82() else D7();
  L84():
    Sys_getenv = ldf `Sys.getenv`;
    check L85() else D9();
  L106():
    instructions2 = force? instructions1;
    checkMissing(instructions2);
    info1 = ld info;
    check L107() else D23();
  L109():
    method8 = force? method7;
    checkMissing(method8);
    r44 = `==`(method8, "none");
    c9 = `as.logical`(r44);
    if c9 then L110() else L26();
  D7():
    deopt 31 [r25];
  D9():
    deopt 36 [];
  D23():
    deopt 76 [info1];
  L26():
    method9 = ld method;
    check L114() else D28();
  L27():
    sym15 = ldf invisible;
    base15 = ldf invisible in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L240() else L241();
  L82():
    nzchar = ldf nzchar in base;
    r26 = dyn nzchar(r25);
    check L83() else D8();
  L85():
    r28 = dyn Sys_getenv("R_BROWSER", "");
    check L86() else D10();
  L107():
    info2 = force? info1;
    checkMissing(info2);
    c8 = ldf c in base;
    r42 = dyn c8(instructions2, "--please do not edit the information below--", "", info2);
    check L108() else D24();
  L110():
    none_method = ldf none_method;
    check L111() else D26();
  D8():
    deopt 33 [r26];
  D10():
    deopt 39 [r28];
  D24():
    deopt 79 [r42];
  D26():
    deopt 89 [];
  D28():
    deopt 91 [method9];
  L65(r188):
    popenv;
    return r188;
  L83():
    goto L18(r26);
  L86():
    st browser = r28;
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L87() else L88();
  L108():
    goto L25(r42);
  L111():
    r45 = dyn none_method();
    check L112() else D27();
  L114():
    method10 = force? method9;
    checkMissing(method10);
    r47 = `==`(method10, "mailx");
    c10 = `as.logical`(r47);
    if c10 then L115() else L28();
  L240():
    invisible = ldf invisible in base;
    r189 = dyn invisible();
    check L242() else D104();
  L241():
    r187 = dyn base15();
    goto L65(r187);
  D27():
    deopt 90 [r45];
  D104():
    deopt 369 [r189];
  L20(r30):
    r32 = `!`(r30);
    c7 = `as.logical`(r32);
    if c7 then L91() else L21();
  L28():
    method11 = ld method;
    check L191() else D75();
  L87():
    browser = ld browser;
    check L89() else D11();
  L88():
    r29 = dyn base3(<sym browser>);
    goto L20(r29);
  L112():
    goto L27();
  L115():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L116() else L117();
  L242():
    goto L65(r189);
  D11():
    deopt 43 [browser];
  D75():
    deopt 258 [method11];
  L21():
    message = ldf message;
    check L99() else D19();
  L22(r36):
    goto L23(r36);
  L29(r49):
    c11 = `as.logical`(r49);
    if c11 then L118() else L30();
  L89():
    browser1 = force? browser;
    checkMissing(browser1);
    nzchar1 = ldf nzchar in base;
    r31 = dyn nzchar1(browser1);
    check L90() else D12();
  L91():
    warning = ldf warning;
    check L92() else D13();
  L116():
    missing = ldf missing in base;
    r50 = dyn missing(<sym address>);
    goto L29(r50);
  L117():
    r48 = dyn base5(<sym address>);
    goto L29(r48);
  L191():
    method12 = force? method11;
    checkMissing(method12);
    r132 = `==`(method12, "ess");
    c29 = `as.logical`(r132);
    if c29 then L192() else L51();
  D12():
    deopt 46 [r31];
  D13():
    deopt 49 [];
  D19():
    deopt 60 [];
  L30():
    goto L31();
  L31():
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L122() else L123();
  L51():
    method13 = ld method;
    check L196() else D78();
  L90():
    goto L20(r31);
  L92():
    r33 = dyn warning("cannot find program to open 'mailto:' URIs: reverting to 'method=\"none\"'");
    check L93() else D14();
  L99():
    r37 = dyn message("Using the browser to open a mailto: URI");
    check L100() else D20();
  L118():
    stop = ldf stop;
    check L119() else D29();
  L192():
    cat6 = ldf cat;
    check L193() else D76();
  D14():
    deopt 51 [r33];
  D20():
    deopt 62 [r37];
  D29():
    deopt 99 [];
  D76():
    deopt 263 [];
  D78():
    deopt 268 [method13];
  L32(r54):
    r56 = `!`(r54);
    c12 = `as.logical`(r56);
    if c12 then L126() else L33();
  L93():
    flush_console = ldf `flush.console`;
    check L94() else D15();
  L100():
    browser2 = ld browser;
    check L101() else D21();
  L119():
    r51 = dyn stop("must specify 'address'");
    check L120() else D30();
  L122():
    subject1 = ld subject;
    check L124() else D31();
  L123():
    r53 = dyn base6(<sym subject>);
    goto L32(r53);
  L193():
    p39 = prom<V +>{
      body2 = ld body;
      body3 = force? body2;
      checkMissing(body3);
      return body3;
    };
    r134 = dyn cat6[, sep](p39, "\n");
    check L194() else D77();
  L196():
    method14 = force? method13;
    checkMissing(method14);
    r135 = `==`(method14, "gnudoit");
    c30 = `as.logical`(r135);
    if c30 then L197() else L52();
  D15():
    deopt 53 [];
  D21():
    deopt 63 [browser2];
  D30():
    deopt 101 [r51];
  D31():
    deopt 106 [subject1];
  D77():
    deopt 267 [r134];
  L33():
    goto L34();
  L34():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L130() else L131();
  L52():
    method15 = ld method;
    check L203() else D83();
  L94():
    r34 = dyn flush_console();
    check L95() else D16();
  L101():
    browser3 = force? browser2;
    checkMissing(browser3);
    st open_prog = browser3;
    goto L22(browser3);
  L120():
    goto L31();
  L124():
    subject2 = force? subject1;
    checkMissing(subject2);
    nzchar2 = ldf nzchar in base;
    r55 = dyn nzchar2(subject2);
    check L125() else D32();
  L126():
    stop1 = ldf stop;
    check L127() else D33();
  L194():
    goto L27();
  L197():
    paste6 = ldf paste0;
    check L198() else D79();
  D16():
    deopt 54 [r34];
  D32():
    deopt 109 [r55];
  D33():
    deopt 112 [];
  D79():
    deopt 273 [];
  D83():
    deopt 289 [method15];
  L35(r60):
    r62 = `!=`(r60, 1);
    c13 = `as.logical`(r62);
    if c13 then L134() else L36();
  L95():
    Sys_sleep = ldf `Sys.sleep`;
    check L96() else D17();
  L125():
    goto L32(r55);
  L127():
    r57 = dyn stop1("'subject' is missing");
    check L128() else D34();
  L130():
    ccaddress1 = ld ccaddress;
    check L132() else D35();
  L131():
    r59 = dyn base7(<sym ccaddress>);
    goto L35(r59);
  L198():
    p40 = prom<V +>{
      address5 = ld address;
      address6 = force? address5;
      checkMissing(address6);
      return address6;
    };
    p42 = prom<V +>{
      paste7 = ldf paste;
      p41 = prom<V +>{
        body4 = ld body;
        body5 = force? body4;
        checkMissing(body5);
        return body5;
      };
      r138 = dyn paste7[, collapse](p41, "\\n");
      return r138;
    };
    r140 = dyn paste6("gnudoit -q '", "(mail nil \"", p40, "\")", "(insert \"", p42, "\")", "(search-backward \"Subject:\")", "(end-of-line)'");
    check L199() else D80();
  L203():
    method16 = force? method15;
    checkMissing(method16);
    r143 = `==`(method16, "mailto");
    c31 = `as.logical`(r143);
    if c31 then L204() else L53();
  D17():
    deopt 56 [];
  D34():
    deopt 114 [r57];
  D35():
    deopt 119 [ccaddress1];
  D80():
    deopt 283 [r140];
  L36():
    goto L37();
  L37():
    cat = ldf cat;
    check L138() else D39();
  L53():
    goto L27();
  L96():
    r35 = dyn Sys_sleep(5.0);
    check L97() else D18();
  L128():
    goto L34();
  L132():
    ccaddress2 = force? ccaddress1;
    checkMissing(ccaddress2);
    length = ldf length in base;
    r61 = dyn length(ccaddress2);
    check L133() else D36();
  L134():
    stop2 = ldf stop;
    check L135() else D37();
  L199():
    st cmd = r140;
    system3 = ldf system;
    check L200() else D81();
  L204():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L205() else L206();
  D18():
    deopt 58 [r35];
  D36():
    deopt 122 [r61];
  D37():
    deopt 126 [];
  D39():
    deopt 132 [];
  D81():
    deopt 286 [];
  L54(r145):
    c32 = `as.logical`(r145);
    if c32 then L207() else L55();
  L97():
    goto L22(r35);
  L133():
    goto L35(r61);
  L135():
    r63 = dyn stop2("'ccaddress' must be of length 1");
    check L136() else D38();
  L138():
    p8 = prom<V +>{
      body = ld body;
      body1 = force? body;
      checkMissing(body1);
      return body1;
    };
    p9 = prom<V +>{
      filename1 = ld filename;
      filename2 = force? filename1;
      checkMissing(filename2);
      return filename2;
    };
    r67 = dyn cat[, file, sep](p8, p9, "\n");
    check L139() else D40();
  L200():
    p43 = prom<V +>{
      cmd = ld cmd;
      cmd1 = force? cmd;
      checkMissing(cmd1);
      return cmd1;
    };
    r142 = dyn system3(p43);
    check L201() else D82();
  L205():
    missing1 = ldf missing in base;
    r146 = dyn missing1(<sym address>);
    goto L54(r146);
  L206():
    r144 = dyn base10(<sym address>);
    goto L54(r144);
  D38():
    deopt 128 [r63];
  D40():
    deopt 138 [r67];
  D82():
    deopt 288 [r142];
  L55():
    goto L56();
  L56():
    sym11 = ldf nzchar;
    base11 = ldf nzchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L211() else L212();
  L136():
    goto L37();
  L139():
    cat1 = ldf cat;
    check L140() else D41();
  L201():
    goto L27();
  L207():
    stop3 = ldf stop;
    check L208() else D84();
  D41():
    deopt 140 [];
  D84():
    deopt 297 [];
  L57(r150):
    r152 = `!`(r150);
    c33 = `as.logical`(r152);
    if c33 then L215() else L58();
  L140():
    p10 = prom<V +>{
      description1 = ld description;
      description2 = force? description1;
      checkMissing(description2);
      return description2;
    };
    r69 = dyn cat1("The", p10, "is being opened for you to edit.\n");
    check L141() else D42();
  L208():
    r147 = dyn stop3("must specify 'address'");
    check L209() else D85();
  L211():
    subject7 = ld subject;
    check L213() else D86();
  L212():
    r149 = dyn base11(<sym subject>);
    goto L57(r149);
  D42():
    deopt 144 [r69];
  D85():
    deopt 299 [r147];
  D86():
    deopt 304 [subject7];
  L58():
    goto L59();
  L59():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L217() else L218();
  L141():
    file_edit = ldf `file.edit`;
    check L142() else D43();
  L209():
    goto L56();
  L213():
    subject8 = force? subject7;
    checkMissing(subject8);
    nzchar4 = ldf nzchar in base;
    r151 = dyn nzchar4(subject8);
    check L214() else D87();
  L215():
    st subject = "<<Enter Meaningful Subject>>";
    goto L59();
  D43():
    deopt 146 [];
  D87():
    deopt 307 [r151];
  L60(r155):
    r157 = `!=`(r155, 1);
    c34 = `as.logical`(r157);
    if c34 then L221() else L61();
  L142():
    p11 = prom<V +>{
      filename3 = ld filename;
      filename4 = force? filename3;
      checkMissing(filename4);
      return filename4;
    };
    r71 = dyn file_edit(p11);
    check L143() else D44();
  L214():
    goto L57(r151);
  L217():
    ccaddress9 = ld ccaddress;
    check L219() else D88();
  L218():
    r154 = dyn base12(<sym ccaddress>);
    goto L60(r154);
  D44():
    deopt 148 [r71];
  D88():
    deopt 316 [ccaddress9];
  L61():
    goto L62();
  L62():
    cat7 = ldf cat;
    check L225() else D92();
  L143():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L144() else L145();
  L219():
    ccaddress10 = force? ccaddress9;
    checkMissing(ccaddress10);
    length1 = ldf length in base;
    r156 = dyn length1(ccaddress10);
    check L220() else D89();
  L221():
    stop4 = ldf stop;
    check L222() else D90();
  D89():
    deopt 319 [r156];
  D90():
    deopt 323 [];
  D92():
    deopt 329 [];
  L38(r73):
    c15 = `as.logical`(r73);
    if c15 then L147() else L39(c15);
  L144():
    ccaddress3 = ld ccaddress;
    check L146() else D45();
  L145():
    r72 = dyn base8(<sym ccaddress>);
    goto L38(r72);
  L220():
    goto L60(r156);
  L222():
    r158 = dyn stop4("'ccaddress' must be of length 1");
    check L223() else D91();
  L225():
    p44 = prom<V +>{
      description9 = ld description;
      description10 = force? description9;
      checkMissing(description10);
      return description10;
    };
    r161 = dyn cat7("The", p44, "is being opened in your default mail program\nfor you to complete and send.\n");
    check L226() else D93();
  D45():
    deopt 150 [ccaddress3];
  D91():
    deopt 325 [r158];
  D93():
    deopt 333 [r161];
  L39(c17):
    c24 = `as.logical`(c17);
    if c24 then L153() else L41();
  L146():
    ccaddress4 = force? ccaddress3;
    checkMissing(ccaddress4);
    c14 = `is.character`(ccaddress4);
    goto L38(c14);
  L147():
    sym9 = ldf nzchar;
    base9 = ldf nzchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L148() else L149();
  L223():
    goto L62();
  L226():
    paste8 = ldf paste0;
    check L227() else D94();
  D94():
    deopt 335 [];
  L40(c20, r75):
    c21 = `as.logical`(r75);
    c22 = `&&`(c20, c21);
    goto L39(c22);
  L41():
    paste1 = ldf paste;
    check L157() else D50();
  L42():
    st status = 1;
    askYesNo = ldf askYesNo;
    check L159() else D52();
  L148():
    ccaddress5 = ld ccaddress;
    check L150() else D46();
  L149():
    r74 = dyn base9(<sym ccaddress>);
    goto L40(c15, r74);
  L153():
    paste = ldf paste;
    check L154() else D48();
  L227():
    p45 = prom<V +>{
      address7 = ld address;
      address8 = force? address7;
      checkMissing(address8);
      return address8;
    };
    p46 = prom<V +>{
      subject9 = ld subject;
      subject10 = force? subject9;
      checkMissing(subject10);
      return subject10;
    };
    p48 = prom<V +>{
      sym13 = ldf `is.character`;
      base13 = ldf `is.character` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L4() else L5();
    L0(r165):
      c36 = `as.logical`(r165);
      if c36 then L6() else L1(c36);
    L4():
      ccaddress11 = ld ccaddress;
      ccaddress12 = force? ccaddress11;
      checkMissing(ccaddress12);
      c35 = `is.character`(ccaddress12);
      goto L0(c35);
    L5():
      r164 = dyn base13(<sym ccaddress>);
      goto L0(r164);
    L1(c38):
      c45 = `as.logical`(c38);
      if c45 then L10() else L3();
    L6():
      sym14 = ldf nzchar;
      base14 = ldf nzchar in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L7() else L8();
    L2(c41, r167):
      c42 = `as.logical`(r167);
      c43 = `&&`(c41, c42);
      goto L1(c43);
    L3():
      invisible.0();
      return NULL;
    L7():
      ccaddress13 = ld ccaddress;
      ccaddress14 = force? ccaddress13;
      checkMissing(ccaddress14);
      nzchar5 = ldf nzchar in base;
      r168 = dyn nzchar5(ccaddress14);
      goto L2(c36, r168);
    L8():
      r166 = dyn base14(<sym ccaddress>);
      goto L2(c36, r166);
    L10():
      paste9 = ldf paste0;
      p47 = prom<V +>{
        ccaddress15 = ld ccaddress;
        ccaddress16 = force? ccaddress15;
        checkMissing(ccaddress16);
        return ccaddress16;
      };
      r170 = dyn paste9("&cc=", p47);
      return r170;
    };
    p50 = prom<V +>{
      paste10 = ldf paste;
      p49 = prom<V +>{
        body6 = ld body;
        body7 = force? body6;
        checkMissing(body7);
        return body7;
      };
      r173 = dyn paste10[, collapse](p49, "\r\n");
      return r173;
    };
    r175 = dyn paste8("mailto:", p45, "?subject=", p46, p48, "&body=", p50);
    check L228() else D95();
  D46():
    deopt 155 [c15, ccaddress5];
  D48():
    deopt 161 [];
  D50():
    deopt 173 [];
  D52():
    deopt 186 [];
  D95():
    deopt 343 [r175];
  L150():
    ccaddress6 = force? ccaddress5;
    checkMissing(ccaddress6);
    nzchar3 = ldf nzchar in base;
    r76 = dyn nzchar3(ccaddress6);
    check L151() else D47();
  L154():
    p13 = prom<V +>{
      shQuote = ldf shQuote;
      p12 = prom<V +>{
        subject3 = ld subject;
        subject4 = force? subject3;
        checkMissing(subject4);
        return subject4;
      };
      r78 = dyn shQuote(p12);
      return r78;
    };
    p15 = prom<V +>{
      shQuote1 = ldf shQuote;
      p14 = prom<V +>{
        ccaddress7 = ld ccaddress;
        ccaddress8 = force? ccaddress7;
        checkMissing(ccaddress8);
        return ccaddress8;
      };
      r81 = dyn shQuote1(p14);
      return r81;
    };
    p17 = prom<V +>{
      shQuote2 = ldf shQuote;
      p16 = prom<V +>{
        address1 = ld address;
        address2 = force? address1;
        checkMissing(address2);
        return address2;
      };
      r84 = dyn shQuote2(p16);
      return r84;
    };
    p18 = prom<V +>{
      filename5 = ld filename;
      filename6 = force? filename5;
      checkMissing(filename6);
      return filename6;
    };
    r87 = dyn paste("-s", p13, "-c", p15, p17, "<", p18, "2>/dev/null");
    check L155() else D49();
  L157():
    p20 = prom<V +>{
      shQuote3 = ldf shQuote;
      p19 = prom<V +>{
        subject5 = ld subject;
        subject6 = force? subject5;
        checkMissing(subject6);
        return subject6;
      };
      r90 = dyn shQuote3(p19);
      return r90;
    };
    p22 = prom<V +>{
      shQuote4 = ldf shQuote;
      p21 = prom<V +>{
        address3 = ld address;
        address4 = force? address3;
        checkMissing(address4);
        return address4;
      };
      r93 = dyn shQuote4(p21);
      return r93;
    };
    p23 = prom<V +>{
      filename7 = ld filename;
      filename8 = force? filename7;
      checkMissing(filename8);
      return filename8;
    };
    r96 = dyn paste1("-s", p20, p22, "<", p23, "2>/dev/null");
    check L158() else D51();
  L159():
    p25 = prom<V +>{
      paste2 = ldf paste0;
      p24 = prom<V +>{
        description3 = ld description;
        description4 = force? description3;
        checkMissing(description4);
        return description4;
      };
      r98 = dyn paste2("Email the ", p24, " now?");
      return r98;
    };
    r100 = dyn askYesNo(p25);
    check L160() else D53();
  L228():
    st arg = r175;
    system4 = ldf system2;
    check L229() else D96();
  D47():
    deopt 158 [c15, r76];
  D49():
    deopt 170 [r87];
  D51():
    deopt 180 [r96];
  D53():
    deopt 188 [r100];
  D96():
    deopt 346 [];
  L151():
    goto L40(c15, r76);
  L155():
    st cmdargs = r87;
    goto L42();
  L158():
    st cmdargs = r96;
    goto L42();
  L160():
    st answer = r100;
    isTRUE = ldf isTRUE;
    check L161() else D54();
  L229():
    p51 = prom<V +>{
      open_prog2 = ld open_prog;
      open_prog3 = force? open_prog2;
      checkMissing(open_prog3);
      return open_prog3;
    };
    p54 = prom<V +>{
      shQuote5 = ldf shQuote;
      p53 = prom<V +>{
        URLencode = ldf URLencode;
        p52 = prom<V +>{
          arg = ld arg;
          arg1 = force? arg;
          checkMissing(arg1);
          return arg1;
        };
        r178 = dyn URLencode(p52);
        return r178;
      };
      r180 = dyn shQuote5(p53);
      return r180;
    };
    r182 = dyn system4(p51, p54, FALSE, FALSE);
    check L230() else D97();
  D54():
    deopt 191 [];
  D97():
    deopt 351 [r182];
  L161():
    p26 = prom<V +>{
      answer = ld answer;
      answer1 = force? answer;
      checkMissing(answer1);
      return answer1;
    };
    r102 = dyn isTRUE(p26);
    check L162() else D55();
  L230():
    c46 = `as.logical`(r182);
    if c46 then L231() else L63();
  D55():
    deopt 193 [r102];
  L63():
    goto L64(NULL);
  L64(r186):
    goto L27();
  L162():
    c25 = `as.logical`(r102);
    if c25 then L163() else L43();
  L231():
    cat8 = ldf cat;
    check L232() else D98();
  D98():
    deopt 353 [];
  L43():
    cat5 = ldf cat;
    check L188() else D73();
  L50(r128):
    goto L27();
  L163():
    cat2 = ldf cat;
    check L164() else D56();
  L232():
    r183 = dyn cat8("opening the mailer failed, so reverting to 'mailer=\"none\"'\n");
    check L233() else D99();
  D56():
    deopt 195 [];
  D73():
    deopt 251 [];
  D99():
    deopt 355 [r183];
  L164():
    r103 = dyn cat2("Sending email ...\n");
    check L165() else D57();
  L188():
    p37 = prom<V +>{
      description7 = ld description;
      description8 = force? description7;
      checkMissing(description8);
      return description8;
    };
    p38 = prom<V +>{
      filename13 = ld filename;
      filename14 = force? filename13;
      checkMissing(filename14);
      return filename14;
    };
    r131 = dyn cat5("The unsent", p37, "can be found in file", p38, "\n");
    check L189() else D74();
  L233():
    flush_console1 = ldf `flush.console`;
    check L234() else D100();
  D57():
    deopt 197 [r103];
  D74():
    deopt 257 [r131];
  D100():
    deopt 357 [];
  L165():
    system = ldf system;
    check L166() else D58();
  L189():
    goto L50(r131);
  L234():
    r184 = dyn flush_console1();
    check L235() else D101();
  D58():
    deopt 199 [];
  D101():
    deopt 358 [r184];
  L166():
    p28 = prom<V +>{
      paste3 = ldf paste;
      p27 = prom<V +>{
        cmdargs = ld cmdargs;
        cmdargs1 = force? cmdargs;
        checkMissing(cmdargs1);
        return cmdargs1;
      };
      r105 = dyn paste3("mailx", p27);
      return r105;
    };
    r107 = dyn system(p28, <missing>, TRUE, TRUE);
    check L167() else D59();
  L235():
    none_method1 = ldf none_method;
    check L236() else D102();
  D59():
    deopt 204 [r107];
  D102():
    deopt 360 [];
  L167():
    st status = r107;
    status = ld status;
    check L168() else D60();
  L236():
    r185 = dyn none_method1();
    check L237() else D103();
  D60():
    deopt 206 [status];
  D103():
    deopt 361 [r185];
  L168():
    status1 = force? status;
    checkMissing(status1);
    c26 = `as.logical`(status1);
    if c26 then L169() else L44();
  L237():
    goto L64(r185);
  L44():
    goto L45();
  L45():
    status2 = ld status;
    check L173() else D63();
  L169():
    system1 = ldf system;
    check L170() else D61();
  D61():
    deopt 209 [];
  D63():
    deopt 218 [status2];
  L170():
    p30 = prom<V +>{
      paste4 = ldf paste;
      p29 = prom<V +>{
        cmdargs2 = ld cmdargs;
        cmdargs3 = force? cmdargs2;
        checkMissing(cmdargs3);
        return cmdargs3;
      };
      r109 = dyn paste4("Mail", p29);
      return r109;
    };
    r111 = dyn system1(p30, <missing>, TRUE, TRUE);
    check L171() else D62();
  L173():
    status3 = force? status2;
    checkMissing(status3);
    c27 = `as.logical`(status3);
    if c27 then L174() else L46();
  D62():
    deopt 214 [r111];
  L46():
    goto L47();
  L47():
    status4 = ld status;
    check L178() else D66();
  L171():
    st status = r111;
    goto L45();
  L174():
    system2 = ldf system;
    check L175() else D64();
  D64():
    deopt 221 [];
  D66():
    deopt 230 [status4];
  L175():
    p32 = prom<V +>{
      paste5 = ldf paste;
      p31 = prom<V +>{
        cmdargs4 = ld cmdargs;
        cmdargs5 = force? cmdargs4;
        checkMissing(cmdargs5);
        return cmdargs5;
      };
      r114 = dyn paste5("/usr/ucb/mail", p31);
      return r114;
    };
    r116 = dyn system2(p32, <missing>, TRUE, TRUE);
    check L176() else D65();
  L178():
    status5 = force? status4;
    checkMissing(status5);
    r118 = `==`(status5, 0);
    c28 = `as.logical`(r118);
    if c28 then L179() else L48();
  D65():
    deopt 226 [r116];
  L48():
    cat3 = ldf cat;
    check L183() else D69();
  L49(r121):
    goto L50(r121);
  L176():
    st status = r116;
    goto L47();
  L179():
    unlink = ldf unlink;
    check L180() else D67();
  D67():
    deopt 235 [];
  D69():
    deopt 239 [];
  L180():
    p33 = prom<V +>{
      filename9 = ld filename;
      filename10 = force? filename9;
      checkMissing(filename10);
      return filename10;
    };
    r120 = dyn unlink(p33);
    check L181() else D68();
  L183():
    r122 = dyn cat3("Sending email failed!\n");
    check L184() else D70();
  D68():
    deopt 237 [r120];
  D70():
    deopt 241 [r122];
  L181():
    goto L49(r120);
  L184():
    cat4 = ldf cat;
    check L185() else D71();
  D71():
    deopt 243 [];
  L185():
    p34 = prom<V +>{
      description5 = ld description;
      description6 = force? description5;
      checkMissing(description6);
      return description6;
    };
    p36 = prom<V +>{
      sQuote = ldf sQuote;
      p35 = prom<V +>{
        filename11 = ld filename;
        filename12 = force? filename11;
        checkMissing(filename12);
        return filename12;
      };
      r125 = dyn sQuote(p35);
      return r125;
    };
    r127 = dyn cat4("The unsent", p34, "can be found in file", p36, "\n");
    check L186() else D72();
  D72():
    deopt 249 [r127];
  L186():
    goto L49(r127);
  }
}
fun inner2708337952() {
  () -+> V { reg paste0:cls, reg description:*, reg description1:V, reg p:p(V +), reg description2:*, reg description3:V, reg p1:p(V +), reg address:*, reg address1:V, reg p2:p(V +), reg r3:V, reg cat:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg disclaimer:*, reg disclaimer1:V, reg body:*, reg body1:V, reg c:cls, reg r6:V, reg p3:p(V +), reg filename:*, reg filename1:V, reg p4:p(V +), reg r9:V, reg cat1:cls, reg description4:*, reg description5:V, reg p5:p(V +), reg r11:V, reg flush_console:cls, reg r12:V, reg file_edit:cls, reg filename2:*, reg filename3:V, reg p6:p(V +), reg r14:V, reg cat2:cls, reg description6:*, reg description7:V, reg p7:p(V +), reg sQuote:cls, reg filename4:*, reg filename5:V, reg p8:p(V +), reg r17:V, reg p9:p(V +), reg r19:V |
    mkenv;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      description = ld description;
      description1 = force? description;
      checkMissing(description1);
      return description1;
    };
    p1 = prom<V +>{
      description2 = ld description;
      description3 = force? description2;
      checkMissing(description3);
      return description3;
    };
    p2 = prom<V +>{
      address = ld address;
      address1 = force? address;
      checkMissing(address1);
      return address1;
    };
    r3 = dyn paste0("# Your mailer is set to \"none\",\n", "# hence we cannot send the, ", p, " directly from R.\n", "# Please copy the ", p1, " (after finishing it) to\n", "# your favorite email program and send it to\n#\n", "#       ", p2, "\n#\n", "######################################################\n", "\n\n");
    check L1() else D1();
  D1():
    deopt 15 [r3];
  L1():
    st disclaimer = r3;
    cat = ldf cat;
    check L2() else D2();
  D2():
    deopt 18 [];
  L2():
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      disclaimer = ld disclaimer;
      disclaimer1 = force? disclaimer;
      checkMissing(disclaimer1);
      body = ld body;
      body1 = force? body;
      checkMissing(body1);
      c = ldf c in base;
      r6 = dyn c(disclaimer1, body1);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym disclaimer>, <sym body>);
      goto L0(r4);
    };
    p4 = prom<V +>{
      filename = ld filename;
      filename1 = force? filename;
      checkMissing(filename1);
      return filename1;
    };
    r9 = dyn cat[, file, sep](p3, p4, "\n");
    check L3() else D3();
  D3():
    deopt 24 [r9];
  L3():
    cat1 = ldf cat;
    check L4() else D4();
  D4():
    deopt 26 [];
  L4():
    p5 = prom<V +>{
      description4 = ld description;
      description5 = force? description4;
      checkMissing(description5);
      return description5;
    };
    r11 = dyn cat1("The", p5, "is being opened for you to edit.\n");
    check L5() else D5();
  D5():
    deopt 30 [r11];
  L5():
    flush_console = ldf `flush.console`;
    check L6() else D6();
  D6():
    deopt 32 [];
  L6():
    r12 = dyn flush_console();
    check L7() else D7();
  D7():
    deopt 33 [r12];
  L7():
    file_edit = ldf `file.edit`;
    check L8() else D8();
  D8():
    deopt 35 [];
  L8():
    p6 = prom<V +>{
      filename2 = ld filename;
      filename3 = force? filename2;
      checkMissing(filename3);
      return filename3;
    };
    r14 = dyn file_edit(p6);
    check L9() else D9();
  D9():
    deopt 37 [r14];
  L9():
    cat2 = ldf cat;
    check L10() else D10();
  D10():
    deopt 39 [];
  L10():
    p7 = prom<V +>{
      description6 = ld description;
      description7 = force? description6;
      checkMissing(description7);
      return description7;
    };
    p9 = prom<V +>{
      sQuote = ldf sQuote;
      p8 = prom<V +>{
        filename4 = ld filename;
        filename5 = force? filename4;
        checkMissing(filename5);
        return filename5;
      };
      r17 = dyn sQuote(p8);
      return r17;
    };
    r19 = dyn cat2[, , , , , sep]("The unsent ", p7, " can be found in file ", p9, "\n", "");
    check L11() else D11();
  D11():
    deopt 47 [r19];
  L11():
    popenv;
    return r19;
  }
}