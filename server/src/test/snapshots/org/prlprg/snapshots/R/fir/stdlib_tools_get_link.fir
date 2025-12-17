fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3036284914;
    st get_link = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3036284914(arg, tag, Rdfile) {
  (reg arg:*, reg tag:*, reg Rdfile:*) -+> V { var arg:*, var tag:*, var Rdfile:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg RdTags:cls, reg arg1:*, reg arg2:V, reg p:p(V +), reg r3:V, reg r4:V, reg all:cls, reg r5:V, reg r6:V, reg c:L, reg stopRd:cls, reg arg3:*, reg arg4:V, reg p1:p(V +), reg Rdfile1:*, reg Rdfile2:V, reg p2:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg arg5:*, reg arg6:V, reg attr:cls, reg r13:V, reg paste:cls, reg unlist:cls, reg arg7:*, reg arg8:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg option:*, reg option1:V, reg c1:V, reg r20:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg option2:*, reg option3:V, reg attr1:cls, reg r25:V, reg identical:cls, reg r26:V, reg r27:V, reg c3:L, reg stopRd1:cls, reg option4:*, reg option5:V, reg p5:p(V +), reg Rdfile3:*, reg Rdfile4:V, reg p6:p(V +), reg r30:V, reg grepl:cls, reg option6:*, reg option7:V, reg p7:p(V +), reg r33:V, reg c4:L, reg psub1:cls, reg option8:*, reg option9:V, reg p8:p(V +), reg r35:V, reg r36:V, reg grepl1:cls, reg option10:*, reg option11:V, reg p9:p(V +), reg r38:V, reg c5:L, reg psub2:cls, reg option12:*, reg option13:V, reg p10:p(V +), reg r40:V, reg psub3:cls, reg option14:*, reg option15:V, reg p11:p(V +), reg r42:V, reg dest:*, reg dest1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg option16:*, reg option17:V, reg as_character:cls, reg r45:V, reg tag1:*, reg tag2:V, reg r47:V, reg c6:L, reg paste1:cls, reg dest2:*, reg dest3:V, reg p12:p(V +), reg r49:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg topic:*, reg topic1:V, reg dest4:*, reg dest5:V, reg pkg:*, reg pkg1:V, reg targetfile:*, reg targetfile1:V, reg list:cls, reg r53:V |
    mkenv;
    st arg = arg;
    st tag = tag;
    st Rdfile = Rdfile;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    r6 = `!`(r1);
    c = `as.logical`(r6);
    if c then L23() else L1();
  L18():
    RdTags = ldf RdTags;
    check L20() else D0();
  L19():
    r = dyn base(<lang `==`(RdTags(arg), "TEXT")>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    goto L2();
  L2():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L20():
    p = prom<V +>{
      arg1 = ld arg;
      arg2 = force? arg1;
      checkMissing(arg2);
      return arg2;
    };
    r3 = dyn RdTags(p);
    check L21() else D1();
  L23():
    stopRd = ldf stopRd;
    check L24() else D3();
  D1():
    deopt 5 [r3];
  D3():
    deopt 12 [];
  L3(r12):
    st option = r12;
    paste = ldf paste;
    check L31() else D7();
  L21():
    r4 = `==`(r3, "TEXT");
    all = ldf all in base;
    r5 = dyn all(r4);
    check L22() else D2();
  L24():
    p1 = prom<V +>{
      arg3 = ld arg;
      arg4 = force? arg3;
      checkMissing(arg4);
      return arg4;
    };
    p2 = prom<V +>{
      Rdfile1 = ld Rdfile;
      Rdfile2 = force? Rdfile1;
      checkMissing(Rdfile2);
      return Rdfile2;
    };
    r9 = dyn stopRd(p1, p2, "Bad \\link text");
    check L25() else D4();
  L27():
    arg5 = ld arg;
    check L29() else D5();
  L28():
    r11 = dyn base1(<sym arg>, "Rd_option");
    goto L3(r11);
  D2():
    deopt 9 [r5];
  D4():
    deopt 16 [r9];
  D5():
    deopt 21 [arg5];
  D7():
    deopt 28 [];
  L22():
    goto L0(r5);
  L25():
    goto L2();
  L29():
    arg6 = force? arg5;
    checkMissing(arg6);
    attr = ldf attr in base;
    r13 = dyn attr(arg6, "Rd_option");
    check L30() else D6();
  L31():
    p4 = prom<V +>{
      unlist = ldf unlist;
      p3 = prom<V +>{
        arg7 = ld arg;
        arg8 = force? arg7;
        checkMissing(arg8);
        return arg8;
      };
      r15 = dyn unlist(p3);
      return r15;
    };
    r17 = dyn paste[, collapse](p4, "");
    check L32() else D8();
  D6():
    deopt 25 [r13];
  D8():
    deopt 32 [r17];
  L30():
    goto L3(r13);
  L32():
    st dest = r17;
    st topic = r17;
    st targetfile = NULL;
    st pkg = NULL;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L4(r19):
    r20 = `!`(r19);
    c2 = `as.logical`(r20);
    if c2 then L36() else L5();
  L33():
    option = ld option;
    check L35() else D9();
  L34():
    r18 = dyn base2(<sym option>);
    goto L4(r18);
  D9():
    deopt 42 [option];
  L5():
    goto L14();
  L14():
    tag1 = ld tag;
    check L68() else D28();
  L35():
    option1 = force? option;
    checkMissing(option1);
    c1 = `==`(option1, NULL);
    goto L4(c1);
  L36():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  D28():
    deopt 125 [tag1];
  L6(r22):
    r27 = `!`(r22);
    c3 = `as.logical`(r27);
    if c3 then L44() else L8();
  L37():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L38():
    r21 = dyn base3(<lang attr(option, "Rd_tag")>, "TEXT");
    goto L6(r21);
  L68():
    tag2 = force? tag1;
    checkMissing(tag2);
    r47 = `==`(tag2, "\\linkS4class");
    c6 = `as.logical`(r47);
    if c6 then L69() else L15();
  L7(r24):
    identical = ldf identical in base;
    r26 = dyn identical(r24, "TEXT", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L43() else D12();
  L8():
    goto L9();
  L9():
    grepl = ldf grepl;
    check L48() else D15();
  L15():
    goto L16();
  L16():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L73() else L74();
  L39():
    option2 = ld option;
    check L41() else D10();
  L40():
    r23 = dyn base4(<sym option>, "Rd_tag");
    goto L7(r23);
  L44():
    stopRd1 = ldf stopRd;
    check L45() else D13();
  L69():
    paste1 = ldf paste0;
    check L70() else D29();
  D10():
    deopt 50 [option2];
  D12():
    deopt 64 [r26];
  D13():
    deopt 67 [];
  D15():
    deopt 75 [];
  D29():
    deopt 130 [];
  L17(r52):
    popenv;
    return r52;
  L41():
    option3 = force? option2;
    checkMissing(option3);
    attr1 = ldf attr in base;
    r25 = dyn attr1(option3, "Rd_tag");
    check L42() else D11();
  L43():
    goto L6(r26);
  L45():
    p5 = prom<V +>{
      option4 = ld option;
      option5 = force? option4;
      checkMissing(option5);
      return option5;
    };
    p6 = prom<V +>{
      Rdfile3 = ld Rdfile;
      Rdfile4 = force? Rdfile3;
      checkMissing(Rdfile4);
      return Rdfile4;
    };
    r30 = dyn stopRd1(p5, p6, "Bad \\link option -- must be text");
    check L46() else D14();
  L48():
    p7 = prom<V +>{
      option6 = ld option;
      option7 = force? option6;
      checkMissing(option7);
      return option7;
    };
    r33 = dyn grepl[, , perl, useBytes]("^=", p7, TRUE, TRUE);
    check L49() else D16();
  L70():
    p12 = prom<V +>{
      dest2 = ld dest;
      dest3 = force? dest2;
      checkMissing(dest3);
      return dest3;
    };
    r49 = dyn paste1(p12, "-class");
    check L71() else D30();
  L73():
    topic = ld topic;
    check L75() else D31();
  L74():
    r51 = dyn base6[topic, dest, pkg, targetfile](<sym topic>, <sym dest>, <sym pkg>, <sym targetfile>);
    goto L17(r51);
  D11():
    deopt 54 [r25];
  D14():
    deopt 71 [r30];
  D16():
    deopt 82 [r33];
  D30():
    deopt 133 [r49];
  D31():
    deopt 139 [topic];
  L42():
    goto L7(r25);
  L46():
    goto L9();
  L49():
    c4 = `as.logical`(r33);
    if c4 then L50() else L10();
  L71():
    st dest = r49;
    goto L16();
  L75():
    topic1 = force? topic;
    checkMissing(topic1);
    dest4 = ld dest;
    check L76() else D32();
  D32():
    deopt 142 [dest4];
  L10():
    grepl1 = ldf grepl;
    check L54() else D19();
  L11(r36):
    goto L14();
  L50():
    psub1 = ldf psub1;
    check L51() else D17();
  L76():
    dest5 = force? dest4;
    checkMissing(dest5);
    pkg = ld pkg;
    check L77() else D33();
  D17():
    deopt 84 [];
  D19():
    deopt 91 [];
  D33():
    deopt 145 [pkg];
  L51():
    p8 = prom<V +>{
      option8 = ld option;
      option9 = force? option8;
      checkMissing(option9);
      return option9;
    };
    r35 = dyn psub1("^=", "", p8);
    check L52() else D18();
  L54():
    p9 = prom<V +>{
      option10 = ld option;
      option11 = force? option10;
      checkMissing(option11);
      return option11;
    };
    r38 = dyn grepl1[, , perl, useBytes](":", p9, TRUE, TRUE);
    check L55() else D20();
  L77():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    targetfile = ld targetfile;
    check L78() else D34();
  D18():
    deopt 88 [r35];
  D20():
    deopt 98 [r38];
  D34():
    deopt 148 [targetfile];
  L52():
    st dest = r35;
    goto L11(r35);
  L55():
    c5 = `as.logical`(r38);
    if c5 then L56() else L12();
  L78():
    targetfile1 = force? targetfile;
    checkMissing(targetfile1);
    list = ldf list in base;
    r53 = dyn list(topic1, dest5, pkg1, targetfile1);
    check L79() else D35();
  D35():
    deopt 152 [r53];
  L12():
    dest = ld dest;
    check L62() else D25();
  L56():
    psub2 = ldf psub1;
    check L57() else D21();
  L79():
    goto L17(r53);
  D21():
    deopt 100 [];
  D25():
    deopt 113 [dest];
  L57():
    p10 = prom<V +>{
      option12 = ld option;
      option13 = force? option12;
      checkMissing(option13);
      return option13;
    };
    r40 = dyn psub2("^[^:]*:", "", p10);
    check L58() else D22();
  L62():
    dest1 = force? dest;
    checkMissing(dest1);
    st targetfile = dest1;
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  D22():
    deopt 104 [r40];
  L13(r44):
    st pkg = r44;
    goto L11(r44);
  L58():
    st targetfile = r40;
    psub3 = ldf psub1;
    check L59() else D23();
  L63():
    option16 = ld option;
    check L65() else D26();
  L64():
    r43 = dyn base5(<sym option>);
    goto L13(r43);
  D23():
    deopt 107 [];
  D26():
    deopt 118 [option16];
  L59():
    p11 = prom<V +>{
      option14 = ld option;
      option15 = force? option14;
      checkMissing(option15);
      return option15;
    };
    r42 = dyn psub3(":.*", "", p11);
    check L60() else D24();
  L65():
    option17 = force? option16;
    checkMissing(option17);
    as_character = ldf `as.character` in base;
    r45 = dyn as_character(option17);
    check L66() else D27();
  D24():
    deopt 111 [r42];
  D27():
    deopt 121 [r45];
  L60():
    st pkg = r42;
    goto L11(r42);
  L66():
    goto L13(r45);
  }
}