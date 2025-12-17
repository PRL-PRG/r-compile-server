fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg r5:cls, reg r6:cls, reg data_frame:cls, reg r7:V, reg rnorm:cls, reg r8:V, reg getwd:cls, reg r9:V, reg setwd:cls, reg tempdir:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg package_skeleton:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg c:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg setwd1:cls, reg owd:*, reg owd1:V, reg p3:p(V +), reg r19:V |
    mkenv;
    r = clos inner1172380555;
    st `package.skeleton` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    r5 = clos inner799576941;
    st f = r5;
    r6 = clos inner799576941;
    st g = r6;
    data_frame = ldf `data.frame`;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 15 [];
  L3():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    r7 = dyn data_frame[a, b](1.0, 2.0);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 20 [r7];
  L4():
    goto L0();
  L6():
    st d = r7;
    rnorm = ldf rnorm;
    check L7() else D4();
  D4():
    deopt 23 [];
  L7():
    r8 = dyn rnorm(1000.0);
    check L8() else D5();
  D5():
    deopt 25 [r8];
  L8():
    st e = r8;
    getwd = ldf getwd;
    check L9() else D6();
  D6():
    deopt 28 [];
  L9():
    r9 = dyn getwd();
    check L10() else D7();
  D7():
    deopt 29 [r9];
  L10():
    st owd = r9;
    setwd = ldf setwd;
    check L11() else D8();
  D8():
    deopt 32 [];
  L11():
    p1 = prom<V +>{
      tempdir = ldf tempdir;
      r10 = dyn tempdir();
      return r10;
    };
    r12 = dyn setwd(p1);
    check L12() else D9();
  D9():
    deopt 34 [r12];
  L12():
    package_skeleton = ldf `package.skeleton`;
    check L13() else D10();
  D10():
    deopt 36 [];
  L13():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c = ldf c in base;
      r15 = dyn c("f", "g", "d", "e");
      goto L0(r15);
    L2():
      r13 = dyn base1("f", "g", "d", "e");
      goto L0(r13);
    };
    r17 = dyn package_skeleton[list, name](p2, "mypkg");
    check L14() else D11();
  D11():
    deopt 41 [r17];
  L14():
    setwd1 = ldf setwd;
    check L15() else D12();
  D12():
    deopt 43 [];
  L15():
    p3 = prom<V +>{
      owd = ld owd;
      owd1 = force? owd;
      checkMissing(owd1);
      return owd1;
    };
    r19 = dyn setwd1(p3);
    check L16() else D13();
  D13():
    deopt 45 [r19];
  L16():
    popenv;
    return r19;
  }
}
fun inner1172380555(name, list, environment, path, force, code_files, encoding) {
  (reg name:*, reg list:*, reg environment:*, reg path:*, reg force:*, reg code_files:*, reg encoding:*) -+> V { var name:*, reg name_isMissing:L, reg name_orDefault:*, var list:*, reg list_isMissing:L, reg list_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var environment:*, reg environment_isMissing:L, reg environment_orDefault:*, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p1:p(V +), var path:*, reg path_isMissing:L, reg path_orDefault:*, var force:*, reg force_isMissing:L, reg force_orDefault:*, var code_files:*, reg code_files_isMissing:L, reg code_files_orDefault:*, reg character1:cls, reg r3:V, reg p2:p(V +), var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg grepl:cls, reg sprintf:cls, reg _standard_regexps:cls, reg r5:V, reg c:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg name1:*, reg name2:V, reg p5:p(V +), reg r13:V, reg r14:V, reg c1:L, reg stop:cls, reg r15:V, reg r17:cls, reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg code_files1:*, reg code_files2:V, reg c2:L, reg r20:V, reg c3:L, reg stop1:cls, reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg code_files3:*, reg code_files4:V, reg length:cls, reg r25:V, reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg missing:cls, reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg missing1:cls, reg r32:V, reg c4:L, reg use_code_files:*, reg use_code_files1:V, reg c5:L, reg new_env:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg globalenv:cls, reg r35:V, reg p6:p(V +), reg r37:V, reg __:cls, reg r38:V, reg r39:cls, reg name3:*, reg name4:V, reg p7:p(V +), reg environment1:*, reg environment2:V, reg p8:p(V +), reg r42:V, reg code_files5:*, reg code_files6:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg sys_source:cls, reg cf:*, reg cf1:V, reg p9:p(V +), reg environment3:*, reg environment4:V, reg p10:p(V +), reg r45:V, reg ls:cls, reg environment5:*, reg environment6:V, reg p11:p(V +), reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg environment7:*, reg environment8:V, reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg identical:cls, reg r50:V, reg c7:L, reg list1:*, reg list2:V, reg c8:L, reg list4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg list5:*, reg list6:V, reg r51:V, reg __1:cls, reg r52:V, reg dx4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg list7:*, reg list8:V, reg c9:L, reg r55:V, reg c10:L, reg stop2:cls, reg r56:V, reg use_code_files2:*, reg use_code_files3:V, reg c11:L, reg c12:V, reg envIsMissing:*, reg envIsMissing1:V, reg r58:V, reg c14:L, reg c15:V, reg c17:L, reg __2:cls, reg r59:V, reg r60:cls, reg environment9:*, reg environment10:V, reg p12:p(V +), reg r62:V, reg _fixPackageFileNames:cls, reg classesList:*, reg classesList1:V, reg p13:p(V +), reg r64:V, reg classesList2:*, reg classesList3:V, reg l1:*, reg names__:cls, reg r65:V, reg __3:cls, reg r66:V, reg r67:cls, reg environment11:*, reg environment12:V, reg p14:p(V +), reg r69:V, reg _fixPackageFileNames1:cls, reg methodsList:*, reg methodsList1:V, reg p15:p(V +), reg r71:V, reg methodsList2:*, reg methodsList3:V, reg l2:*, reg names__1:cls, reg r72:V, reg character2:cls, reg r73:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r74:V, reg r75:V, reg classesList4:*, reg classesList5:V, reg length1:cls, reg r76:V, reg r77:V, reg c18:L, reg c19:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r78:V, reg c23:L, reg r79:V, reg methodsList5:*, reg methodsList6:V, reg length2:cls, reg r80:V, reg r81:V, reg c24:L, reg c25:V, reg vapply:cls, reg list9:*, reg list10:V, reg p16:p(V +), reg exists:*, reg exists1:V, reg p17:p(V +), reg environment13:*, reg environment14:V, reg p18:p(V +), reg r85:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r86:V, reg r87:V, reg have:*, reg have1:V, reg r88:V, reg any:cls, reg r89:V, reg c27:L, reg warning:cls, reg sprintf1:cls, reg ngettext:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r90:V, reg r91:V, reg have2:*, reg have3:V, reg r92:V, reg sum:cls, reg r93:V, reg p19:p(V +), reg r95:V, reg p20:p(V +), reg paste:cls, reg sQuote:cls, reg list11:*, reg list12:V, reg c28:L, reg list14:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg have4:*, reg have5:V, reg r97:V, reg __4:cls, reg r98:V, reg p21:p(V +), reg r100:V, reg p22:p(V +), reg r102:V, reg p23:p(V +), reg r104:V, reg p24:p(V +), reg r106:V, reg list15:*, reg list16:V, reg c29:L, reg list18:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg have6:*, reg have7:V, reg __5:cls, reg r108:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r109:V, reg r110:V, reg list19:*, reg list20:V, reg length3:cls, reg r111:V, reg r112:V, reg c30:L, reg stop3:cls, reg r113:V, reg message:cls, reg r115:V, reg file_path:cls, reg path1:*, reg path2:V, reg p25:p(V +), reg name5:*, reg name6:V, reg p26:p(V +), reg r118:V, reg file_exists:cls, reg dir:*, reg dir1:V, reg p27:p(V +), reg r120:V, reg c31:L, reg c33:V, reg force1:*, reg force2:V, reg r121:V, reg c34:L, reg c35:V, reg c37:L, reg stop4:cls, reg gettextf:cls, reg dir2:*, reg dir3:V, reg p28:p(V +), reg r123:V, reg p29:p(V +), reg r125:V, reg safe_dir_create:cls, reg dir4:*, reg dir5:V, reg p30:p(V +), reg r128:V, reg safe_dir_create1:cls, reg file_path1:cls, reg dir6:*, reg dir7:V, reg p31:p(V +), reg r130:V, reg p32:p(V +), reg r132:V, reg safe_dir_create2:cls, reg file_path2:cls, reg dir8:*, reg dir9:V, reg p33:p(V +), reg r134:V, reg p34:p(V +), reg r136:V, reg safe_dir_create3:cls, reg file_path3:cls, reg dir10:*, reg dir11:V, reg p35:p(V +), reg r138:V, reg p36:p(V +), reg r140:V, reg message1:cls, reg r141:V, reg file:cls, reg file_path4:cls, reg dir12:*, reg dir13:V, reg p37:p(V +), reg r143:V, reg p38:p(V +), reg r145:V, reg cat:cls, reg name7:*, reg name8:V, reg p39:p(V +), reg format:cls, reg Sys_time:cls, reg r147:V, reg p40:p(V +), reg r149:V, reg p41:p(V +), reg usingS4:*, reg usingS5:V, reg c38:L, reg p42:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r152:V, reg r153:V, reg encoding1:*, reg encoding2:V, reg nzchar:cls, reg r154:V, reg c39:L, reg c41:V, reg encoding3:*, reg encoding4:V, reg r155:V, reg c42:L, reg c43:V, reg c45:L, reg paste1:cls, reg encoding5:*, reg encoding6:V, reg p43:p(V +), reg r157:V, reg p44:p(V +), reg description:*, reg description1:V, reg p45:p(V +), reg r160:V, reg close:cls, reg description2:*, reg description3:V, reg p46:p(V +), reg r162:V, reg message2:cls, reg r163:V, reg file1:cls, reg file_path5:cls, reg dir14:*, reg dir15:V, reg p47:p(V +), reg r165:V, reg p48:p(V +), reg r167:V, reg list21:*, reg list22:V, reg c46:L, reg list24:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg grepl1:cls, reg list25:*, reg list26:V, reg p49:p(V +), reg r169:V, reg __6:cls, reg r170:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r171:V, reg r172:V, reg list27:*, reg list28:V, reg length4:cls, reg r173:V, reg c47:L, reg writeLines:cls, reg strwrap:cls, reg sprintf2:cls, reg paste2:cls, reg list29:*, reg list30:V, reg p50:p(V +), reg r175:V, reg p51:p(V +), reg r177:V, reg p52:p(V +), reg r179:V, reg p53:p(V +), reg out:*, reg out1:V, reg p54:p(V +), reg r182:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r184:V, reg r185:V, reg methodsList7:*, reg methodsList8:V, reg length5:cls, reg r186:V, reg c48:L, reg cat1:cls, reg out2:*, reg out3:V, reg p55:p(V +), reg r188:V, reg cat2:cls, reg paste3:cls, reg methodsList9:*, reg methodsList10:V, reg p56:p(V +), reg r190:V, reg p57:p(V +), reg out4:*, reg out5:V, reg p58:p(V +), reg r193:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r195:V, reg r196:V, reg classesList6:*, reg classesList7:V, reg length6:cls, reg r197:V, reg c49:L, reg cat3:cls, reg out6:*, reg out7:V, reg p59:p(V +), reg r199:V, reg cat4:cls, reg paste4:cls, reg classesList8:*, reg classesList9:V, reg p60:p(V +), reg r201:V, reg p61:p(V +), reg out8:*, reg out9:V, reg p62:p(V +), reg r204:V, reg close1:cls, reg out10:*, reg out11:V, reg p63:p(V +), reg r207:V, reg message3:cls, reg r208:V, reg file2:cls, reg file_path6:cls, reg dir16:*, reg dir17:V, reg p64:p(V +), reg r210:V, reg p65:p(V +), reg r212:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r213:V, reg r214:V, reg c50:cls, reg r215:V, reg writeLines1:cls, reg strwrap1:cls, reg msg:*, reg msg1:V, reg p66:p(V +), reg r217:V, reg p67:p(V +), reg out12:*, reg out13:V, reg p68:p(V +), reg r220:V, reg close2:cls, reg out14:*, reg out15:V, reg p69:p(V +), reg r222:V, reg grep:cls, reg list31:*, reg list32:V, reg p70:p(V +), reg r224:V, reg list33:*, reg list34:V, reg c51:L, reg list36:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg internalObjInds:*, reg internalObjInds1:V, reg __7:cls, reg r225:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r226:V, reg r227:V, reg internalObjInds2:*, reg internalObjInds3:V, reg length7:cls, reg r228:V, reg c52:L, reg list37:*, reg list38:V, reg c53:L, reg list40:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg internalObjInds4:*, reg internalObjInds5:V, reg r229:V, reg __8:cls, reg r230:V, reg _fixPackageFileNames2:cls, reg list41:*, reg list42:V, reg p71:p(V +), reg r232:V, reg list43:*, reg list44:V, reg l3:*, reg names__2:cls, reg r233:V, reg use_code_files4:*, reg use_code_files5:V, reg r234:V, reg c54:L, reg message4:cls, reg r235:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r236:V, reg r237:V, reg internalObjInds6:*, reg internalObjInds7:V, reg length8:cls, reg r238:V, reg c55:L, reg dump:cls, reg internalObjs:*, reg internalObjs1:V, reg p72:p(V +), reg file_path7:cls, reg code_dir:*, reg code_dir1:V, reg p73:p(V +), reg sprintf3:cls, reg name9:*, reg name10:V, reg p74:p(V +), reg r242:V, reg p75:p(V +), reg r244:V, reg p76:p(V +), reg environment15:*, reg environment16:V, reg p77:p(V +), reg r247:V, reg list45:*, reg list46:V, reg s1:V, reg l4:I, reg i6:I, reg i7:I, reg i8:I, reg c56:L, reg x1:V, reg get:cls, reg item:*, reg item1:V, reg p78:p(V +), reg environment17:*, reg environment18:V, reg p79:p(V +), reg r251:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r252:V, reg i13:I, reg r253:V, reg objItem:*, reg objItem1:V, reg is_function:cls, reg r254:V, reg c57:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r255:V, reg i18:I, reg r256:V, reg objItem2:*, reg objItem3:V, reg isS4:cls, reg r257:V, reg c58:L, reg stop5:cls, reg gettextf1:cls, reg item2:*, reg item3:V, reg p80:p(V +), reg r259:V, reg p81:p(V +), reg r261:V, reg i21:I, reg dump1:cls, reg item4:*, reg item5:V, reg p82:p(V +), reg file_path8:cls, reg code_dir2:*, reg code_dir3:V, reg p83:p(V +), reg sprintf4:cls, reg list47:*, reg list48:V, reg c59:L, reg list50:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg item6:*, reg item7:V, reg __9:cls, reg r265:V, reg p84:p(V +), reg r267:V, reg p85:p(V +), reg r269:V, reg p86:p(V +), reg environment19:*, reg environment20:V, reg p87:p(V +), reg r272:V, reg i22:I, reg try:cls, reg save:cls, reg item8:*, reg item9:V, reg p88:p(V +), reg environment21:*, reg environment22:V, reg p89:p(V +), reg file_path9:cls, reg data_dir:*, reg data_dir1:V, reg p90:p(V +), reg sprintf5:cls, reg item10:*, reg item11:V, reg p91:p(V +), reg r278:V, reg p92:p(V +), reg r280:V, reg p93:p(V +), reg r282:V, reg p94:p(V +), reg r284:V, reg message5:cls, reg r285:V, reg file_copy:cls, reg code_files7:*, reg code_files8:V, reg p95:p(V +), reg code_dir4:*, reg code_dir5:V, reg p96:p(V +), reg r288:V, reg __10:cls, reg r289:V, reg r290:cls, reg code_dir6:*, reg code_dir7:V, reg p97:p(V +), reg r292:V, reg basename:cls, reg code_files9:*, reg code_files10:V, reg p98:p(V +), reg r294:V, reg code_files11:*, reg code_files12:V, reg c60:L, reg code_files14:V, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r295:V, reg code_files17:V, reg r296:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r297:V, reg code_files20:V, reg r298:V, reg code_files21:*, reg code_files22:V, reg R_files:*, reg R_files1:V, reg match:cls, reg r299:V, reg is_na:cls, reg r300:V, reg __11:cls, reg r301:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r302:V, reg r303:V, reg wrong:*, reg wrong1:V, reg length9:cls, reg r304:V, reg c61:L, reg warning1:cls, reg code_dir8:*, reg code_dir9:V, reg p99:p(V +), reg strwrap2:cls, reg paste5:cls, reg sQuote1:cls, reg wrong2:*, reg wrong3:V, reg p100:p(V +), reg r307:V, reg p101:p(V +), reg r309:V, reg p102:p(V +), reg r311:V, reg p103:p(V +), reg r313:V, reg file_rename:cls, reg file_path10:cls, reg code_dir10:*, reg code_dir11:V, reg p104:p(V +), reg wrong4:*, reg wrong5:V, reg p105:p(V +), reg r316:V, reg p106:p(V +), reg file_path11:cls, reg code_dir12:*, reg code_dir13:V, reg p107:p(V +), reg paste6:cls, reg sub:cls, reg wrong6:*, reg wrong7:V, reg p108:p(V +), reg r320:V, reg p109:p(V +), reg r322:V, reg p110:p(V +), reg r324:V, reg p111:p(V +), reg r326:V, reg message6:cls, reg r327:V, reg try1:cls, reg suppressMessages:cls, reg promptPackage:cls, reg name11:*, reg name12:V, reg p112:p(V +), reg file_path12:cls, reg docs_dir:*, reg docs_dir1:V, reg p113:p(V +), reg sprintf6:cls, reg name13:*, reg name14:V, reg p114:p(V +), reg r331:V, reg p115:p(V +), reg r333:V, reg p116:p(V +), reg path3:*, reg path4:V, reg p117:p(V +), reg sapply:cls, reg list51:*, reg list52:V, reg p118:p(V +), reg r338:cls, reg p119:p(V +), reg sapply1:cls, reg classesList10:*, reg classesList11:V, reg p120:p(V +), reg r342:cls, reg p121:p(V +), reg sapply2:cls, reg methodsList11:*, reg methodsList12:V, reg p122:p(V +), reg r346:cls, reg p123:p(V +), reg r348:V, reg p124:p(V +), reg r350:V, reg p125:p(V +), reg r352:V, reg methodsList13:*, reg methodsList14:V, reg s2:V, reg l5:I, reg i24:I, reg i25:I, reg i26:I, reg c62:L, reg x2:V, reg exists2:cls, reg item12:*, reg item13:V, reg p126:p(V +), reg environment23:*, reg environment24:V, reg p127:p(V +), reg r355:V, reg c63:L, reg get1:cls, reg item14:*, reg item15:V, reg p128:p(V +), reg environment25:*, reg environment26:V, reg p129:p(V +), reg r358:V, reg __12:cls, reg r359:V, reg r360:cls, reg ff:*, reg ff1:V, reg p130:p(V +), reg r362:V, reg c64:L, reg i32:I, reg c66:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r363:V, reg i35:I, reg c69:L, reg r364:V, reg __13:cls, reg r365:V, reg name15:*, reg name16:V, reg identical1:cls, reg r366:V, reg r367:V, reg c70:L, reg c71:V, reg c73:L, reg file_remove:cls, reg file_path13:cls, reg docs_dir2:*, reg docs_dir3:V, reg p131:p(V +), reg sprintf7:cls, reg list53:*, reg list54:V, reg c74:L, reg list56:V, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg item16:*, reg item17:V, reg __14:cls, reg r369:V, reg p132:p(V +), reg r371:V, reg p133:p(V +), reg r373:V, reg p134:p(V +), reg r375:V, reg i39:I, reg r376:V, reg i40:I, reg sym25:cls, reg base25:cls, reg guard25:L, reg r378:V, reg r379:V, reg yy:*, reg yy1:V, reg inherits:cls, reg r380:V, reg c75:L, reg stop6:cls, reg yy2:*, reg yy3:V, reg p135:p(V +), reg r382:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r384:V, reg r385:V, reg list_files:cls, reg code_dir14:*, reg code_dir15:V, reg p136:p(V +), reg r387:V, reg length10:cls, reg r388:V, reg r389:V, reg c76:L, reg unlink:cls, reg code_dir16:*, reg code_dir17:V, reg p137:p(V +), reg r391:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r393:V, reg r394:V, reg list_files1:cls, reg data_dir2:*, reg data_dir3:V, reg p138:p(V +), reg r396:V, reg length11:cls, reg r397:V, reg r398:V, reg c77:L, reg unlink1:cls, reg data_dir4:*, reg data_dir5:V, reg p139:p(V +), reg r400:V, reg message7:cls, reg r402:V, reg message8:cls, reg sprintf8:cls, reg file_path14:cls, reg dir18:*, reg dir19:V, reg p140:p(V +), reg r404:V, reg p141:p(V +), reg r406:V, reg p142:p(V +), reg r408:V |
    mkenv;
    name_isMissing = missing.0(name);
    if name_isMissing then L0("anRpackage") else L0(name);
  L0(name_orDefault):
    st name = name_orDefault;
    list_isMissing = missing.0(list);
    if list_isMissing then L1() else L2(list);
  L1():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L2(p);
  L2(list_orDefault):
    st list = list_orDefault;
    environment_isMissing = missing.0(environment);
    if environment_isMissing then L3() else L4(environment);
  L3():
    p1 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    goto L4(p1);
  L4(environment_orDefault):
    st environment = environment_orDefault;
    path_isMissing = missing.0(path);
    if path_isMissing then L5(".") else L5(path);
  L5(path_orDefault):
    st path = path_orDefault;
    force_isMissing = missing.0(force);
    if force_isMissing then L6(FALSE) else L6(force);
  L6(force_orDefault):
    st force = force_orDefault;
    code_files_isMissing = missing.0(code_files);
    if code_files_isMissing then L7() else L8(code_files);
  L7():
    p2 = prom<V +>{
      character1 = ldf character;
      r3 = dyn character1();
      return r3;
    };
    goto L8(p2);
  L8(code_files_orDefault):
    st code_files = code_files_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L9("unknown") else L9(encoding);
  L9(encoding_orDefault):
    st encoding = encoding_orDefault;
    grepl = ldf grepl;
    check L98() else D0();
  D0():
    deopt 1 [];
  L98():
    p4 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        _standard_regexps = ldf `.standard_regexps`;
        r5 = dyn _standard_regexps();
        c = `is.object`(r5);
        if c then L1() else L2(r5);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", r5);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(r7):
        r8 = `$`(r7, <sym valid_package_name>);
        goto L0(r8);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r10 = dyn sprintf("^%s$", p3);
      return r10;
    };
    p5 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r13 = dyn grepl(p4, p5);
    check L99() else D1();
  D1():
    deopt 4 [r13];
  L99():
    r14 = `!`(r13);
    c1 = `as.logical`(r14);
    if c1 then L100() else L10();
  L10():
    goto L11();
  L11():
    r17 = clos inner3006846853;
    st `safe.dir.create` = r17;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L104() else L105();
  L100():
    stop = ldf stop;
    check L101() else D2();
  D2():
    deopt 7 [];
  L12(r19):
    r20 = `!`(r19);
    c3 = `as.logical`(r20);
    if c3 then L107() else L13();
  L101():
    r15 = dyn stop("Malformed package name.");
    check L102() else D3();
  L104():
    code_files1 = ld code_files;
    check L106() else D4();
  L105():
    r18 = dyn base(<sym code_files>);
    goto L12(r18);
  D3():
    deopt 9 [r15];
  D4():
    deopt 16 [code_files1];
  L13():
    goto L14();
  L14():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L111() else L112();
  L102():
    goto L11();
  L106():
    code_files2 = force? code_files1;
    checkMissing(code_files2);
    c2 = `is.character`(code_files2);
    goto L12(c2);
  L107():
    stop1 = ldf stop;
    check L108() else D5();
  D5():
    deopt 21 [];
  L15(r24):
    r26 = `>`(r24, 0);
    st use_code_files = r26;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L115() else L116();
  L108():
    r21 = dyn stop1("'code_files' must be a character vector");
    check L109() else D6();
  L111():
    code_files3 = ld code_files;
    check L113() else D7();
  L112():
    r23 = dyn base1(<sym code_files>);
    goto L15(r23);
  D6():
    deopt 23 [r21];
  D7():
    deopt 28 [code_files3];
  L16(r28):
    st envIsMissing = r28;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L117() else L118();
  L109():
    goto L14();
  L113():
    code_files4 = force? code_files3;
    checkMissing(code_files4);
    length = ldf length in base;
    r25 = dyn length(code_files4);
    check L114() else D8();
  L115():
    missing = ldf missing in base;
    r29 = dyn missing(<sym environment>);
    goto L16(r29);
  L116():
    r27 = dyn base2(<sym environment>);
    goto L16(r27);
  D8():
    deopt 31 [r25];
  L17(r31):
    c4 = `as.logical`(r31);
    if c4 then L119() else L18();
  L114():
    goto L15(r25);
  L117():
    missing1 = ldf missing in base;
    r32 = dyn missing1(<sym list>);
    goto L17(r32);
  L118():
    r30 = dyn base3(<sym list>);
    goto L17(r30);
  L18():
    goto L27();
  L27():
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L147() else L148();
  L119():
    use_code_files = ld use_code_files;
    check L120() else D9();
  D9():
    deopt 42 [use_code_files];
  L28(r54):
    r55 = `!`(r54);
    c10 = `as.logical`(r55);
    if c10 then L150() else L29();
  L120():
    use_code_files1 = force? use_code_files;
    checkMissing(use_code_files1);
    c5 = `as.logical`(use_code_files1);
    if c5 then L121() else L19();
  L147():
    list7 = ld list;
    check L149() else D25();
  L148():
    r53 = dyn base6(<sym list>);
    goto L28(r53);
  D25():
    deopt 109 [list7];
  L19():
    goto L22();
  L22():
    ls = ldf ls;
    check L132() else D18();
  L29():
    goto L30();
  L30():
    use_code_files2 = ld use_code_files;
    check L154() else D28();
  L121():
    new_env = ldf `new.env`;
    check L122() else D10();
  L149():
    list8 = force? list7;
    checkMissing(list8);
    c9 = `is.character`(list8);
    goto L28(c9);
  L150():
    stop2 = ldf stop;
    check L151() else D26();
  D10():
    deopt 45 [];
  D18():
    deopt 75 [];
  D26():
    deopt 114 [];
  D28():
    deopt 119 [use_code_files2];
  L122():
    p6 = prom<V +>{
      sym4 = ldf globalenv;
      base4 = ldf globalenv in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      globalenv = ldf globalenv in base;
      r35 = dyn globalenv();
      goto L0(r35);
    L2():
      r33 = dyn base4();
      goto L0(r33);
    };
    r37 = dyn new_env[hash, parent](TRUE, p6);
    check L123() else D11();
  L132():
    p11 = prom<V +>{
      environment5 = ld environment;
      environment6 = force? environment5;
      checkMissing(environment6);
      return environment6;
    };
    r47 = dyn ls[, `all.names`](p11, TRUE);
    check L133() else D19();
  L151():
    r56 = dyn stop2("'list' must be a character vector naming R objects");
    check L152() else D27();
  L154():
    use_code_files3 = force? use_code_files2;
    checkMissing(use_code_files3);
    c11 = `as.logical`(use_code_files3);
    if c11 then L31(c11) else L155();
  D11():
    deopt 50 [r37];
  D19():
    deopt 79 [r47];
  D27():
    deopt 116 [r56];
  L31(c12):
    c17 = `as.logical`(c12);
    if c17 then L158() else L32();
  L123():
    st environment = r37;
    __ = ldf `::`;
    check L124() else D12();
  L133():
    st list = r47;
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L134() else L135();
  L152():
    goto L30();
  L155():
    envIsMissing = ld envIsMissing;
    check L156() else D29();
  D12():
    deopt 53 [];
  D29():
    deopt 121 [c11, envIsMissing];
  L23(r49):
    c7 = `as.logical`(r49);
    if c7 then L139() else L24();
  L32():
    character2 = ldf character;
    check L176() else D46();
  L33():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L178() else L179();
  L124():
    r38 = dyn __("methods", "setPackageName");
    check L125() else D13();
  L134():
    environment7 = ld environment;
    check L136() else D20();
  L135():
    r48 = dyn base5(<sym environment>, <sym .GlobalEnv>);
    goto L23(r48);
  L156():
    envIsMissing1 = force? envIsMissing;
    checkMissing(envIsMissing1);
    r58 = `!`(envIsMissing1);
    c14 = `as.logical`(r58);
    c15 = `||`(c11, c14);
    goto L31(c15);
  L158():
    __2 = ldf `::`;
    check L159() else D30();
  D13():
    deopt 56 [r38];
  D20():
    deopt 83 [environment7];
  D30():
    deopt 126 [];
  D46():
    deopt 168 [];
  L24():
    goto L26(NULL);
  L26(dx4):
    goto L27();
  L34(r75):
    r77 = `>`(r75, 0);
    c18 = `as.logical`(r77);
    if c18 then L35(c18) else L182();
  L125():
    checkFun.0(r38);
    r39 = r38 as cls;
    p7 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p8 = prom<V +>{
      environment1 = ld environment;
      environment2 = force? environment1;
      checkMissing(environment2);
      return environment2;
    };
    r42 = dyn r39(p7, p8);
    check L126() else D14();
  L136():
    environment8 = force? environment7;
    checkMissing(environment8);
    _GlobalEnv2 = ld `.GlobalEnv`;
    check L137() else D21();
  L139():
    list1 = ld list;
    check L140() else D23();
  L159():
    r59 = dyn __2("methods", "getClasses");
    check L160() else D31();
  L176():
    r73 = dyn character2();
    check L177() else D47();
  L178():
    classesList4 = ld classesList;
    check L180() else D48();
  L179():
    r74 = dyn base7(<sym classesList>);
    goto L34(r74);
  D14():
    deopt 60 [r42];
  D21():
    deopt 85 [_GlobalEnv2];
  D23():
    deopt 96 [list1];
  D31():
    deopt 129 [r59];
  D47():
    deopt 169 [r73];
  D48():
    deopt 174 [classesList4];
  L35(c19):
    st usingS4 = c19;
    vapply = ldf vapply;
    check L188() else D52();
  L126():
    code_files5 = ld code_files;
    check L127() else D15();
  L137():
    _GlobalEnv3 = force? _GlobalEnv2;
    checkMissing(_GlobalEnv3);
    identical = ldf identical in base;
    r50 = dyn identical(environment8, _GlobalEnv3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L138() else D22();
  L140():
    list2 = force? list1;
    checkMissing(list2);
    c8 = `is.object`(list2);
    if c8 then L141() else L142(list2);
  L160():
    checkFun.0(r59);
    r60 = r59 as cls;
    p12 = prom<V +>{
      environment9 = ld environment;
      environment10 = force? environment9;
      checkMissing(environment10);
      return environment10;
    };
    r62 = dyn r60(p12);
    check L161() else D32();
  L177():
    st methodsList = r73;
    st classesList = r73;
    goto L33();
  L180():
    classesList5 = force? classesList4;
    checkMissing(classesList5);
    length1 = ldf length in base;
    r76 = dyn length1(classesList5);
    check L181() else D49();
  L182():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L183() else L184();
  D15():
    deopt 61 [code_files5];
  D22():
    deopt 95 [r50];
  D32():
    deopt 132 [r62];
  D49():
    deopt 177 [r76];
  D52():
    deopt 191 [];
  L25(dx3):
    st list = dx3;
    goto L26(dx3);
  L36(c23, r79):
    r81 = `>`(r79, 0);
    c24 = `as.logical`(r81);
    c25 = `||`(c23, c24);
    goto L35(c25);
  L127():
    code_files6 = force? code_files5;
    checkMissing(code_files6);
    s = toForSeq(code_files6);
    l = length(s);
    i = 0;
    goto L20(i);
  L138():
    goto L23(r50);
  L141():
    dr2 = tryDispatchBuiltin.1("[", list2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L143() else L142(dr2);
  L142(list4):
    list5 = ld list;
    check L144() else D24();
  L161():
    st classesList = r62;
    _fixPackageFileNames = ldf `.fixPackageFileNames`;
    check L162() else D33();
  L181():
    goto L34(r76);
  L183():
    methodsList5 = ld methodsList;
    check L185() else D50();
  L184():
    r78 = dyn base8(<sym methodsList>);
    goto L36(c18, r78);
  L188():
    p16 = prom<V +>{
      list9 = ld list;
      list10 = force? list9;
      checkMissing(list10);
      return list10;
    };
    p17 = prom<V +>{
      exists = ld exists;
      exists1 = force? exists;
      checkMissing(exists1);
      return exists1;
    };
    p18 = prom<V +>{
      environment13 = ld environment;
      environment14 = force? environment13;
      checkMissing(environment14);
      return environment14;
    };
    r85 = dyn vapply[, , , envir](p16, p17, NA_LGL, p18);
    check L189() else D53();
  D24():
    deopt 98 [list4, list5];
  D33():
    deopt 135 [];
  D50():
    deopt 182 [c18, methodsList5];
  D53():
    deopt 197 [r85];
  L20(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L128() else L21();
  L143():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L144():
    list6 = force? list5;
    checkMissing(list6);
    r51 = `!=`(list6, ".Random.seed");
    __1 = ldf `[` in base;
    r52 = dyn __1(list4, r51);
    goto L25(r52);
  L162():
    p13 = prom<V +>{
      classesList = ld classesList;
      classesList1 = force? classesList;
      checkMissing(classesList1);
      return classesList1;
    };
    r64 = dyn _fixPackageFileNames(p13);
    check L163() else D34();
  L185():
    methodsList6 = force? methodsList5;
    checkMissing(methodsList6);
    length2 = ldf length in base;
    r80 = dyn length2(methodsList6);
    check L186() else D51();
  L189():
    st have = r85;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L190() else L191();
  D34():
    deopt 137 [r64];
  D51():
    deopt 185 [c18, r80];
  L21():
    x = `[[`(s, i2, NULL, TRUE);
    st cf = x;
    sys_source = ldf `sys.source`;
    check L129() else D16();
  L37(r87):
    c27 = `as.logical`(r87);
    if c27 then L194() else L38();
  L128():
    goto L22();
  L163():
    st classes0 = r64;
    classesList2 = ld classesList;
    check L164() else D35();
  L186():
    goto L36(c18, r80);
  L190():
    have = ld have;
    check L192() else D54();
  L191():
    r86 = dyn base9(<lang `!`(have)>);
    goto L37(r86);
  D16():
    deopt 64 [i2];
  D35():
    deopt 139 [classesList2];
  D54():
    deopt 201 [have];
  L38():
    goto L39();
  L39():
    list15 = ld list;
    check L198() else D58();
  L129():
    p9 = prom<V +>{
      cf = ld cf;
      cf1 = force? cf;
      checkMissing(cf1);
      return cf1;
    };
    p10 = prom<V +>{
      environment3 = ld environment;
      environment4 = force? environment3;
      checkMissing(environment4);
      return environment4;
    };
    r45 = dyn sys_source[, envir](p9, p10);
    check L130() else D17();
  L164():
    classesList3 = force? classesList2;
    checkMissing(classesList3);
    l1 = ld classes0;
    names__ = ldf `names<-`;
    check L165() else D36();
  L192():
    have1 = force? have;
    checkMissing(have1);
    r88 = `!`(have1);
    any = ldf any in base;
    r89 = dyn any(r88);
    check L193() else D55();
  L194():
    warning = ldf warning;
    check L195() else D56();
  D17():
    deopt 68 [i2, r45];
  D36():
    deopt 142 [classesList3, l1, classesList3];
  D55():
    deopt 205 [r89];
  D56():
    deopt 207 [];
  D58():
    deopt 214 [list15];
  L130():
    goto L20(i2);
  L165():
    r65 = dyn names__(l1, NULL, classesList3);
    check L166() else D37();
  L193():
    goto L37(r89);
  L195():
    p24 = prom<V +>{
      sprintf1 = ldf sprintf;
      p20 = prom<V +>{
        ngettext = ldf ngettext;
        p19 = prom<V +>{
          sym10 = ldf sum;
          base10 = ldf sum in base;
          guard10 = `==`.4(sym10, base10);
          if guard10 then L1() else L2();
        L0(r91):
          return r91;
        L1():
          have2 = ld have;
          have3 = force? have2;
          checkMissing(have3);
          r92 = `!`(have3);
          sum = ldf sum in base;
          r93 = dyn sum(r92);
          goto L0(r93);
        L2():
          r90 = dyn base10(<lang `!`(have)>);
          goto L0(r90);
        };
        r95 = dyn ngettext(p19, "object '%s' not found", "objects '%s' not found");
        return r95;
      };
      p23 = prom<V +>{
        paste = ldf paste;
        p22 = prom<V +>{
          sQuote = ldf sQuote;
          p21 = prom<V +>{
            list11 = ld list;
            list12 = force? list11;
            checkMissing(list12);
            c28 = `is.object`(list12);
            if c28 then L1() else L2(list12);
          L0(dx7):
            return dx7;
          L1():
            dr4 = tryDispatchBuiltin.1("[", list12);
            dc2 = getTryDispatchBuiltinDispatched(dr4);
            if dc2 then L3() else L2(dr4);
          L2(list14):
            have4 = ld have;
            have5 = force? have4;
            checkMissing(have5);
            r97 = `!`(have5);
            __4 = ldf `[` in base;
            r98 = dyn __4(list14, r97);
            goto L0(r98);
          L3():
            dx6 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx6);
          };
          r100 = dyn sQuote(p21);
          return r100;
        };
        r102 = dyn paste[, collapse](p22, ", ");
        return r102;
      };
      r104 = dyn sprintf1(p20, p23);
      return r104;
    };
    r106 = dyn warning[, domain](p24, NA_LGL);
    check L196() else D57();
  L198():
    list16 = force? list15;
    checkMissing(list16);
    c29 = `is.object`(list16);
    if c29 then L199() else L200(list16);
  D37():
    deopt 144 [classesList3, r65];
  D57():
    deopt 211 [r106];
  L40(dx9):
    st list = dx9;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L203() else L204();
  L166():
    st classes0 = r65;
    __3 = ldf `::`;
    check L167() else D38();
  L196():
    goto L39();
  L199():
    dr6 = tryDispatchBuiltin.1("[", list16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L201() else L200(dr6);
  L200(list18):
    have6 = ld have;
    check L202() else D59();
  D38():
    deopt 147 [];
  D59():
    deopt 216 [list18, have6];
  L41(r110):
    r112 = `!`(r110);
    c30 = `as.logical`(r112);
    if c30 then L207() else L42();
  L167():
    r66 = dyn __3("methods", "getGenerics");
    check L168() else D39();
  L201():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L40(dx8);
  L202():
    have7 = force? have6;
    __5 = ldf `[` in base;
    r108 = dyn __5(list18, have7);
    goto L40(r108);
  L203():
    list19 = ld list;
    check L205() else D60();
  L204():
    r109 = dyn base11(<sym list>);
    goto L41(r109);
  D39():
    deopt 150 [r66];
  D60():
    deopt 222 [list19];
  L42():
    goto L43();
  L43():
    message = ldf message;
    check L211() else D64();
  L168():
    checkFun.0(r66);
    r67 = r66 as cls;
    p14 = prom<V +>{
      environment11 = ld environment;
      environment12 = force? environment11;
      checkMissing(environment12);
      return environment12;
    };
    r69 = dyn r67(p14);
    check L169() else D40();
  L205():
    list20 = force? list19;
    checkMissing(list20);
    length3 = ldf length in base;
    r111 = dyn length3(list20);
    check L206() else D61();
  L207():
    stop3 = ldf stop;
    check L208() else D62();
  D40():
    deopt 153 [r69];
  D61():
    deopt 225 [r111];
  D62():
    deopt 228 [];
  D64():
    deopt 234 [];
  L169():
    st methodsList = r69;
    _fixPackageFileNames1 = ldf `.fixPackageFileNames`;
    check L170() else D41();
  L206():
    goto L41(r111);
  L208():
    r113 = dyn stop3("no R objects specified or available");
    check L209() else D63();
  L211():
    r115 = dyn message[, domain]("Creating directories ...", NA_LGL);
    check L212() else D65();
  D41():
    deopt 156 [];
  D63():
    deopt 230 [r113];
  D65():
    deopt 238 [r115];
  L170():
    p15 = prom<V +>{
      methodsList = ld methodsList;
      methodsList1 = force? methodsList;
      checkMissing(methodsList1);
      return methodsList1;
    };
    r71 = dyn _fixPackageFileNames1(p15);
    check L171() else D42();
  L209():
    goto L43();
  L212():
    file_path = ldf `file.path`;
    check L213() else D66();
  D42():
    deopt 158 [r71];
  D66():
    deopt 240 [];
  L171():
    st methods0 = r71;
    methodsList2 = ld methodsList;
    check L172() else D43();
  L213():
    p25 = prom<V +>{
      path1 = ld path;
      path2 = force? path1;
      checkMissing(path2);
      return path2;
    };
    p26 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    r118 = dyn file_path(p25, p26);
    check L214() else D67();
  D43():
    deopt 160 [methodsList2];
  D67():
    deopt 243 [r118];
  L172():
    methodsList3 = force? methodsList2;
    checkMissing(methodsList3);
    l2 = ld methods0;
    names__1 = ldf `names<-`;
    check L173() else D44();
  L214():
    st dir = r118;
    file_exists = ldf `file.exists`;
    check L215() else D68();
  D44():
    deopt 163 [methodsList3, l2, methodsList3];
  D68():
    deopt 246 [];
  L173():
    r72 = dyn names__1(l2, NULL, methodsList3);
    check L174() else D45();
  L215():
    p27 = prom<V +>{
      dir = ld dir;
      dir1 = force? dir;
      checkMissing(dir1);
      return dir1;
    };
    r120 = dyn file_exists(p27);
    check L216() else D69();
  D45():
    deopt 165 [methodsList3, r72];
  D69():
    deopt 248 [r120];
  L174():
    st methods0 = r72;
    goto L33();
  L216():
    c31 = `as.logical`(r120);
    if c31 then L217() else L44(c31);
  L44(c33):
    c37 = `as.logical`(c33);
    if c37 then L220() else L45();
  L217():
    force1 = ld force;
    check L218() else D70();
  D70():
    deopt 249 [c31, force1];
  L45():
    goto L46();
  L46():
    safe_dir_create = ldf `safe.dir.create`;
    check L224() else D73();
  L218():
    force2 = force? force1;
    checkMissing(force2);
    r121 = `!`(force2);
    c34 = `as.logical`(r121);
    c35 = `&&`(c31, c34);
    goto L44(c35);
  L220():
    stop4 = ldf stop;
    check L221() else D71();
  D71():
    deopt 254 [];
  D73():
    deopt 262 [];
  L221():
    p29 = prom<V +>{
      gettextf = ldf gettextf;
      p28 = prom<V +>{
        dir2 = ld dir;
        dir3 = force? dir2;
        checkMissing(dir3);
        return dir3;
      };
      r123 = dyn gettextf("directory '%s' already exists", p28);
      return r123;
    };
    r125 = dyn stop4[, domain](p29, NA_LGL);
    check L222() else D72();
  L224():
    p30 = prom<V +>{
      dir4 = ld dir;
      dir5 = force? dir4;
      checkMissing(dir5);
      return dir5;
    };
    r128 = dyn safe_dir_create(p30);
    check L225() else D74();
  D72():
    deopt 258 [r125];
  D74():
    deopt 264 [r128];
  L222():
    goto L46();
  L225():
    safe_dir_create1 = ldf `safe.dir.create`;
    check L226() else D75();
  D75():
    deopt 266 [];
  L226():
    p32 = prom<V +>{
      file_path1 = ldf `file.path`;
      p31 = prom<V +>{
        dir6 = ld dir;
        dir7 = force? dir6;
        checkMissing(dir7);
        return dir7;
      };
      r130 = dyn file_path1(p31, "R");
      st code_dir = r130;
      invisible.0();
      return r130;
    };
    r132 = dyn safe_dir_create1(p32);
    check L227() else D76();
  D76():
    deopt 268 [r132];
  L227():
    safe_dir_create2 = ldf `safe.dir.create`;
    check L228() else D77();
  D77():
    deopt 270 [];
  L228():
    p34 = prom<V +>{
      file_path2 = ldf `file.path`;
      p33 = prom<V +>{
        dir8 = ld dir;
        dir9 = force? dir8;
        checkMissing(dir9);
        return dir9;
      };
      r134 = dyn file_path2(p33, "man");
      st docs_dir = r134;
      invisible.0();
      return r134;
    };
    r136 = dyn safe_dir_create2(p34);
    check L229() else D78();
  D78():
    deopt 272 [r136];
  L229():
    safe_dir_create3 = ldf `safe.dir.create`;
    check L230() else D79();
  D79():
    deopt 274 [];
  L230():
    p36 = prom<V +>{
      file_path3 = ldf `file.path`;
      p35 = prom<V +>{
        dir10 = ld dir;
        dir11 = force? dir10;
        checkMissing(dir11);
        return dir11;
      };
      r138 = dyn file_path3(p35, "data");
      st data_dir = r138;
      invisible.0();
      return r138;
    };
    r140 = dyn safe_dir_create3(p36);
    check L231() else D80();
  D80():
    deopt 276 [r140];
  L231():
    message1 = ldf message;
    check L232() else D81();
  D81():
    deopt 278 [];
  L232():
    r141 = dyn message1[, domain]("Creating DESCRIPTION ...", NA_LGL);
    check L233() else D82();
  D82():
    deopt 282 [r141];
  L233():
    file = ldf file;
    check L234() else D83();
  D83():
    deopt 284 [];
  L234():
    p38 = prom<V +>{
      file_path4 = ldf `file.path`;
      p37 = prom<V +>{
        dir12 = ld dir;
        dir13 = force? dir12;
        checkMissing(dir13);
        return dir13;
      };
      r143 = dyn file_path4(p37, "DESCRIPTION");
      return r143;
    };
    r145 = dyn file(p38, "wt");
    check L235() else D84();
  D84():
    deopt 287 [r145];
  L235():
    st description = r145;
    cat = ldf cat;
    check L236() else D85();
  D85():
    deopt 290 [];
  L236():
    p39 = prom<V +>{
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      return name8;
    };
    p41 = prom<V +>{
      format = ldf format;
      p40 = prom<V +>{
        Sys_time = ldf `Sys.time`;
        r147 = dyn Sys_time();
        return r147;
      };
      r149 = dyn format[, format](p40, "%Y-%m-%d");
      return r149;
    };
    p42 = prom<V +>{
      usingS4 = ld usingS4;
      usingS5 = force? usingS4;
      checkMissing(usingS5);
      c38 = `as.logical`(usingS5);
      if c38 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "Imports: methods\n";
    };
    p44 = prom<V +>{
      sym12 = ldf nzchar;
      base12 = ldf nzchar in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L3() else L4();
    L0(r153):
      c39 = `as.logical`(r153);
      if c39 then L5() else L1(c39);
    L3():
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      nzchar = ldf nzchar in base;
      r154 = dyn nzchar(encoding2);
      goto L0(r154);
    L4():
      r152 = dyn base12(<sym encoding>);
      goto L0(r152);
    L1(c41):
      c45 = `as.logical`(c41);
      if c45 then L7() else L2();
    L5():
      encoding3 = ld encoding;
      encoding4 = force? encoding3;
      checkMissing(encoding4);
      r155 = `!=`(encoding4, "unknown");
      c42 = `as.logical`(r155);
      c43 = `&&`(c39, c42);
      goto L1(c43);
    L2():
      invisible.0();
      return NULL;
    L7():
      paste1 = ldf paste0;
      p43 = prom<V +>{
        encoding5 = ld encoding;
        encoding6 = force? encoding5;
        checkMissing(encoding6);
        return encoding6;
      };
      r157 = dyn paste1("Encoding: ", p43, "\n");
      return r157;
    };
    p45 = prom<V +>{
      description = ld description;
      description1 = force? description;
      checkMissing(description1);
      return description1;
    };
    r160 = dyn cat[, , , , , , , , , , , , , , , file, sep]("Package: ", p39, "\n", "Type: Package\n", "Title: What the Package Does (Short Line)\n", "Version: 1.0\n", "Date: ", p41, "\n", "Author: Who wrote it\n", "Maintainer: Who to complain to <yourfault@somewhere.net>\n", "Description: More about what it does (maybe more than one line).\n", "License: What license is it under?\n", p42, p44, p45, "");
    check L237() else D86();
  D86():
    deopt 310 [r160];
  L237():
    close = ldf close;
    check L238() else D87();
  D87():
    deopt 312 [];
  L238():
    p46 = prom<V +>{
      description2 = ld description;
      description3 = force? description2;
      checkMissing(description3);
      return description3;
    };
    r162 = dyn close(p46);
    check L239() else D88();
  D88():
    deopt 314 [r162];
  L239():
    message2 = ldf message;
    check L240() else D89();
  D89():
    deopt 316 [];
  L240():
    r163 = dyn message2[, domain]("Creating NAMESPACE ...", NA_LGL);
    check L241() else D90();
  D90():
    deopt 320 [r163];
  L241():
    file1 = ldf file;
    check L242() else D91();
  D91():
    deopt 322 [];
  L242():
    p48 = prom<V +>{
      file_path5 = ldf `file.path`;
      p47 = prom<V +>{
        dir14 = ld dir;
        dir15 = force? dir14;
        checkMissing(dir15);
        return dir15;
      };
      r165 = dyn file_path5(p47, "NAMESPACE");
      return r165;
    };
    r167 = dyn file1(p48, "wt");
    check L243() else D92();
  D92():
    deopt 325 [r167];
  L243():
    st out = r167;
    list21 = ld list;
    check L244() else D93();
  D93():
    deopt 327 [list21];
  L244():
    list22 = force? list21;
    checkMissing(list22);
    c46 = `is.object`(list22);
    if c46 then L245() else L246(list22);
  L47(dx11):
    st list0 = dx11;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L250() else L251();
  L245():
    dr8 = tryDispatchBuiltin.1("[", list22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L247() else L246(dr8);
  L246(list24):
    grepl1 = ldf grepl;
    check L248() else D94();
  D94():
    deopt 330 [list24];
  L48(r172):
    c47 = `as.logical`(r172);
    if c47 then L254() else L49();
  L247():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L47(dx10);
  L248():
    p49 = prom<V +>{
      list25 = ld list;
      list26 = force? list25;
      checkMissing(list26);
      return list26;
    };
    r169 = dyn grepl1("^[[:alpha:]]", p49);
    check L249() else D95();
  L250():
    list27 = ld list0;
    check L252() else D96();
  L251():
    r171 = dyn base13(<sym list0>);
    goto L48(r171);
  D95():
    deopt 333 [list24, r169];
  D96():
    deopt 338 [list27];
  L49():
    goto L50();
  L50():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L258() else L259();
  L249():
    __6 = ldf `[` in base;
    r170 = dyn __6(list24, r169);
    goto L47(r170);
  L252():
    list28 = force? list27;
    checkMissing(list28);
    length4 = ldf length in base;
    r173 = dyn length4(list28);
    check L253() else D97();
  L254():
    writeLines = ldf writeLines;
    check L255() else D98();
  D97():
    deopt 341 [r173];
  D98():
    deopt 343 [];
  L51(r185):
    c48 = `as.logical`(r185);
    if c48 then L262() else L52();
  L253():
    goto L48(r173);
  L255():
    p53 = prom<V +>{
      strwrap = ldf strwrap;
      p52 = prom<V +>{
        sprintf2 = ldf sprintf;
        p51 = prom<V +>{
          paste2 = ldf paste0;
          p50 = prom<V +>{
            list29 = ld list0;
            list30 = force? list29;
            checkMissing(list30);
            return list30;
          };
          r175 = dyn paste2[, , , collapse]("\"", p50, "\"", ", ");
          return r175;
        };
        r177 = dyn sprintf2("export(%s)", p51);
        return r177;
      };
      r179 = dyn strwrap[, exdent](p52, 7);
      return r179;
    };
    p54 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r182 = dyn writeLines(p53, p54);
    check L256() else D99();
  L258():
    methodsList7 = ld methodsList;
    check L260() else D100();
  L259():
    r184 = dyn base14(<sym methodsList>);
    goto L51(r184);
  D99():
    deopt 346 [r182];
  D100():
    deopt 351 [methodsList7];
  L52():
    goto L53();
  L53():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L268() else L269();
  L256():
    goto L50();
  L260():
    methodsList8 = force? methodsList7;
    checkMissing(methodsList8);
    length5 = ldf length in base;
    r186 = dyn length5(methodsList8);
    check L261() else D101();
  L262():
    cat1 = ldf cat;
    check L263() else D102();
  D101():
    deopt 354 [r186];
  D102():
    deopt 356 [];
  L54(r196):
    c49 = `as.logical`(r196);
    if c49 then L272() else L55();
  L261():
    goto L51(r186);
  L263():
    p55 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r188 = dyn cat1[, file]("exportMethods(\n    ", p55);
    check L264() else D103();
  L268():
    classesList6 = ld classesList;
    check L270() else D106();
  L269():
    r195 = dyn base15(<sym classesList>);
    goto L54(r195);
  D103():
    deopt 360 [r188];
  D106():
    deopt 372 [classesList6];
  L55():
    goto L56();
  L56():
    close1 = ldf close;
    check L278() else D112();
  L264():
    cat2 = ldf cat;
    check L265() else D104();
  L270():
    classesList7 = force? classesList6;
    checkMissing(classesList7);
    length6 = ldf length in base;
    r197 = dyn length6(classesList7);
    check L271() else D107();
  L272():
    cat3 = ldf cat;
    check L273() else D108();
  D104():
    deopt 362 [];
  D107():
    deopt 375 [r197];
  D108():
    deopt 377 [];
  D112():
    deopt 392 [];
  L265():
    p57 = prom<V +>{
      paste3 = ldf paste0;
      p56 = prom<V +>{
        methodsList9 = ld methodsList;
        methodsList10 = force? methodsList9;
        checkMissing(methodsList10);
        return methodsList10;
      };
      r190 = dyn paste3[, , , collapse]("\"", p56, "\"", ",\n    ");
      return r190;
    };
    p58 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r193 = dyn cat2[, , file](p57, "\n)\n", p58);
    check L266() else D105();
  L271():
    goto L54(r197);
  L273():
    p59 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      return out7;
    };
    r199 = dyn cat3[, file]("exportClasses(\n    ", p59);
    check L274() else D109();
  L278():
    p63 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      return out11;
    };
    r207 = dyn close1(p63);
    check L279() else D113();
  D105():
    deopt 367 [r193];
  D109():
    deopt 381 [r199];
  D113():
    deopt 394 [r207];
  L266():
    goto L53();
  L274():
    cat4 = ldf cat;
    check L275() else D110();
  L279():
    message3 = ldf message;
    check L280() else D114();
  D110():
    deopt 383 [];
  D114():
    deopt 396 [];
  L275():
    p61 = prom<V +>{
      paste4 = ldf paste0;
      p60 = prom<V +>{
        classesList8 = ld classesList;
        classesList9 = force? classesList8;
        checkMissing(classesList9);
        return classesList9;
      };
      r201 = dyn paste4[, , , collapse]("\"", p60, "\"", ",\n     ");
      return r201;
    };
    p62 = prom<V +>{
      out8 = ld out;
      out9 = force? out8;
      checkMissing(out9);
      return out9;
    };
    r204 = dyn cat4[, , file](p61, "\n)\n", p62);
    check L276() else D111();
  L280():
    r208 = dyn message3[, domain]("Creating Read-and-delete-me ...", NA_LGL);
    check L281() else D115();
  D111():
    deopt 388 [r204];
  D115():
    deopt 400 [r208];
  L276():
    goto L56();
  L281():
    file2 = ldf file;
    check L282() else D116();
  D116():
    deopt 402 [];
  L282():
    p65 = prom<V +>{
      file_path6 = ldf `file.path`;
      p64 = prom<V +>{
        dir16 = ld dir;
        dir17 = force? dir16;
        checkMissing(dir17);
        return dir17;
      };
      r210 = dyn file_path6(p64, "Read-and-delete-me");
      return r210;
    };
    r212 = dyn file2(p65, "wt");
    check L283() else D117();
  D117():
    deopt 405 [r212];
  L283():
    st out = r212;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L284() else L285();
  L57(r214):
    st msg = r214;
    writeLines1 = ldf writeLines;
    check L287() else D119();
  L284():
    c50 = ldf c in base;
    r215 = dyn c50("* Edit the help file skeletons in 'man', possibly combining help files for multiple functions.", "* Edit the package 'DESCRIPTION'.", "* Edit the exports in 'NAMESPACE', and add necessary imports.", "* Put any C/C++/Fortran code in 'src'.", "* If you have compiled code, add a useDynLib() directive to 'NAMESPACE'.", "* Run R CMD build to build the package tarball.", "* Run R CMD check to check the package tarball.", "", "Read \"Writing R Extensions\" for more information.");
    check L286() else D118();
  L285():
    r213 = dyn base16("* Edit the help file skeletons in 'man', possibly combining help files for multiple functions.", "* Edit the package 'DESCRIPTION'.", "* Edit the exports in 'NAMESPACE', and add necessary imports.", "* Put any C/C++/Fortran code in 'src'.", "* If you have compiled code, add a useDynLib() directive to 'NAMESPACE'.", "* Run R CMD build to build the package tarball.", "* Run R CMD check to check the package tarball.", "", "Read \"Writing R Extensions\" for more information.");
    goto L57(r213);
  D118():
    deopt 419 [r215];
  D119():
    deopt 422 [];
  L286():
    goto L57(r215);
  L287():
    p67 = prom<V +>{
      strwrap1 = ldf strwrap;
      p66 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      r217 = dyn strwrap1[, exdent](p66, 2.0);
      return r217;
    };
    p68 = prom<V +>{
      out12 = ld out;
      out13 = force? out12;
      checkMissing(out13);
      return out13;
    };
    r220 = dyn writeLines1(p67, p68);
    check L288() else D120();
  D120():
    deopt 425 [r220];
  L288():
    close2 = ldf close;
    check L289() else D121();
  D121():
    deopt 427 [];
  L289():
    p69 = prom<V +>{
      out14 = ld out;
      out15 = force? out14;
      checkMissing(out15);
      return out15;
    };
    r222 = dyn close2(p69);
    check L290() else D122();
  D122():
    deopt 429 [r222];
  L290():
    grep = ldf grep;
    check L291() else D123();
  D123():
    deopt 431 [];
  L291():
    p70 = prom<V +>{
      list31 = ld list;
      list32 = force? list31;
      checkMissing(list32);
      return list32;
    };
    r224 = dyn grep("^\\.", p70);
    check L292() else D124();
  D124():
    deopt 434 [r224];
  L292():
    st internalObjInds = r224;
    list33 = ld list;
    check L293() else D125();
  D125():
    deopt 436 [list33];
  L293():
    list34 = force? list33;
    checkMissing(list34);
    c51 = `is.object`(list34);
    if c51 then L294() else L295(list34);
  L58(dx13):
    st internalObjs = dx13;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L298() else L299();
  L294():
    dr10 = tryDispatchBuiltin.1("[", list34);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L296() else L295(dr10);
  L295(list36):
    internalObjInds = ld internalObjInds;
    check L297() else D126();
  D126():
    deopt 438 [list36, internalObjInds];
  L59(r227):
    c52 = `as.logical`(r227);
    if c52 then L302() else L60();
  L296():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L58(dx12);
  L297():
    internalObjInds1 = force? internalObjInds;
    __7 = ldf `[` in base;
    r225 = dyn __7(list36, internalObjInds1);
    goto L58(r225);
  L298():
    internalObjInds2 = ld internalObjInds;
    check L300() else D127();
  L299():
    r226 = dyn base17(<sym internalObjInds>);
    goto L59(r226);
  D127():
    deopt 444 [internalObjInds2];
  L60():
    goto L62();
  L62():
    _fixPackageFileNames2 = ldf `.fixPackageFileNames`;
    check L309() else D131();
  L300():
    internalObjInds3 = force? internalObjInds2;
    checkMissing(internalObjInds3);
    length7 = ldf length in base;
    r228 = dyn length7(internalObjInds3);
    check L301() else D128();
  L302():
    list37 = ld list;
    check L303() else D129();
  D128():
    deopt 447 [r228];
  D129():
    deopt 448 [list37];
  D131():
    deopt 458 [];
  L301():
    goto L59(r228);
  L303():
    list38 = force? list37;
    checkMissing(list38);
    c53 = `is.object`(list38);
    if c53 then L304() else L305(list38);
  L309():
    p71 = prom<V +>{
      list41 = ld list;
      list42 = force? list41;
      checkMissing(list42);
      return list42;
    };
    r232 = dyn _fixPackageFileNames2(p71);
    check L310() else D132();
  D132():
    deopt 460 [r232];
  L61(dx15):
    st list = dx15;
    goto L62();
  L304():
    dr12 = tryDispatchBuiltin.1("[", list38);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L306() else L305(dr12);
  L305(list40):
    internalObjInds4 = ld internalObjInds;
    check L307() else D130();
  L310():
    st list0 = r232;
    list43 = ld list;
    check L311() else D133();
  D130():
    deopt 450 [list40, internalObjInds4];
  D133():
    deopt 462 [list43];
  L306():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L61(dx14);
  L307():
    internalObjInds5 = force? internalObjInds4;
    checkMissing(internalObjInds5);
    r229 = `-`(<missing>, internalObjInds5);
    __8 = ldf `[` in base;
    r230 = dyn __8(list40, r229);
    goto L61(r230);
  L311():
    list44 = force? list43;
    checkMissing(list44);
    l3 = ld list0;
    names__2 = ldf `names<-`;
    check L312() else D134();
  D134():
    deopt 465 [list44, l3, list44];
  L312():
    r233 = dyn names__2(l3, NULL, list44);
    check L313() else D135();
  D135():
    deopt 467 [list44, r233];
  L313():
    st list0 = r233;
    use_code_files4 = ld use_code_files;
    check L314() else D136();
  D136():
    deopt 469 [use_code_files4];
  L314():
    use_code_files5 = force? use_code_files4;
    checkMissing(use_code_files5);
    r234 = `!`(use_code_files5);
    c54 = `as.logical`(r234);
    if c54 then L315() else L63();
  L63():
    message5 = ldf message;
    check L349() else D156();
  L75():
    message6 = ldf message;
    check L380() else D176();
  L315():
    message4 = ldf message;
    check L316() else D137();
  D137():
    deopt 473 [];
  D156():
    deopt 539 [];
  D176():
    deopt 612 [];
  L316():
    r235 = dyn message4[, domain]("Saving functions and data ...", NA_LGL);
    check L317() else D138();
  L349():
    r285 = dyn message5[, domain]("Copying code files ...", NA_LGL);
    check L350() else D157();
  L380():
    r327 = dyn message6[, domain]("Making help files ...", NA_LGL);
    check L381() else D177();
  D138():
    deopt 477 [r235];
  D157():
    deopt 543 [r285];
  D177():
    deopt 616 [r327];
  L317():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L318() else L319();
  L350():
    file_copy = ldf `file.copy`;
    check L351() else D158();
  L381():
    try1 = ldf try;
    check L382() else D178();
  D158():
    deopt 545 [];
  D178():
    deopt 618 [];
  L64(r237):
    c55 = `as.logical`(r237);
    if c55 then L322() else L65();
  L318():
    internalObjInds6 = ld internalObjInds;
    check L320() else D139();
  L319():
    r236 = dyn base18(<sym internalObjInds>);
    goto L64(r236);
  L351():
    p95 = prom<V +>{
      code_files7 = ld code_files;
      code_files8 = force? code_files7;
      checkMissing(code_files8);
      return code_files8;
    };
    p96 = prom<V +>{
      code_dir4 = ld code_dir;
      code_dir5 = force? code_dir4;
      checkMissing(code_dir5);
      return code_dir5;
    };
    r288 = dyn file_copy(p95, p96);
    check L352() else D159();
  L382():
    p125 = prom<V +>{
      suppressMessages = ldf suppressMessages;
      p124 = prom<V +>{
        promptPackage = ldf promptPackage;
        p112 = prom<V +>{
          name11 = ld name;
          name12 = force? name11;
          checkMissing(name12);
          return name12;
        };
        p116 = prom<V +>{
          file_path12 = ldf `file.path`;
          p113 = prom<V +>{
            docs_dir = ld docs_dir;
            docs_dir1 = force? docs_dir;
            checkMissing(docs_dir1);
            return docs_dir1;
          };
          p115 = prom<V +>{
            sprintf6 = ldf sprintf;
            p114 = prom<V +>{
              name13 = ld name;
              name14 = force? name13;
              checkMissing(name14);
              return name14;
            };
            r331 = dyn sprintf6("%s-package.Rd", p114);
            return r331;
          };
          r333 = dyn file_path12(p113, p115);
          return r333;
        };
        p117 = prom<V +>{
          path3 = ld path;
          path4 = force? path3;
          checkMissing(path4);
          return path4;
        };
        dyn promptPackage[, filename, `lib.loc`](p112, p116, p117);
        sapply = ldf sapply;
        p118 = prom<V +>{
          list51 = ld list;
          list52 = force? list51;
          checkMissing(list52);
          return list52;
        };
        p119 = prom<V +>{
          r338 = clos inner4149149171;
          return r338;
        };
        dyn sapply(p118, p119);
        sapply1 = ldf sapply;
        p120 = prom<V +>{
          classesList10 = ld classesList;
          classesList11 = force? classesList10;
          checkMissing(classesList11);
          return classesList11;
        };
        p121 = prom<V +>{
          r342 = clos inner4149149171;
          return r342;
        };
        dyn sapply1(p120, p121);
        sapply2 = ldf sapply;
        p122 = prom<V +>{
          methodsList11 = ld methodsList;
          methodsList12 = force? methodsList11;
          checkMissing(methodsList12);
          return methodsList12;
        };
        p123 = prom<V +>{
          r346 = clos inner4149149171;
          return r346;
        };
        r348 = dyn sapply2(p122, p123);
        return r348;
      };
      r350 = dyn suppressMessages(p124);
      return r350;
    };
    r352 = dyn try1(p125);
    check L383() else D179();
  D139():
    deopt 480 [internalObjInds6];
  D159():
    deopt 548 [r288];
  D179():
    deopt 620 [r352];
  L65():
    goto L66();
  L66():
    list45 = ld list;
    check L326() else D143();
  L320():
    internalObjInds7 = force? internalObjInds6;
    checkMissing(internalObjInds7);
    length8 = ldf length in base;
    r238 = dyn length8(internalObjInds7);
    check L321() else D140();
  L322():
    dump = ldf dump;
    check L323() else D141();
  L352():
    __10 = ldf `::`;
    check L353() else D160();
  L383():
    st yy = r352;
    methodsList13 = ld methodsList;
    check L384() else D180();
  D140():
    deopt 483 [r238];
  D141():
    deopt 485 [];
  D143():
    deopt 494 [list45];
  D160():
    deopt 550 [];
  D180():
    deopt 622 [methodsList13];
  L321():
    goto L64(r238);
  L323():
    p72 = prom<V +>{
      internalObjs = ld internalObjs;
      internalObjs1 = force? internalObjs;
      checkMissing(internalObjs1);
      return internalObjs1;
    };
    p76 = prom<V +>{
      file_path7 = ldf `file.path`;
      p73 = prom<V +>{
        code_dir = ld code_dir;
        code_dir1 = force? code_dir;
        checkMissing(code_dir1);
        return code_dir1;
      };
      p75 = prom<V +>{
        sprintf3 = ldf sprintf;
        p74 = prom<V +>{
          name9 = ld name;
          name10 = force? name9;
          checkMissing(name10);
          return name10;
        };
        r242 = dyn sprintf3("%s-internal.R", p74);
        return r242;
      };
      r244 = dyn file_path7(p73, p75);
      return r244;
    };
    p77 = prom<V +>{
      environment15 = ld environment;
      environment16 = force? environment15;
      checkMissing(environment16);
      return environment16;
    };
    r247 = dyn dump[, file, envir](p72, p76, p77);
    check L324() else D142();
  L326():
    list46 = force? list45;
    checkMissing(list46);
    s1 = toForSeq(list46);
    l4 = length(s1);
    i6 = 0;
    goto L67(i6);
  L353():
    r289 = dyn __10("tools", "list_files_with_type");
    check L354() else D161();
  L384():
    methodsList14 = force? methodsList13;
    checkMissing(methodsList14);
    s2 = toForSeq(methodsList14);
    l5 = length(s2);
    i24 = 0;
    goto L81(i24);
  D142():
    deopt 491 [r247];
  D161():
    deopt 553 [r289];
  L67(i7):
    i8 = `+`.1(i7, 1);
    c56 = `<`.1(l4, i8);
    if c56 then L327() else L74();
  L81(i25):
    i26 = `+`.1(i25, 1);
    c62 = `<`.1(l5, i26);
    if c62 then L385() else L88();
  L324():
    goto L66();
  L354():
    checkFun.0(r289);
    r290 = r289 as cls;
    p97 = prom<V +>{
      code_dir6 = ld code_dir;
      code_dir7 = force? code_dir6;
      checkMissing(code_dir7);
      return code_dir7;
    };
    r292 = dyn r290[, , `full.names`, OS_subdirs](p97, "code", FALSE, "");
    check L355() else D162();
  D162():
    deopt 561 [r292];
  L74():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st item = x1;
    get = ldf get;
    check L328() else D144();
  L88():
    x2 = `[[`(s2, i26, NULL, TRUE);
    st item = x2;
    exists2 = ldf exists;
    check L386() else D181();
  L327():
    goto L75();
  L355():
    st R_files = r292;
    basename = ldf basename;
    check L356() else D163();
  L385():
    sym25 = ldf inherits;
    base25 = ldf inherits in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L405() else L406();
  D144():
    deopt 497 [i8];
  D163():
    deopt 564 [];
  D181():
    deopt 625 [i26];
  L89(r379):
    c75 = `as.logical`(r379);
    if c75 then L409() else L90();
  L328():
    p78 = prom<V +>{
      item = ld item;
      item1 = force? item;
      checkMissing(item1);
      return item1;
    };
    p79 = prom<V +>{
      environment17 = ld environment;
      environment18 = force? environment17;
      checkMissing(environment18);
      return environment18;
    };
    r251 = dyn get[, envir](p78, p79);
    check L329() else D145();
  L356():
    p98 = prom<V +>{
      code_files9 = ld code_files;
      code_files10 = force? code_files9;
      checkMissing(code_files10);
      return code_files10;
    };
    r294 = dyn basename(p98);
    check L357() else D164();
  L386():
    p126 = prom<V +>{
      item12 = ld item;
      item13 = force? item12;
      checkMissing(item13);
      return item13;
    };
    p127 = prom<V +>{
      environment23 = ld environment;
      environment24 = force? environment23;
      checkMissing(environment24);
      return environment24;
    };
    r355 = dyn exists2[, envir, inherits](p126, p127, FALSE);
    check L387() else D182();
  L405():
    yy = ld yy;
    check L407() else D192();
  L406():
    r378 = dyn base25(<sym yy>, "try-error");
    goto L89(r378);
  D145():
    deopt 501 [i8, r251];
  D164():
    deopt 566 [r294];
  D182():
    deopt 631 [i26, r355];
  D192():
    deopt 678 [yy];
  L90():
    goto L91();
  L91():
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L413() else L414();
  L329():
    st objItem = r251;
    sym19 = ldf `is.function`;
    base19 = ldf `is.function` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L330() else L331();
  L357():
    st code_files = r294;
    code_files11 = ld code_files;
    check L358() else D165();
  L387():
    c63 = `as.logical`(r355);
    if c63 then L388() else L82();
  L407():
    yy1 = force? yy;
    checkMissing(yy1);
    inherits = ldf inherits in base;
    r380 = dyn inherits(yy1, "try-error", FALSE);
    check L408() else D193();
  L409():
    stop6 = ldf stop;
    check L410() else D194();
  D165():
    deopt 568 [code_files11];
  D193():
    deopt 683 [r380];
  D194():
    deopt 685 [];
  L68(i13, r253):
    c57 = `as.logical`(r253);
    if c57 then L334() else L69();
  L82():
    goto L87(i26);
  L87(i40):
    goto L81(i40);
  L92(r385):
    r389 = `==`(r385, 0);
    c76 = `as.logical`(r389);
    if c76 then L418() else L93();
  L330():
    objItem = ld objItem;
    check L332() else D146();
  L331():
    r252 = dyn base19(<sym objItem>);
    goto L68(i8, r252);
  L358():
    code_files12 = force? code_files11;
    checkMissing(code_files12);
    c60 = `is.object`(code_files12);
    if c60 then L359() else L360(code_files12);
  L388():
    get1 = ldf get;
    check L389() else D183();
  L408():
    goto L89(r380);
  L410():
    p135 = prom<V +>{
      yy2 = ld yy;
      yy3 = force? yy2;
      checkMissing(yy3);
      return yy3;
    };
    r382 = dyn stop6(p135);
    check L411() else D195();
  L413():
    list_files = ldf `list.files`;
    check L415() else D196();
  L414():
    r384 = dyn base26(<lang list.files(code_dir)>);
    goto L92(r384);
  D146():
    deopt 505 [i8, objItem];
  D183():
    deopt 633 [i26];
  D195():
    deopt 687 [r382];
  D196():
    deopt 693 [];
  L69():
    try = ldf try;
    check L346() else D154();
  L73(i22):
    goto L67(i22);
  L76(dx20):
    st wrong = dx20;
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L370() else L371();
  L93():
    goto L94();
  L94():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L422() else L423();
  L332():
    objItem1 = force? objItem;
    checkMissing(objItem1);
    is_function = ldf `is.function` in base;
    r254 = dyn is_function(objItem1);
    check L333() else D147();
  L334():
    sym20 = ldf isS4;
    base20 = ldf isS4 in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L335() else L336();
  L359():
    dr16 = tryDispatchBuiltin.1("[", code_files12);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L361() else L360(dr16);
  L360(code_files14):
    sym21 = ldf `is.na`;
    base21 = ldf `is.na` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L362() else L363();
  L389():
    p128 = prom<V +>{
      item14 = ld item;
      item15 = force? item14;
      checkMissing(item15);
      return item15;
    };
    p129 = prom<V +>{
      environment25 = ld environment;
      environment26 = force? environment25;
      checkMissing(environment26);
      return environment26;
    };
    r358 = dyn get1[, envir](p128, p129);
    check L390() else D184();
  L411():
    goto L91();
  L415():
    p136 = prom<V +>{
      code_dir14 = ld code_dir;
      code_dir15 = force? code_dir14;
      checkMissing(code_dir15);
      return code_dir15;
    };
    r387 = dyn list_files(p136);
    check L416() else D197();
  L418():
    unlink = ldf unlink;
    check L419() else D199();
  D147():
    deopt 508 [i8, r254];
  D154():
    deopt 532 [i13];
  D184():
    deopt 637 [i26, r358];
  D197():
    deopt 695 [r387];
  D199():
    deopt 701 [];
  L70(i18, r256):
    c58 = `as.logical`(r256);
    if c58 then L339() else L71();
  L77(code_files17, r296):
    __11 = ldf `[` in base;
    r301 = dyn __11(code_files17, r296);
    goto L76(r301);
  L79(r303):
    c61 = `as.logical`(r303);
    if c61 then L374() else L80();
  L95(r394):
    r398 = `==`(r394, 0);
    c77 = `as.logical`(r398);
    if c77 then L427() else L96();
  L333():
    goto L68(i8, r254);
  L335():
    objItem2 = ld objItem;
    check L337() else D148();
  L336():
    r255 = dyn base20(<sym objItem>);
    goto L70(i13, r255);
  L346():
    p94 = prom<V +>{
      save = ldf save;
      p88 = prom<V +>{
        item8 = ld item;
        item9 = force? item8;
        checkMissing(item9);
        return item9;
      };
      p89 = prom<V +>{
        environment21 = ld environment;
        environment22 = force? environment21;
        checkMissing(environment22);
        return environment22;
      };
      p93 = prom<V +>{
        file_path9 = ldf `file.path`;
        p90 = prom<V +>{
          data_dir = ld data_dir;
          data_dir1 = force? data_dir;
          checkMissing(data_dir1);
          return data_dir1;
        };
        p92 = prom<V +>{
          sprintf5 = ldf sprintf;
          p91 = prom<V +>{
            item10 = ld item;
            item11 = force? item10;
            checkMissing(item11);
            return item11;
          };
          r278 = dyn sprintf5("%s.rda", p91);
          return r278;
        };
        r280 = dyn file_path9(p90, p92);
        return r280;
      };
      r282 = dyn save[list, envir, file](p88, p89, p93);
      return r282;
    };
    r284 = dyn try(p94);
    check L347() else D155();
  L361():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L76(dx19);
  L362():
    sym22 = ldf match;
    base22 = ldf match in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L364() else L365();
  L363():
    r295 = dyn base21(<lang match(code_files, R_files)>);
    goto L77(code_files14, r295);
  L370():
    wrong = ld wrong;
    check L372() else D170();
  L371():
    r302 = dyn base23(<sym wrong>);
    goto L79(r302);
  L390():
    st ff = r358;
    __12 = ldf `::`;
    check L391() else D185();
  L416():
    length10 = ldf length in base;
    r388 = dyn length10(r387);
    check L417() else D198();
  L419():
    p137 = prom<V +>{
      code_dir16 = ld code_dir;
      code_dir17 = force? code_dir16;
      checkMissing(code_dir17);
      return code_dir17;
    };
    r391 = dyn unlink[, recursive](p137, TRUE);
    check L420() else D200();
  L422():
    list_files1 = ldf `list.files`;
    check L424() else D201();
  L423():
    r393 = dyn base27(<lang list.files(data_dir)>);
    goto L95(r393);
  D148():
    deopt 511 [i13, objItem2];
  D155():
    deopt 534 [i13, r284];
  D170():
    deopt 588 [wrong];
  D185():
    deopt 640 [i26];
  D198():
    deopt 697 [r388];
  D200():
    deopt 705 [r391];
  D201():
    deopt 711 [];
  L71():
    goto L72(i18);
  L72(i21):
    dump1 = ldf dump;
    check L343() else D152();
  L78(code_files20, r298):
    is_na = ldf `is.na` in base;
    r300 = dyn is_na(r298);
    check L369() else D169();
  L80():
    goto L75();
  L96():
    goto L97();
  L97():
    message7 = ldf message;
    check L431() else D206();
  L337():
    objItem3 = force? objItem2;
    checkMissing(objItem3);
    isS4 = ldf isS4 in base;
    r257 = dyn isS4(objItem3);
    check L338() else D149();
  L339():
    stop5 = ldf stop;
    check L340() else D150();
  L347():
    goto L73(i13);
  L364():
    code_files21 = ld code_files;
    check L366() else D166();
  L365():
    r297 = dyn base22(<sym code_files>, <sym R_files>);
    goto L78(code_files14, r297);
  L372():
    wrong1 = force? wrong;
    checkMissing(wrong1);
    length9 = ldf length in base;
    r304 = dyn length9(wrong1);
    check L373() else D171();
  L374():
    warning1 = ldf warning;
    check L375() else D172();
  L391():
    r359 = dyn __12("methods", "is");
    check L392() else D186();
  L417():
    goto L92(r388);
  L420():
    goto L94();
  L424():
    p138 = prom<V +>{
      data_dir2 = ld data_dir;
      data_dir3 = force? data_dir2;
      checkMissing(data_dir3);
      return data_dir3;
    };
    r396 = dyn list_files1(p138);
    check L425() else D202();
  L427():
    unlink1 = ldf unlink;
    check L428() else D204();
  D149():
    deopt 514 [i13, r257];
  D150():
    deopt 516 [i18];
  D152():
    deopt 524 [i21];
  D166():
    deopt 574 [code_files14, code_files21];
  D169():
    deopt 583 [code_files20, r300];
  D171():
    deopt 591 [r304];
  D172():
    deopt 593 [];
  D186():
    deopt 643 [i26, r359];
  D202():
    deopt 713 [r396];
  D204():
    deopt 719 [];
  D206():
    deopt 727 [];
  L338():
    goto L70(i13, r257);
  L340():
    p81 = prom<V +>{
      gettextf1 = ldf gettextf;
      p80 = prom<V +>{
        item2 = ld item;
        item3 = force? item2;
        checkMissing(item3);
        return item3;
      };
      r259 = dyn gettextf1("generic functions and other S4 objects (e.g., '%s') cannot be dumped; use the 'code_files' argument", p80);
      return r259;
    };
    r261 = dyn stop5[, domain](p81, NA_LGL);
    check L341() else D151();
  L343():
    p82 = prom<V +>{
      item4 = ld item;
      item5 = force? item4;
      checkMissing(item5);
      return item5;
    };
    p86 = prom<V +>{
      file_path8 = ldf `file.path`;
      p83 = prom<V +>{
        code_dir2 = ld code_dir;
        code_dir3 = force? code_dir2;
        checkMissing(code_dir3);
        return code_dir3;
      };
      p85 = prom<V +>{
        sprintf4 = ldf sprintf;
        p84 = prom<V +>{
          list47 = ld list0;
          list48 = force? list47;
          checkMissing(list48);
          c59 = `is.object`(list48);
          if c59 then L1() else L2(list48);
        L0(dx18):
          return dx18;
        L1():
          dr14 = tryDispatchBuiltin.1("[", list48);
          dc7 = getTryDispatchBuiltinDispatched(dr14);
          if dc7 then L3() else L2(dr14);
        L2(list50):
          item6 = ld item;
          item7 = force? item6;
          __9 = ldf `[` in base;
          r265 = dyn __9(list50, item7);
          goto L0(r265);
        L3():
          dx17 = getTryDispatchBuiltinValue(dr14);
          goto L0(dx17);
        };
        r267 = dyn sprintf4("%s.R", p84);
        return r267;
      };
      r269 = dyn file_path8(p83, p85);
      return r269;
    };
    p87 = prom<V +>{
      environment19 = ld environment;
      environment20 = force? environment19;
      checkMissing(environment20);
      return environment20;
    };
    r272 = dyn dump1[, file, envir](p82, p86, p87);
    check L344() else D153();
  L366():
    code_files22 = force? code_files21;
    checkMissing(code_files22);
    R_files = ld R_files;
    check L367() else D167();
  L369():
    goto L77(code_files20, r300);
  L373():
    goto L79(r304);
  L375():
    p99 = prom<V +>{
      code_dir8 = ld code_dir;
      code_dir9 = force? code_dir8;
      checkMissing(code_dir9);
      return code_dir9;
    };
    p103 = prom<V +>{
      strwrap2 = ldf strwrap;
      p102 = prom<V +>{
        paste5 = ldf paste;
        p101 = prom<V +>{
          sQuote1 = ldf sQuote;
          p100 = prom<V +>{
            wrong2 = ld wrong;
            wrong3 = force? wrong2;
            checkMissing(wrong3);
            return wrong3;
          };
          r307 = dyn sQuote1(p100);
          return r307;
        };
        r309 = dyn paste5[, collapse](p101, ", ");
        return r309;
      };
      r311 = dyn strwrap2[, indent](p102, 2.0);
      return r311;
    };
    r313 = dyn warning1[, , , , , domain]("Invalid file name(s) for R code in ", p99, ":\n", p103, "\n are now renamed to 'z<name>.R'", NA_LGL);
    check L376() else D173();
  L392():
    checkFun.0(r359);
    r360 = r359 as cls;
    p130 = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    r362 = dyn r360(p130, "genericFunction");
    check L393() else D187();
  L425():
    length11 = ldf length in base;
    r397 = dyn length11(r396);
    check L426() else D203();
  L428():
    p139 = prom<V +>{
      data_dir4 = ld data_dir;
      data_dir5 = force? data_dir4;
      checkMissing(data_dir5);
      return data_dir5;
    };
    r400 = dyn unlink1[, recursive](p139, TRUE);
    check L429() else D205();
  L431():
    r402 = dyn message7[, domain]("Done.", NA_LGL);
    check L432() else D207();
  D151():
    deopt 520 [i18, r261];
  D153():
    deopt 530 [i21, r272];
  D167():
    deopt 576 [code_files14, R_files];
  D173():
    deopt 601 [r313];
  D187():
    deopt 647 [i26, r362];
  D203():
    deopt 715 [r397];
  D205():
    deopt 723 [r400];
  D207():
    deopt 731 [r402];
  L341():
    goto L72(i18);
  L344():
    goto L73(i21);
  L367():
    R_files1 = force? R_files;
    checkMissing(R_files1);
    match = ldf match in base;
    r299 = dyn match(code_files22, R_files1, NA_INT, NULL);
    check L368() else D168();
  L376():
    file_rename = ldf `file.rename`;
    check L377() else D174();
  L393():
    c64 = `as.logical`(r362);
    if c64 then L394() else L83(i26, c64);
  L426():
    goto L95(r397);
  L429():
    goto L97();
  L432():
    message8 = ldf message;
    check L433() else D208();
  D168():
    deopt 581 [code_files14, r299];
  D174():
    deopt 603 [];
  D208():
    deopt 733 [];
  L83(i32, c66):
    c73 = `as.logical`(c66);
    if c73 then L400() else L85();
  L368():
    goto L78(code_files14, r299);
  L377():
    p106 = prom<V +>{
      file_path10 = ldf `file.path`;
      p104 = prom<V +>{
        code_dir10 = ld code_dir;
        code_dir11 = force? code_dir10;
        checkMissing(code_dir11);
        return code_dir11;
      };
      p105 = prom<V +>{
        wrong4 = ld wrong;
        wrong5 = force? wrong4;
        checkMissing(wrong5);
        return wrong5;
      };
      r316 = dyn file_path10(p104, p105);
      return r316;
    };
    p111 = prom<V +>{
      file_path11 = ldf `file.path`;
      p107 = prom<V +>{
        code_dir12 = ld code_dir;
        code_dir13 = force? code_dir12;
        checkMissing(code_dir13);
        return code_dir13;
      };
      p110 = prom<V +>{
        paste6 = ldf paste0;
        p109 = prom<V +>{
          sub = ldf sub;
          p108 = prom<V +>{
            wrong6 = ld wrong;
            wrong7 = force? wrong6;
            checkMissing(wrong7);
            return wrong7;
          };
          r320 = dyn sub("(\\.[^.]*)?$", ".R", p108);
          return r320;
        };
        r322 = dyn paste6("z", p109);
        return r322;
      };
      r324 = dyn file_path11(p107, p110);
      return r324;
    };
    r326 = dyn file_rename[from, to](p106, p111);
    check L378() else D175();
  L394():
    sym24 = ldf identical;
    base24 = ldf identical in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L395() else L396();
  L433():
    p142 = prom<V +>{
      sprintf8 = ldf sprintf;
      p141 = prom<V +>{
        file_path14 = ldf `file.path`;
        p140 = prom<V +>{
          dir18 = ld dir;
          dir19 = force? dir18;
          checkMissing(dir19);
          return dir19;
        };
        r404 = dyn file_path14(p140, "Read-and-delete-me");
        return r404;
      };
      r406 = dyn sprintf8("Further steps are described in '%s'.", p141);
      return r406;
    };
    r408 = dyn message8[, domain](p142, NA_LGL);
    check L434() else D209();
  D175():
    deopt 608 [r326];
  D209():
    deopt 737 [r408];
  L84(i35, c69, r364):
    r367 = `!`(r364);
    c70 = `as.logical`(r367);
    c71 = `&&`(c69, c70);
    goto L83(i35, c71);
  L85():
    goto L86(i32, NULL);
  L86(i39, r376):
    goto L87(i39);
  L378():
    goto L75();
  L395():
    __13 = ldf `@` in base;
    r365 = dyn __13(<sym ff>, <sym package>);
    name15 = ld name;
    check L397() else D188();
  L396():
    r363 = dyn base24(<lang `@`(ff, package)>, <sym name>);
    goto L84(i26, c64, r363);
  L400():
    file_remove = ldf `file.remove`;
    check L401() else D190();
  L434():
    popenv;
    return r408;
  D188():
    deopt 652 [i26, c64, name15];
  D190():
    deopt 666 [i32];
  L397():
    name16 = force? name15;
    checkMissing(name16);
    identical1 = ldf identical in base;
    r366 = dyn identical1(r365, name16, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L398() else D189();
  L401():
    p134 = prom<V +>{
      file_path13 = ldf `file.path`;
      p131 = prom<V +>{
        docs_dir2 = ld docs_dir;
        docs_dir3 = force? docs_dir2;
        checkMissing(docs_dir3);
        return docs_dir3;
      };
      p133 = prom<V +>{
        sprintf7 = ldf sprintf;
        p132 = prom<V +>{
          list53 = ld list0;
          list54 = force? list53;
          checkMissing(list54);
          c74 = `is.object`(list54);
          if c74 then L1() else L2(list54);
        L0(dx22):
          return dx22;
        L1():
          dr18 = tryDispatchBuiltin.1("[", list54);
          dc9 = getTryDispatchBuiltinDispatched(dr18);
          if dc9 then L3() else L2(dr18);
        L2(list56):
          item16 = ld item;
          item17 = force? item16;
          __14 = ldf `[` in base;
          r369 = dyn __14(list56, item17);
          goto L0(r369);
        L3():
          dx21 = getTryDispatchBuiltinValue(dr18);
          goto L0(dx21);
        };
        r371 = dyn sprintf7("%s.Rd", p132);
        return r371;
      };
      r373 = dyn file_path13(p131, p133);
      return r373;
    };
    r375 = dyn file_remove(p134);
    check L402() else D191();
  D189():
    deopt 662 [i26, c64, r366];
  D191():
    deopt 668 [i32, r375];
  L398():
    goto L84(i26, c64, r366);
  L402():
    goto L86(i32, r375);
  }
}
fun inner3006846853(path) {
  (reg path:*) -+> V { var path:*, reg dir_exists:cls, reg path1:*, reg path2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg c2:V, reg dir_create:cls, reg path3:*, reg path4:V, reg p1:p(V +), reg r4:V, reg r5:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg gettextf:cls, reg path5:*, reg path6:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st path = path;
    dir_exists = ldf `dir.exists`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      path1 = ld path;
      path2 = force? path1;
      checkMissing(path2);
      return path2;
    };
    r1 = dyn dir_exists(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L4() else L0(c);
  L0(c2):
    c6 = `as.logical`(c2);
    if c6 then L8() else L1();
  L4():
    dir_create = ldf `dir.create`;
    check L5() else D2();
  D2():
    deopt 6 [c];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L5():
    p1 = prom<V +>{
      path3 = ld path;
      path4 = force? path3;
      checkMissing(path4);
      return path4;
    };
    r4 = dyn dir_create(p1);
    check L6() else D3();
  L8():
    stop = ldf stop;
    check L9() else D4();
  D3():
    deopt 8 [c, r4];
  D4():
    deopt 12 [];
  L6():
    r5 = `!`(r4);
    c3 = `as.logical`(r5);
    c4 = `&&`(c, c3);
    goto L0(c4);
  L9():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        path5 = ld path;
        path6 = force? path5;
        checkMissing(path6);
        return path6;
      };
      r7 = dyn gettextf("cannot create directory '%s'", p2);
      return r7;
    };
    r9 = dyn stop[, domain](p3, NA_LGL);
    check L10() else D5();
  D5():
    deopt 16 [r9];
  L10():
    popenv;
    return r9;
  }
}
fun inner4149149171(item) {
  (reg item:*) -+> V { var item:*, reg prompt:cls, reg get:cls, reg item1:*, reg item2:V, reg p:p(V +), reg environment:*, reg environment1:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg item3:*, reg item4:V, reg p3:p(V +), reg file_path:cls, reg docs_dir:*, reg docs_dir1:V, reg p4:p(V +), reg sprintf:cls, reg list0:*, reg list1:V, reg c:L, reg list3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg item5:*, reg item6:V, reg __:cls, reg r6:V, reg p5:p(V +), reg r8:V, reg p6:p(V +), reg r10:V, reg p7:p(V +), reg r12:V |
    mkenv;
    st item = item;
    prompt = ldf prompt;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      get = ldf get;
      p = prom<V +>{
        item1 = ld item;
        item2 = force? item1;
        checkMissing(item2);
        return item2;
      };
      p1 = prom<V +>{
        environment = ld environment;
        environment1 = force? environment;
        checkMissing(environment1);
        return environment1;
      };
      r2 = dyn get[, envir](p, p1);
      return r2;
    };
    p3 = prom<V +>{
      item3 = ld item;
      item4 = force? item3;
      checkMissing(item4);
      return item4;
    };
    p7 = prom<V +>{
      file_path = ldf `file.path`;
      p4 = prom<V +>{
        docs_dir = ld docs_dir;
        docs_dir1 = force? docs_dir;
        checkMissing(docs_dir1);
        return docs_dir1;
      };
      p6 = prom<V +>{
        sprintf = ldf sprintf;
        p5 = prom<V +>{
          list0 = ld list0;
          list1 = force? list0;
          checkMissing(list1);
          c = `is.object`(list1);
          if c then L1() else L2(list1);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", list1);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(list3):
          item5 = ld item;
          item6 = force? item5;
          __ = ldf `[` in base;
          r6 = dyn __(list3, item6);
          goto L0(r6);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r8 = dyn sprintf("%s.Rd", p5);
        return r8;
      };
      r10 = dyn file_path(p4, p6);
      return r10;
    };
    r12 = dyn prompt[, name, filename](p2, p3, p7);
    check L1() else D1();
  D1():
    deopt 7 [r12];
  L1():
    popenv;
    return r12;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg r:V |
    mkenv;
    st x = x;
    st y = y;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L1() else D1();
  D1():
    deopt 1 [x2, y1];
  L1():
    y2 = force? y1;
    checkMissing(y2);
    r = `+`(x2, y2);
    popenv;
    return r;
  }
}