fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner159892913;
    st createRedirects = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner159892913(file, Rdobj) {
  (reg file:*, reg Rdobj:*) -+> V { var file:*, var Rdobj:*, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r:V, reg p:p(V +), reg r2:V, reg linksToTopics:*, reg linksToTopics1:V, reg r3:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg invisible:cls, reg r6:V, reg sprintf:cls, reg urlify:cls, reg basename:cls, reg file1:*, reg file2:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg which:cls, reg RdTags:cls, reg Rdobj1:*, reg Rdobj2:V, reg p4:p(V +), reg r16:V, reg r17:V, reg p5:p(V +), reg r19:V, reg paste0:cls, reg dirname:cls, reg dirname1:cls, reg file3:*, reg file4:V, reg p6:p(V +), reg r21:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:V, reg r26:cls, reg r27:cls, reg r28:cls, reg vapply:cls, reg toProcess:*, reg toProcess1:V, reg p9:p(V +), reg aliasName:*, reg aliasName1:V, reg p10:p(V +), reg r31:V, reg toProcess2:*, reg toProcess3:V, reg c1:L, reg toProcess5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg duplicated:cls, reg aliasesToProcess:*, reg aliasesToProcess1:V, reg p11:p(V +), reg r33:V, reg r34:V, reg __:cls, reg r35:V, reg toProcess6:*, reg toProcess7:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg aliasName2:cls, reg i5:*, reg i6:V, reg p12:p(V +), reg r37:V, reg aliasFile:cls, reg i7:*, reg i8:V, reg p13:p(V +), reg r39:V, reg file_exists:cls, reg afile:*, reg afile1:V, reg p14:p(V +), reg r41:V, reg c3:L, reg sprintf1:cls, reg afile2:*, reg afile3:V, reg p15:p(V +), reg r43:V, reg message:cls, reg msg:*, reg msg1:V, reg p16:p(V +), reg r45:V, reg i11:I, reg try:cls, reg suppressWarnings:cls, reg cat:cls, reg redirHTML:*, reg redirHTML1:V, reg p17:p(V +), reg afile4:*, reg afile5:V, reg p18:p(V +), reg r49:V, reg p19:p(V +), reg r51:V, reg p20:p(V +), reg r53:V, reg file_exists1:cls, reg afile6:*, reg afile7:V, reg p21:p(V +), reg r55:V, reg r56:V, reg c4:L, reg redirMsg:cls, reg aname:*, reg aname1:V, reg p22:p(V +), reg basename1:cls, reg file5:*, reg file6:V, reg p23:p(V +), reg r59:V, reg p24:p(V +), reg r61:V, reg i14:I, reg file_path:cls, reg helpdir:*, reg helpdir1:V, reg p25:p(V +), reg basename2:cls, reg file7:*, reg file8:V, reg p26:p(V +), reg r65:V, reg p27:p(V +), reg r67:V, reg file_exists2:cls, reg file_fallback:*, reg file_fallback1:V, reg p28:p(V +), reg r69:V, reg r70:V, reg c5:L, reg try1:cls, reg cat1:cls, reg redirHTML2:*, reg redirHTML3:V, reg p29:p(V +), reg file_fallback2:*, reg file_fallback3:V, reg p30:p(V +), reg r73:V, reg p31:p(V +), reg r75:V, reg file_exists3:cls, reg file_fallback4:*, reg file_fallback5:V, reg p32:p(V +), reg r77:V, reg r78:V, reg c6:L, reg redirMsg1:cls, reg basename3:cls, reg file9:*, reg file10:V, reg p33:p(V +), reg r80:V, reg p34:p(V +), reg basename4:cls, reg file11:*, reg file12:V, reg p35:p(V +), reg r83:V, reg p36:p(V +), reg r85:V |
    mkenv;
    st file = file;
    st Rdobj = Rdobj;
    config_val_to_logical = ldf config_val_to_logical;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r = dyn Sys_getenv("_R_HELP_LINKS_TO_TOPICS_", "TRUE");
      return r;
    };
    r2 = dyn config_val_to_logical(p);
    check L13() else D1();
  D1():
    deopt 3 [r2];
  L13():
    st linksToTopics = r2;
    linksToTopics = ld linksToTopics;
    check L14() else D2();
  D2():
    deopt 5 [linksToTopics];
  L14():
    linksToTopics1 = force? linksToTopics;
    checkMissing(linksToTopics1);
    r3 = `!`(linksToTopics1);
    c = `as.logical`(r3);
    if c then L15() else L0();
  L0():
    sprintf = ldf sprintf;
    check L21() else D4();
  L15():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  D4():
    deopt 16 [];
  L1(r5):
    popenv;
    return r5;
  L16():
    invisible = ldf invisible in base;
    r6 = dyn invisible();
    check L18() else D3();
  L17():
    r4 = dyn base();
    goto L1(r4);
  L21():
    p3 = prom<V +>{
      urlify = ldf urlify;
      p2 = prom<V +>{
        basename = ldf basename;
        p1 = prom<V +>{
          file1 = ld file;
          file2 = force? file1;
          checkMissing(file2);
          return file2;
        };
        r10 = dyn basename(p1);
        return r10;
      };
      r12 = dyn urlify[, reserved](p2, TRUE);
      return r12;
    };
    r14 = dyn sprintf("<!DOCTYPE html>\n<html><head><meta http-equiv='refresh' content='0; url=../html/%s'><title>HTTP redirect</title></head><body></body></html>\n", p3);
    check L22() else D5();
  D3():
    deopt 11 [r6];
  D5():
    deopt 19 [r14];
  L18():
    goto L1(r6);
  L22():
    st redirHTML = r14;
    which = ldf which;
    check L23() else D6();
  D6():
    deopt 22 [];
  L23():
    p5 = prom<V +>{
      RdTags = ldf RdTags;
      p4 = prom<V +>{
        Rdobj1 = ld Rdobj;
        Rdobj2 = force? Rdobj1;
        checkMissing(Rdobj2);
        return Rdobj2;
      };
      r16 = dyn RdTags(p4);
      r17 = `==`(r16, "\\alias");
      return r17;
    };
    r19 = dyn which(p5);
    check L24() else D7();
  D7():
    deopt 24 [r19];
  L24():
    st toProcess = r19;
    paste0 = ldf paste0;
    check L25() else D8();
  D8():
    deopt 27 [];
  L25():
    p8 = prom<V +>{
      dirname = ldf dirname;
      p7 = prom<V +>{
        dirname1 = ldf dirname;
        p6 = prom<V +>{
          file3 = ld file;
          file4 = force? file3;
          checkMissing(file4);
          return file4;
        };
        r21 = dyn dirname1(p6);
        return r21;
      };
      r23 = dyn dirname(p7);
      return r23;
    };
    r25 = dyn paste0(p8, "/help");
    check L26() else D9();
  D9():
    deopt 30 [r25];
  L26():
    st helpdir = r25;
    r26 = clos inner3002224933;
    st aliasName = r26;
    r27 = clos inner3002224933;
    st aliasFile = r27;
    r28 = clos inner2975076206;
    st redirMsg = r28;
    vapply = ldf vapply;
    check L27() else D10();
  D10():
    deopt 42 [];
  L27():
    p9 = prom<V +>{
      toProcess = ld toProcess;
      toProcess1 = force? toProcess;
      checkMissing(toProcess1);
      return toProcess1;
    };
    p10 = prom<V +>{
      aliasName = ld aliasName;
      aliasName1 = force? aliasName;
      checkMissing(aliasName1);
      return aliasName1;
    };
    r31 = dyn vapply(p9, p10, "");
    check L28() else D11();
  D11():
    deopt 46 [r31];
  L28():
    st aliasesToProcess = r31;
    toProcess2 = ld toProcess;
    check L29() else D12();
  D12():
    deopt 48 [toProcess2];
  L29():
    toProcess3 = force? toProcess2;
    checkMissing(toProcess3);
    c1 = `is.object`(toProcess3);
    if c1 then L30() else L31(toProcess3);
  L3(dx1):
    st toProcess = dx1;
    toProcess6 = ld toProcess;
    check L35() else D15();
  L30():
    dr = tryDispatchBuiltin.1("[", toProcess3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(toProcess5):
    duplicated = ldf duplicated;
    check L33() else D13();
  D13():
    deopt 51 [toProcess5];
  D15():
    deopt 57 [toProcess6];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L33():
    p11 = prom<V +>{
      aliasesToProcess = ld aliasesToProcess;
      aliasesToProcess1 = force? aliasesToProcess;
      checkMissing(aliasesToProcess1);
      return aliasesToProcess1;
    };
    r33 = dyn duplicated(p11);
    check L34() else D14();
  L35():
    toProcess7 = force? toProcess6;
    checkMissing(toProcess7);
    s = toForSeq(toProcess7);
    l = length(s);
    i = 0;
    goto L4(i);
  D14():
    deopt 53 [toProcess5, r33];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L36() else L9();
  L34():
    r34 = `!`(r33);
    __ = ldf `[` in base;
    r35 = dyn __(toProcess5, r34);
    goto L3(r35);
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    aliasName2 = ldf aliasName;
    check L37() else D16();
  L36():
    file_path = ldf `file.path`;
    check L57() else D32();
  D16():
    deopt 60 [i2];
  D32():
    deopt 111 [];
  L37():
    p12 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r37 = dyn aliasName2(p12);
    check L38() else D17();
  L57():
    p25 = prom<V +>{
      helpdir = ld helpdir;
      helpdir1 = force? helpdir;
      checkMissing(helpdir1);
      return helpdir1;
    };
    p27 = prom<V +>{
      basename2 = ldf basename;
      p26 = prom<V +>{
        file7 = ld file;
        file8 = force? file7;
        checkMissing(file8);
        return file8;
      };
      r65 = dyn basename2(p26);
      return r65;
    };
    r67 = dyn file_path(p25, p27);
    check L58() else D33();
  D17():
    deopt 62 [i2, r37];
  D33():
    deopt 114 [r67];
  L38():
    st aname = r37;
    aliasFile = ldf aliasFile;
    check L39() else D18();
  L58():
    st `file.fallback` = r67;
    file_exists2 = ldf `file.exists`;
    check L59() else D34();
  D18():
    deopt 65 [i2];
  D34():
    deopt 117 [];
  L39():
    p13 = prom<V +>{
      i7 = ld i;
      i8 = force? i7;
      checkMissing(i8);
      return i8;
    };
    r39 = dyn aliasFile(p13);
    check L40() else D19();
  L59():
    p28 = prom<V +>{
      file_fallback = ld `file.fallback`;
      file_fallback1 = force? file_fallback;
      checkMissing(file_fallback1);
      return file_fallback1;
    };
    r69 = dyn file_exists2(p28);
    check L60() else D35();
  D19():
    deopt 67 [i2, r39];
  D35():
    deopt 119 [r69];
  L40():
    st afile = r39;
    file_exists = ldf `file.exists`;
    check L41() else D20();
  L60():
    r70 = `!`(r69);
    c5 = `as.logical`(r70);
    if c5 then L61() else L10();
  D20():
    deopt 70 [i2];
  L10():
    invisible.0();
    popenv;
    return NULL;
  L41():
    p14 = prom<V +>{
      afile = ld afile;
      afile1 = force? afile;
      checkMissing(afile1);
      return afile1;
    };
    r41 = dyn file_exists(p14);
    check L42() else D21();
  L61():
    try1 = ldf try;
    check L62() else D36();
  D21():
    deopt 72 [i2, r41];
  D36():
    deopt 122 [];
  L42():
    c3 = `as.logical`(r41);
    if c3 then L43() else L5();
  L62():
    p31 = prom<V +>{
      cat1 = ldf cat;
      p29 = prom<V +>{
        redirHTML2 = ld redirHTML;
        redirHTML3 = force? redirHTML2;
        checkMissing(redirHTML3);
        return redirHTML3;
      };
      p30 = prom<V +>{
        file_fallback2 = ld `file.fallback`;
        file_fallback3 = force? file_fallback2;
        checkMissing(file_fallback3);
        return file_fallback3;
      };
      r73 = dyn cat1[, file](p29, p30);
      return r73;
    };
    r75 = dyn try1[, silent](p31, TRUE);
    check L63() else D37();
  D37():
    deopt 126 [r75];
  L5():
    goto L6(i2);
  L6(i11):
    try = ldf try;
    check L49() else D26();
  L43():
    sprintf1 = ldf sprintf;
    check L44() else D22();
  L63():
    file_exists3 = ldf `file.exists`;
    check L64() else D38();
  D22():
    deopt 74 [i2];
  D26():
    deopt 88 [i11];
  D38():
    deopt 128 [];
  L44():
    p15 = prom<V +>{
      afile2 = ld afile;
      afile3 = force? afile2;
      checkMissing(afile3);
      return afile3;
    };
    r43 = dyn sprintf1("\nREDIRECT:topic\t Previous alias or file overwritten by alias: %s", p15);
    check L45() else D23();
  L49():
    p20 = prom<V +>{
      suppressWarnings = ldf suppressWarnings;
      p19 = prom<V +>{
        cat = ldf cat;
        p17 = prom<V +>{
          redirHTML = ld redirHTML;
          redirHTML1 = force? redirHTML;
          checkMissing(redirHTML1);
          return redirHTML1;
        };
        p18 = prom<V +>{
          afile4 = ld afile;
          afile5 = force? afile4;
          checkMissing(afile5);
          return afile5;
        };
        r49 = dyn cat[, file](p17, p18);
        return r49;
      };
      r51 = dyn suppressWarnings(p19);
      return r51;
    };
    r53 = dyn try[, silent](p20, TRUE);
    check L50() else D27();
  L64():
    p32 = prom<V +>{
      file_fallback4 = ld `file.fallback`;
      file_fallback5 = force? file_fallback4;
      checkMissing(file_fallback5);
      return file_fallback5;
    };
    r77 = dyn file_exists3(p32);
    check L65() else D39();
  D23():
    deopt 77 [i2, r43];
  D27():
    deopt 92 [i11, r53];
  D39():
    deopt 130 [r77];
  L45():
    st msg = r43;
    message = ldf message;
    check L46() else D24();
  L50():
    file_exists1 = ldf `file.exists`;
    check L51() else D28();
  L65():
    r78 = `!`(r77);
    c6 = `as.logical`(r78);
    if c6 then L66() else L11();
  D24():
    deopt 80 [i2];
  D28():
    deopt 94 [i11];
  L11():
    invisible.0();
    popenv;
    return NULL;
  L46():
    p16 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r45 = dyn message[, appendLF](p16, FALSE);
    check L47() else D25();
  L51():
    p21 = prom<V +>{
      afile6 = ld afile;
      afile7 = force? afile6;
      checkMissing(afile7);
      return afile7;
    };
    r55 = dyn file_exists1(p21);
    check L52() else D29();
  L66():
    redirMsg1 = ldf redirMsg;
    check L67() else D40();
  D25():
    deopt 84 [i2, r45];
  D29():
    deopt 96 [i11, r55];
  D40():
    deopt 133 [];
  L47():
    goto L6(i2);
  L52():
    r56 = `!`(r55);
    c4 = `as.logical`(r56);
    if c4 then L53() else L7();
  L67():
    p34 = prom<V +>{
      basename3 = ldf basename;
      p33 = prom<V +>{
        file9 = ld file;
        file10 = force? file9;
        checkMissing(file10);
        return file10;
      };
      r80 = dyn basename3(p33);
      return r80;
    };
    p36 = prom<V +>{
      basename4 = ldf basename;
      p35 = prom<V +>{
        file11 = ld file;
        file12 = force? file11;
        checkMissing(file12);
        return file12;
      };
      r83 = dyn basename4(p35);
      return r83;
    };
    r85 = dyn redirMsg1("file", p34, p36, "FAILURE");
    check L68() else D41();
  D41():
    deopt 138 [r85];
  L7():
    goto L8(i11);
  L8(i14):
    goto L4(i14);
  L53():
    redirMsg = ldf redirMsg;
    check L54() else D30();
  L68():
    popenv;
    return r85;
  D30():
    deopt 99 [i11];
  L54():
    p22 = prom<V +>{
      aname = ld aname;
      aname1 = force? aname;
      checkMissing(aname1);
      return aname1;
    };
    p24 = prom<V +>{
      basename1 = ldf basename;
      p23 = prom<V +>{
        file5 = ld file;
        file6 = force? file5;
        checkMissing(file6);
        return file6;
      };
      r59 = dyn basename1(p23);
      return r59;
    };
    r61 = dyn redirMsg("topic", p22, p24, "FAILURE");
    check L55() else D31();
  D31():
    deopt 104 [i11, r61];
  L55():
    goto L8(i11);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg trimws:cls, reg Rdobj:*, reg Rdobj1:V, reg c:L, reg Rdobj3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    st i = i;
    trimws = ldf trimws;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      Rdobj = ld Rdobj;
      Rdobj1 = force? Rdobj;
      checkMissing(Rdobj1);
      c = `is.object`(Rdobj1);
      if c then L2() else L3(Rdobj1);
    L0(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("[[", Rdobj1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(Rdobj3):
      i1 = ld i;
      i2 = force? i1;
      __ = ldf `[[` in base;
      r = dyn __(Rdobj3, i2);
      goto L0(r);
    L1(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      __1 = ldf `[[` in base;
      r1 = dyn __1(dx3, 1.0);
      goto L1(r1);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx4);
    };
    r3 = dyn trimws(p);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner2975076206(type, src, dest, status) {
  (reg type:*, reg src:*, reg dest:*, reg status:*) -+> V { var type:*, var src:*, var dest:*, var status:*, reg sprintf:cls, reg type1:*, reg type2:V, reg p:p(V +), reg src1:*, reg src2:V, reg p1:p(V +), reg dest1:*, reg dest2:V, reg p2:p(V +), reg status1:*, reg status2:V, reg p3:p(V +), reg r4:V, reg message:cls, reg msg:*, reg msg1:V, reg p4:p(V +), reg r6:V |
    mkenv;
    st type = type;
    st src = src;
    st dest = dest;
    st status = status;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p1 = prom<V +>{
      src1 = ld src;
      src2 = force? src1;
      checkMissing(src2);
      return src2;
    };
    p2 = prom<V +>{
      dest1 = ld dest;
      dest2 = force? dest1;
      checkMissing(dest2);
      return dest2;
    };
    p3 = prom<V +>{
      status1 = ld status;
      status2 = force? status1;
      checkMissing(status2);
      return status2;
    };
    r4 = dyn sprintf("\nREDIRECT:%s\t %s -> %s [ %s ]", p, p1, p2, p3);
    check L1() else D1();
  D1():
    deopt 7 [r4];
  L1():
    st msg = r4;
    message = ldf message;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p4 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r6 = dyn message[, appendLF](p4, FALSE);
    check L3() else D3();
  D3():
    deopt 14 [r6];
  L3():
    popenv;
    return r6;
  }
}