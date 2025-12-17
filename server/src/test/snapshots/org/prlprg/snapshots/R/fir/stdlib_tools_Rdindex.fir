fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1844020313;
    st Rdindex = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1844020313(RdFiles, outFile, type, width, indent) {
  (reg RdFiles:*, reg outFile:*, reg type:*, reg width:*, reg indent:*) -+> V { var RdFiles:*, var outFile:*, reg outFile_isMissing:L, reg outFile_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, reg getOption:cls, reg r:V, reg r1:V, reg p:p(V +), var indent:*, reg indent_isMissing:L, reg indent_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg RdFiles1:*, reg RdFiles2:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg c2:V, reg dir_exists:cls, reg RdFiles3:*, reg RdFiles4:V, reg p1:p(V +), reg r8:V, reg c3:L, reg c4:V, reg c6:L, reg RdFiles5:*, reg RdFiles6:V, reg dir_exists1:cls, reg file_path:cls, reg docsDir:*, reg docsDir1:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg c7:L, reg file_path1:cls, reg docsDir2:*, reg docsDir3:V, reg p4:p(V +), reg r14:V, reg list_files_with_type:cls, reg docsDir4:*, reg docsDir5:V, reg p5:p(V +), reg r17:V, reg outFile1:*, reg outFile2:V, reg r19:V, reg c8:L, reg stdout:cls, reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg outFile3:*, reg outFile4:V, reg c9:L, reg c10:L, reg file:cls, reg outFile5:*, reg outFile6:V, reg p6:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg on_exit:cls, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg outFile7:*, reg outFile8:V, reg inherits:cls, reg r31:V, reg r32:V, reg c11:L, reg stop:cls, reg r33:V, reg _build_Rd_db:cls, reg RdFiles7:*, reg RdFiles8:V, reg p7:p(V +), reg r36:V, reg _build_Rd_index:cls, reg Rd_contents:cls, reg db:*, reg db1:V, reg p8:p(V +), reg r38:V, reg p9:p(V +), reg type1:*, reg type2:V, reg p10:p(V +), reg r41:V, reg writeLines:cls, reg formatDL:cls, reg index:*, reg index1:V, reg p11:p(V +), reg width1:*, reg width2:V, reg p12:p(V +), reg indent1:*, reg indent2:V, reg p13:p(V +), reg r45:V, reg p14:p(V +), reg outFile9:*, reg outFile10:V, reg p15:p(V +), reg r48:V |
    mkenv;
    st RdFiles = RdFiles;
    outFile_isMissing = missing.0(outFile);
    if outFile_isMissing then L0("") else L0(outFile);
  L0(outFile_orDefault):
    st outFile = outFile_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1(NULL) else L1(type);
  L1(type_orDefault):
    st type = type_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L2() else L3(width);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("width");
      r1 = `*`(0.9, r);
      return r1;
    };
    goto L3(p);
  L3(width_orDefault):
    st width = width_orDefault;
    indent_isMissing = missing.0(indent);
    if indent_isMissing then L4(NULL) else L4(indent);
  L4(indent_orDefault):
    st indent = indent_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L5(r4):
    r6 = `==`(r4, 1);
    c = `as.logical`(r6);
    if c then L23() else L6(c);
  L19():
    RdFiles1 = ld RdFiles;
    check L21() else D0();
  L20():
    r3 = dyn base(<sym RdFiles>);
    goto L5(r3);
  D0():
    deopt 2 [RdFiles1];
  L6(c2):
    c6 = `as.logical`(c2);
    if c6 then L27() else L7();
  L21():
    RdFiles2 = force? RdFiles1;
    checkMissing(RdFiles2);
    length = ldf length in base;
    r5 = dyn length(RdFiles2);
    check L22() else D1();
  L23():
    dir_exists = ldf `dir.exists`;
    check L24() else D2();
  D1():
    deopt 5 [r5];
  D2():
    deopt 9 [c];
  L7():
    goto L10();
  L10():
    outFile1 = ld outFile;
    check L38() else D11();
  L22():
    goto L5(r5);
  L24():
    p1 = prom<V +>{
      RdFiles3 = ld RdFiles;
      RdFiles4 = force? RdFiles3;
      checkMissing(RdFiles4);
      return RdFiles4;
    };
    r8 = dyn dir_exists(p1);
    check L25() else D3();
  L27():
    RdFiles5 = ld RdFiles;
    check L28() else D4();
  D3():
    deopt 11 [c, r8];
  D4():
    deopt 13 [RdFiles5];
  D11():
    deopt 36 [outFile1];
  L25():
    c3 = `as.logical`(r8);
    c4 = `&&`(c, c3);
    goto L6(c4);
  L28():
    RdFiles6 = force? RdFiles5;
    checkMissing(RdFiles6);
    st docsDir = RdFiles6;
    dir_exists1 = ldf `dir.exists`;
    check L29() else D5();
  L38():
    outFile2 = force? outFile1;
    checkMissing(outFile2);
    r19 = `==`(outFile2, "");
    c8 = `as.logical`(r19);
    if c8 then L39() else L11();
  D5():
    deopt 17 [];
  L11():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L12():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L29():
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        docsDir = ld docsDir;
        docsDir1 = force? docsDir;
        checkMissing(docsDir1);
        return docsDir1;
      };
      r10 = dyn file_path(p2, "man");
      return r10;
    };
    r12 = dyn dir_exists1(p3);
    check L30() else D6();
  L39():
    stdout = ldf stdout;
    check L40() else D12();
  D6():
    deopt 19 [r12];
  D12():
    deopt 41 [];
  L13(r23):
    c10 = `as.logical`(r23);
    if c10 then L46() else L14();
  L16(r30):
    r32 = `!`(r30);
    c11 = `as.logical`(r32);
    if c11 then L56() else L17();
  L30():
    c7 = `as.logical`(r12);
    if c7 then L31() else L8();
  L40():
    r20 = dyn stdout();
    check L41() else D13();
  L43():
    outFile3 = ld outFile;
    check L45() else D14();
  L44():
    r22 = dyn base1(<sym outFile>);
    goto L13(r22);
  L52():
    outFile7 = ld outFile;
    check L54() else D17();
  L53():
    r29 = dyn base3(<sym outFile>, "connection");
    goto L16(r29);
  D13():
    deopt 42 [r20];
  D14():
    deopt 45 [outFile3];
  D17():
    deopt 61 [outFile7];
  L8():
    goto L9();
  L9():
    list_files_with_type = ldf list_files_with_type;
    check L35() else D9();
  L14():
    goto L12();
  L17():
    goto L18();
  L18():
    _build_Rd_db = ldf `.build_Rd_db`;
    check L60() else D21();
  L31():
    file_path1 = ldf `file.path`;
    check L32() else D7();
  L41():
    st outFile = r20;
    goto L12();
  L45():
    outFile4 = force? outFile3;
    checkMissing(outFile4);
    c9 = `is.character`(outFile4);
    goto L13(c9);
  L46():
    file = ldf file;
    check L47() else D15();
  L54():
    outFile8 = force? outFile7;
    checkMissing(outFile8);
    inherits = ldf inherits in base;
    r31 = dyn inherits(outFile8, "connection", FALSE);
    check L55() else D18();
  L56():
    stop = ldf stop;
    check L57() else D19();
  D7():
    deopt 21 [];
  D9():
    deopt 29 [];
  D15():
    deopt 49 [];
  D18():
    deopt 66 [r31];
  D19():
    deopt 69 [];
  D21():
    deopt 75 [];
  L32():
    p4 = prom<V +>{
      docsDir2 = ld docsDir;
      docsDir3 = force? docsDir2;
      checkMissing(docsDir3);
      return docsDir3;
    };
    r14 = dyn file_path1(p4, "man");
    check L33() else D8();
  L35():
    p5 = prom<V +>{
      docsDir4 = ld docsDir;
      docsDir5 = force? docsDir4;
      checkMissing(docsDir5);
      return docsDir5;
    };
    r17 = dyn list_files_with_type(p5, "docs");
    check L36() else D10();
  L47():
    p6 = prom<V +>{
      outFile5 = ld outFile;
      outFile6 = force? outFile5;
      checkMissing(outFile6);
      return outFile6;
    };
    r25 = dyn file(p6, "w");
    check L48() else D16();
  L55():
    goto L16(r31);
  L57():
    r33 = dyn stop("argument 'outFile' must be a character string or connection");
    check L58() else D20();
  L60():
    p7 = prom<V +>{
      RdFiles7 = ld RdFiles;
      RdFiles8 = force? RdFiles7;
      checkMissing(RdFiles8);
      return RdFiles8;
    };
    r36 = dyn _build_Rd_db[files, stages](p7, "build");
    check L61() else D22();
  D8():
    deopt 24 [r14];
  D10():
    deopt 32 [r17];
  D16():
    deopt 52 [r25];
  D20():
    deopt 71 [r33];
  D22():
    deopt 80 [r36];
  L33():
    st docsDir = r14;
    goto L9();
  L36():
    st RdFiles = r17;
    goto L10();
  L48():
    st outFile = r25;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L58():
    goto L18();
  L61():
    st db = r36;
    _build_Rd_index = ldf `.build_Rd_index`;
    check L62() else D23();
  D23():
    deopt 83 [];
  L15(r27):
    goto L12();
  L49():
    on_exit = ldf `on.exit` in base;
    r28 = dyn on_exit(<lang close(outFile)>);
    goto L15(r28);
  L50():
    r26 = dyn base2(<lang close(outFile)>);
    goto L15(r26);
  L62():
    p9 = prom<V +>{
      Rd_contents = ldf Rd_contents;
      p8 = prom<V +>{
        db = ld db;
        db1 = force? db;
        checkMissing(db1);
        return db1;
      };
      r38 = dyn Rd_contents(p8);
      return r38;
    };
    p10 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r41 = dyn _build_Rd_index[, type](p9, p10);
    check L63() else D24();
  D24():
    deopt 87 [r41];
  L63():
    st index = r41;
    writeLines = ldf writeLines;
    check L64() else D25();
  D25():
    deopt 90 [];
  L64():
    p14 = prom<V +>{
      formatDL = ldf formatDL;
      p11 = prom<V +>{
        index = ld index;
        index1 = force? index;
        checkMissing(index1);
        return index1;
      };
      p12 = prom<V +>{
        width1 = ld width;
        width2 = force? width1;
        checkMissing(width2);
        return width2;
      };
      p13 = prom<V +>{
        indent1 = ld indent;
        indent2 = force? indent1;
        checkMissing(indent2);
        return indent2;
      };
      r45 = dyn formatDL[, width, indent](p11, p12, p13);
      return r45;
    };
    p15 = prom<V +>{
      outFile9 = ld outFile;
      outFile10 = force? outFile9;
      checkMissing(outFile10);
      return outFile10;
    };
    r48 = dyn writeLines(p14, p15);
    check L65() else D26();
  D26():
    deopt 93 [r48];
  L65():
    popenv;
    return r48;
  }
}