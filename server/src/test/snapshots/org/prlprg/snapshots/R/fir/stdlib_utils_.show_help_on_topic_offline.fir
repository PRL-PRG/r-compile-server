fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner592082630;
    st `.show_help_on_topic_offline` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner592082630(file, topic, type, texinputs) {
  (reg file:*, reg topic:*, reg type:*, reg texinputs:*) -+> V { var file:*, var topic:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var texinputs:*, reg texinputs_isMissing:L, reg texinputs_orDefault:*, reg readLines:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg grep:cls, reg encpatt:*, reg encpatt1:V, reg p1:p(V +), reg lines:*, reg lines1:V, reg p2:p(V +), reg r6:V, reg length:cls, reg r7:V, reg c:L, reg sub:cls, reg encpatt2:*, reg encpatt3:V, reg p3:p(V +), reg lines2:*, reg lines3:V, reg c1:L, reg lines5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg res:*, reg res1:V, reg __:cls, reg r9:V, reg p4:p(V +), reg r11:V, reg paste0:cls, reg topic1:*, reg topic2:V, reg p5:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg on_exit:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg Sys_getenv:cls, reg r20:V, reg nzchar:cls, reg r21:V, reg c2:L, reg opt:*, reg opt1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg grepl:cls, reg lines6:*, reg lines7:V, reg p6:p(V +), reg r25:V, reg any:cls, reg r26:V, reg cat:cls, reg getOption:cls, reg r27:V, reg p7:p(V +), reg opt3:*, reg opt4:V, reg p8:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg encoding:*, reg encoding1:V, reg nzchar1:cls, reg r32:V, reg c3:L, reg sprintf:cls, reg encoding2:*, reg encoding3:V, reg p9:p(V +), reg r34:V, reg p10:p(V +), reg texfile:*, reg texfile1:V, reg p11:p(V +), reg r37:V, reg file_append:cls, reg texfile2:*, reg texfile3:V, reg p12:p(V +), reg file3:*, reg file4:V, reg p13:p(V +), reg r40:V, reg cat1:cls, reg texfile4:*, reg texfile5:V, reg p14:p(V +), reg r42:V, reg exists:cls, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p15:p(V +), reg r44:V, reg c4:L, reg get:cls, reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg p16:p(V +), reg r46:V, reg r47:V, reg offline_help_helper:*, reg offline_help_helper1:V, reg has_figure:*, reg has_figure1:V, reg c5:L, reg helper:cls, reg texfile6:*, reg texfile7:V, reg p17:p(V +), reg type1:*, reg type2:V, reg p18:p(V +), reg texinputs1:*, reg texinputs2:V, reg p19:p(V +), reg r51:V, reg helper1:cls, reg texfile8:*, reg texfile9:V, reg p20:p(V +), reg type3:*, reg type4:V, reg p21:p(V +), reg r55:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r56:V, reg r57:V, reg invisible:cls, reg r58:V |
    mkenv;
    st file = file;
    st topic = topic;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("pdf") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    texinputs_isMissing = missing.0(texinputs);
    if texinputs_isMissing then L1(NULL) else L1(texinputs);
  L1(texinputs_orDefault):
    st texinputs = texinputs_orDefault;
    st encoding = "";
    readLines = ldf readLines;
    check L15() else D0();
  D0():
    deopt 4 [];
  L15():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r1 = dyn readLines(p);
    check L16() else D1();
  D1():
    deopt 6 [r1];
  L16():
    st lines = r1;
    st encpatt = "^\\\\inputencoding\\{(.*)\\}$";
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L2(r3):
    c = `as.logical`(r3);
    if c then L22() else L3();
  L17():
    grep = ldf grep;
    check L19() else D2();
  L18():
    r2 = dyn base(<lang `<-`(res, grep(encpatt, lines, perl=TRUE, useBytes=TRUE))>);
    goto L2(r2);
  D2():
    deopt 14 [];
  L3():
    goto L4();
  L4():
    paste0 = ldf paste0;
    check L26() else D7();
  L19():
    p1 = prom<V +>{
      encpatt = ld encpatt;
      encpatt1 = force? encpatt;
      checkMissing(encpatt1);
      return encpatt1;
    };
    p2 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r6 = dyn grep[, , perl, useBytes](p1, p2, TRUE, TRUE);
    check L20() else D3();
  L22():
    sub = ldf sub;
    check L23() else D5();
  D3():
    deopt 21 [r6];
  D5():
    deopt 26 [];
  D7():
    deopt 39 [];
  L20():
    st res = r6;
    length = ldf length in base;
    r7 = dyn length(r6);
    check L21() else D4();
  L23():
    p3 = prom<V +>{
      encpatt2 = ld encpatt;
      encpatt3 = force? encpatt2;
      checkMissing(encpatt3);
      return encpatt3;
    };
    p4 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c1 = `is.object`(lines3);
      if c1 then L1() else L2(lines3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", lines3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lines5):
      res = ld res;
      res1 = force? res;
      __ = ldf `[` in base;
      r9 = dyn __(lines5, res1);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r11 = dyn sub[, , , perl, useBytes](p3, "\\1", p4, TRUE, TRUE);
    check L24() else D6();
  L26():
    p5 = prom<V +>{
      topic1 = ld topic;
      topic2 = force? topic1;
      checkMissing(topic2);
      return topic2;
    };
    r14 = dyn paste0(p5, ".tex");
    check L27() else D8();
  D4():
    deopt 24 [r7];
  D6():
    deopt 34 [r11];
  D8():
    deopt 42 [r14];
  L21():
    goto L2(r7);
  L24():
    st encoding = r11;
    goto L4();
  L27():
    st texfile = r14;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L5():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L28():
    on_exit = ldf `on.exit` in base;
    r17 = dyn on_exit(<lang unlink(texfile)>);
    goto L5();
  L29():
    r15 = dyn base1(<lang unlink(texfile)>);
    goto L5();
  L6(r19):
    c2 = `as.logical`(r19);
    if c2 then L35() else L7();
  L30():
    Sys_getenv = ldf `Sys.getenv`;
    check L32() else D9();
  L31():
    r18 = dyn base2(<lang `<-`(opt, Sys.getenv("R_RD4PDF"))>);
    goto L6(r18);
  D9():
    deopt 50 [];
  L7():
    goto L8();
  L8():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L32():
    r20 = dyn Sys_getenv("R_RD4PDF");
    check L33() else D10();
  L35():
    opt = ld opt;
    check L36() else D12();
  D10():
    deopt 52 [r20];
  D12():
    deopt 56 [opt];
  L9(r23):
    st has_figure = r23;
    cat = ldf cat;
    check L43() else D16();
  L33():
    st opt = r20;
    nzchar = ldf nzchar in base;
    r21 = dyn nzchar(r20);
    check L34() else D11();
  L36():
    opt1 = force? opt;
    checkMissing(opt1);
    goto L8();
  L38():
    grepl = ldf grepl;
    check L40() else D13();
  L39():
    r22 = dyn base3(<lang grepl("\\Figure", lines)>);
    goto L9(r22);
  D11():
    deopt 55 [r21];
  D13():
    deopt 63 [];
  D16():
    deopt 71 [];
  L34():
    goto L6(r21);
  L40():
    p6 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    r25 = dyn grepl("\\Figure", p6);
    check L41() else D14();
  L43():
    p7 = prom<V +>{
      getOption = ldf getOption;
      r27 = dyn getOption("papersize");
      return r27;
    };
    p8 = prom<V +>{
      opt3 = ld opt;
      opt4 = force? opt3;
      checkMissing(opt4);
      return opt4;
    };
    p10 = prom<V +>{
      sym4 = ldf nzchar;
      base4 = ldf nzchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r31):
      c3 = `as.logical`(r31);
      if c3 then L4() else L1();
    L2():
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      nzchar1 = ldf nzchar in base;
      r32 = dyn nzchar1(encoding1);
      goto L0(r32);
    L3():
      r30 = dyn base4(<sym encoding>);
      goto L0(r30);
    L1():
      invisible.0();
      return NULL;
    L4():
      sprintf = ldf sprintf;
      p9 = prom<V +>{
        encoding2 = ld encoding;
        encoding3 = force? encoding2;
        checkMissing(encoding3);
        return encoding3;
      };
      r34 = dyn sprintf("\\usepackage[%s]{inputenc}\n", p9);
      return r34;
    };
    p11 = prom<V +>{
      texfile = ld texfile;
      texfile1 = force? texfile;
      checkMissing(texfile1);
      return texfile1;
    };
    r37 = dyn cat[, , , , , , , , , , file, sep]("\\documentclass[", p7, "paper]{article}\n", "\\usepackage[", p8, "]{Rd}\n", p10, "\\InputIfFileExists{Rhelp.cfg}{}{}\n", "\\usepackage{graphicx}\n", "\\begin{document}\n", p11, "");
    check L44() else D17();
  D14():
    deopt 66 [r25];
  D17():
    deopt 86 [r37];
  L41():
    any = ldf any in base;
    r26 = dyn any(r25);
    check L42() else D15();
  L44():
    file_append = ldf `file.append`;
    check L45() else D18();
  D15():
    deopt 68 [r26];
  D18():
    deopt 88 [];
  L42():
    goto L9(r26);
  L45():
    p12 = prom<V +>{
      texfile2 = ld texfile;
      texfile3 = force? texfile2;
      checkMissing(texfile3);
      return texfile3;
    };
    p13 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r40 = dyn file_append(p12, p13);
    check L46() else D19();
  D19():
    deopt 91 [r40];
  L46():
    cat1 = ldf cat;
    check L47() else D20();
  D20():
    deopt 93 [];
  L47():
    p14 = prom<V +>{
      texfile4 = ld texfile;
      texfile5 = force? texfile4;
      checkMissing(texfile5);
      return texfile5;
    };
    r42 = dyn cat1[, file, append]("\\end{document}\n", p14, TRUE);
    check L48() else D21();
  D21():
    deopt 99 [r42];
  L48():
    exists = ldf exists;
    check L49() else D22();
  D22():
    deopt 101 [];
  L49():
    p15 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r44 = dyn exists[, envir]("offline_help_helper", p15);
    check L50() else D23();
  D23():
    deopt 105 [r44];
  L50():
    c4 = `as.logical`(r44);
    if c4 then L51() else L10();
  L10():
    offline_help_helper = ld offline_help_helper;
    check L55() else D26();
  L11(r47):
    st helper = r47;
    has_figure = ld has_figure;
    check L56() else D27();
  L51():
    get = ldf get;
    check L52() else D24();
  D24():
    deopt 107 [];
  D26():
    deopt 112 [offline_help_helper];
  D27():
    deopt 115 [has_figure];
  L52():
    p16 = prom<V +>{
      _GlobalEnv2 = ld `.GlobalEnv`;
      _GlobalEnv3 = force? _GlobalEnv2;
      checkMissing(_GlobalEnv3);
      return _GlobalEnv3;
    };
    r46 = dyn get[, envir]("offline_help_helper", p16);
    check L53() else D25();
  L55():
    offline_help_helper1 = force? offline_help_helper;
    checkMissing(offline_help_helper1);
    goto L11(offline_help_helper1);
  L56():
    has_figure1 = force? has_figure;
    checkMissing(has_figure1);
    c5 = `as.logical`(has_figure1);
    if c5 then L57() else L12();
  D25():
    deopt 111 [r46];
  L12():
    helper1 = ldf helper;
    check L61() else D30();
  L13():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L53():
    goto L11(r46);
  L57():
    helper = ldf helper;
    check L58() else D28();
  D28():
    deopt 118 [];
  D30():
    deopt 124 [];
  L14(r57):
    popenv;
    return r57;
  L58():
    p17 = prom<V +>{
      texfile6 = ld texfile;
      texfile7 = force? texfile6;
      checkMissing(texfile7);
      return texfile7;
    };
    p18 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p19 = prom<V +>{
      texinputs1 = ld texinputs;
      texinputs2 = force? texinputs1;
      checkMissing(texinputs2);
      return texinputs2;
    };
    r51 = dyn helper(p17, p18, p19);
    check L59() else D29();
  L61():
    p20 = prom<V +>{
      texfile8 = ld texfile;
      texfile9 = force? texfile8;
      checkMissing(texfile9);
      return texfile9;
    };
    p21 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    r55 = dyn helper1(p20, p21);
    check L62() else D31();
  L63():
    invisible = ldf invisible in base;
    r58 = dyn invisible();
    check L65() else D32();
  L64():
    r56 = dyn base5();
    goto L14(r56);
  D29():
    deopt 122 [r51];
  D31():
    deopt 127 [r55];
  D32():
    deopt 131 [r58];
  L59():
    goto L13();
  L62():
    goto L13();
  L65():
    goto L14(r58);
  }
}