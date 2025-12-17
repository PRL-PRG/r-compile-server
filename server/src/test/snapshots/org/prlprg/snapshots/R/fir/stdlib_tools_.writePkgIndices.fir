fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner986018019;
    st `.writePkgIndices` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner986018019(dir, outDir, OS, html) {
  (reg dir:*, reg outDir:*, reg OS:*, reg html:*) -+> V { var dir:*, var outDir:*, var OS:*, reg OS_isMissing:L, reg OS_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), var html:*, reg html_isMissing:L, reg html_orDefault:*, reg r2:cls, reg r3:cls, reg r4:cls, reg file_exists:cls, reg file_path:cls, reg outDir1:*, reg outDir2:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg c1:L, reg readRDS:cls, reg f:*, reg f1:V, reg p3:p(V +), reg r10:V, reg r11:V, reg tryCatch:cls, reg Rd_db:cls, reg basename:cls, reg outDir3:*, reg outDir4:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg dirname:cls, reg outDir5:*, reg outDir6:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg p8:p(V +), reg r20:cls, reg p9:p(V +), reg r22:V, reg sym:cls, reg base:cls, reg guard:L, reg r23:V, reg r24:V, reg db:*, reg db1:V, reg c2:V, reg c3:L, reg Rd_db1:cls, reg dir1:*, reg dir2:V, reg p10:p(V +), reg r26:V, reg Rd_contents:cls, reg db2:*, reg db3:V, reg p11:p(V +), reg r29:V, reg saveRDS:cls, reg Rd:*, reg Rd1:V, reg p12:p(V +), reg file_path1:cls, reg outDir7:*, reg outDir8:V, reg p13:p(V +), reg r32:V, reg p14:p(V +), reg r34:V, reg Rd2:*, reg Rd3:V, reg Rd4:*, reg Rd5:V, reg c4:L, reg Rd7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r35:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r36:V, reg r37:V, reg topics:*, reg topics1:V, reg length:cls, reg r38:V, reg r39:V, reg c5:L, reg list2DF:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg character:cls, reg r42:V, reg character1:cls, reg r43:V, reg character2:cls, reg r44:V, reg character3:cls, reg r45:V, reg list:cls, reg r46:V, reg p15:p(V +), reg r48:V, reg r49:V, reg lengths:cls, reg topics2:*, reg topics3:V, reg p16:p(V +), reg r51:V, reg sub:cls, reg Rd8:*, reg Rd9:V, reg c6:L, reg Rd11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r52:V, reg p17:p(V +), reg r54:V, reg vapply:cls, reg Rd12:*, reg Rd13:V, reg c7:L, reg Rd15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r55:V, reg p18:p(V +), reg r57:cls, reg p19:p(V +), reg r59:V, reg r60:V, reg list2DF1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r61:V, reg r62:V, reg unlist:cls, reg topics4:*, reg topics5:V, reg p20:p(V +), reg r64:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r65:V, reg r66:V, reg files:*, reg files1:V, reg lens:*, reg lens1:V, reg rep_int:cls, reg r67:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r68:V, reg r69:V, reg Rd16:*, reg Rd17:V, reg c8:L, reg Rd19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r70:V, reg lens2:*, reg lens3:V, reg rep_int1:cls, reg r71:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r72:V, reg r73:V, reg internal:*, reg internal1:V, reg lens4:*, reg lens5:V, reg rep_int2:cls, reg r74:V, reg list1:cls, reg r75:V, reg p21:p(V +), reg r77:V, reg file_path2:cls, reg outDir9:*, reg outDir10:V, reg p22:p(V +), reg r79:V, reg dir_create:cls, reg outman:*, reg outman1:V, reg p23:p(V +), reg r81:V, reg M:*, reg M1:V, reg c9:L, reg M3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg re:cls, reg M4:*, reg M5:V, reg c10:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __:cls, reg r82:V, reg p24:p(V +), reg r84:V, reg __1:cls, reg r85:V, reg __2:cls, reg r86:V, reg r87:cls, reg MM:*, reg MM1:V, reg p25:p(V +), reg file_path3:cls, reg outman2:*, reg outman3:V, reg p26:p(V +), reg r90:V, reg p27:p(V +), reg r92:V, reg structure:cls, reg MM2:*, reg MM3:V, reg c11:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __3:cls, reg r93:V, reg p28:p(V +), reg MM6:*, reg MM7:V, reg c12:L, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __4:cls, reg r95:V, reg p29:p(V +), reg r97:V, reg saveRDS1:cls, reg a:*, reg a1:V, reg p30:p(V +), reg file_path4:cls, reg outman4:*, reg outman5:V, reg p31:p(V +), reg r100:V, reg p32:p(V +), reg r102:V, reg file_path5:cls, reg outDir11:*, reg outDir12:V, reg p33:p(V +), reg r104:V, reg dir_create1:cls, reg outman6:*, reg outman7:V, reg p34:p(V +), reg r106:V, reg file:cls, reg file_path6:cls, reg outman8:*, reg outman9:V, reg p35:p(V +), reg r108:V, reg p36:p(V +), reg r110:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r111:V, reg on_exit:cls, reg r113:V, reg read_dcf:cls, reg file_path7:cls, reg outDir13:*, reg outDir14:V, reg p37:p(V +), reg r115:V, reg p38:p(V +), reg r117:V, reg c13:L, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __5:cls, reg r120:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r121:V, reg r122:V, reg desc:*, reg desc1:V, reg c14:L, reg desc3:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __6:cls, reg r123:V, reg is_na:cls, reg r124:V, reg r125:V, reg c15:L, reg iconv:cls, reg desc4:*, reg desc5:V, reg p39:p(V +), reg enc:*, reg enc1:V, reg p40:p(V +), reg r128:V, reg M8:*, reg M9:V, reg c16:L, reg M11:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg M12:*, reg M13:V, reg c17:L, reg M16:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg __7:cls, reg r130:V, reg r131:V, reg __8:cls, reg r132:V, reg _in_:cls, reg desc6:*, reg desc7:V, reg c18:L, reg desc9:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg __9:cls, reg r133:V, reg p41:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r135:V, reg r136:V, reg c19:cls, reg r137:V, reg p42:p(V +), reg r139:V, reg c20:L, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c21:L, reg x:V, reg gsub:cls, reg M20:*, reg M21:V, reg c22:L, reg M23:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r140:V, reg p43:p(V +), reg r142:V, reg sub1:cls, reg gen:*, reg gen1:V, reg p44:p(V +), reg r144:V, reg sub2:cls, reg gen2:*, reg gen3:V, reg p45:p(V +), reg r146:V, reg sub3:cls, reg gen4:*, reg gen5:V, reg p46:p(V +), reg r148:V, reg sub4:cls, reg gen6:*, reg gen7:V, reg p47:p(V +), reg r150:V, reg nrow:cls, reg M24:*, reg M25:V, reg p48:p(V +), reg r152:V, reg _in_1:cls, reg gen8:*, reg gen9:V, reg p49:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r154:V, reg r155:V, reg c23:cls, reg r156:V, reg p50:p(V +), reg r158:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r159:V, reg i7:I, reg r160:V, reg gen10:*, reg gen11:V, reg nchar:cls, reg r161:V, reg nc:*, reg nc1:V, reg r162:V, reg endsWith:cls, reg gen12:*, reg gen13:V, reg p51:p(V +), reg r164:V, reg r165:V, reg gen14:*, reg gen15:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r166:V, reg i10:I, reg gen18:V, reg r167:V, reg gen19:*, reg gen20:V, reg c24:L, reg i12:I, reg gen23:V, reg gen24:V, reg dr30:V, reg dc15:L, reg dx30:V, reg i14:I, reg gen26:V, reg dx31:V, reg last:*, reg last1:V, reg r168:V, reg __10:cls, reg r169:V, reg c25:cls, reg r170:V, reg r171:V, reg M26:*, reg M27:V, reg c26:L, reg i16:I, reg r173:V, reg M29:V, reg dr32:V, reg dc16:L, reg dx32:V, reg i18:I, reg r175:V, reg dx33:V, reg r176:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r179:V, reg i21:I, reg r180:V, reg dx36:V, reg r181:V, reg M30:*, reg M31:V, reg c27:L, reg i23:I, reg r183:V, reg dx38:V, reg M33:V, reg dr34:V, reg dc17:L, reg dx40:V, reg i25:I, reg r185:V, reg dx41:V, reg dx42:V, reg r186:V, reg c28:L, reg i27:I, reg r188:V, reg dx45:V, reg dx46:V, reg dr36:V, reg dc18:L, reg dx48:V, reg i29:I, reg r190:V, reg dx49:V, reg dx50:V, reg last2:*, reg last3:V, reg r191:V, reg __11:cls, reg r192:V, reg c29:cls, reg r193:V, reg r194:V, reg r195:V, reg nongen:*, reg nongen1:V, reg r196:V, reg r197:V, reg skip:*, reg skip1:V, reg asg:*, reg asg1:V, reg r198:V, reg M34:*, reg M35:V, reg c30:L, reg i31:I, reg M37:V, reg dr38:V, reg dc19:L, reg dx51:V, reg i33:I, reg dx52:V, reg skip2:*, reg skip3:V, reg r199:V, reg __12:cls, reg r200:V, reg sub5:cls, reg M38:*, reg M39:V, reg c31:L, reg M41:V, reg dr40:V, reg dc20:L, reg dx53:V, reg dx54:V, reg r201:V, reg p52:p(V +), reg r203:V, reg l1:*, reg c32:L, reg r205:V, reg l3:*, reg dr42:V, reg dc21:L, reg dx55:V, reg dx56:V, reg r208:V, reg M42:*, reg M43:V, reg c33:L, reg M45:V, reg dr44:V, reg dc22:L, reg dx57:V, reg dx58:V, reg duplicated:cls, reg M46:*, reg M47:V, reg c34:L, reg M49:V, reg dr46:V, reg dc23:L, reg dx59:V, reg dx60:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r209:V, reg r210:V, reg c35:cls, reg r211:V, reg __13:cls, reg r212:V, reg p53:p(V +), reg r214:V, reg r215:V, reg __14:cls, reg r216:V, reg M53:*, reg M54:V, reg c36:L, reg M56:V, reg dr48:V, reg dc24:L, reg dx61:V, reg dx62:V, reg re1:cls, reg M57:*, reg M58:V, reg c37:L, reg dr50:V, reg dc25:L, reg dx63:V, reg dx64:V, reg __15:cls, reg r217:V, reg p54:p(V +), reg r219:V, reg __16:cls, reg r220:V, reg r221:cls, reg htmlize:cls, reg M61:*, reg M62:V, reg c38:L, reg M64:V, reg dr52:V, reg dc26:L, reg dx65:V, reg dx66:V, reg r222:V, reg p55:p(V +), reg r224:V, reg l4:*, reg c39:L, reg r226:V, reg l6:*, reg dr54:V, reg dc27:L, reg dx67:V, reg dx68:V, reg r229:V, reg htmlize1:cls, reg M65:*, reg M66:V, reg c40:L, reg M68:V, reg dr56:V, reg dc28:L, reg dx69:V, reg dx70:V, reg r230:V, reg p56:p(V +), reg r232:V, reg l7:*, reg c41:L, reg r234:V, reg l9:*, reg dr58:V, reg dc29:L, reg dx71:V, reg dx72:V, reg r237:V, reg html_header:cls, reg desc10:*, reg desc11:V, reg c42:L, reg desc13:V, reg dr60:V, reg dc30:L, reg dx73:V, reg dx74:V, reg __17:cls, reg r238:V, reg p57:p(V +), reg htmlize2:cls, reg desc14:*, reg desc15:V, reg c43:L, reg desc17:V, reg dr62:V, reg dc31:L, reg dx75:V, reg dx76:V, reg __18:cls, reg r240:V, reg p58:p(V +), reg r242:V, reg p59:p(V +), reg desc18:*, reg desc19:V, reg c44:L, reg desc21:V, reg dr64:V, reg dc32:L, reg dx77:V, reg dx78:V, reg __19:cls, reg r244:V, reg p60:p(V +), reg outcon:*, reg outcon1:V, reg p61:p(V +), reg r247:V, reg nrow1:cls, reg M69:*, reg M70:V, reg p62:p(V +), reg r249:V, reg r250:V, reg use_alpha:*, reg use_alpha1:V, reg c45:L, reg firstLetterCategory:cls, reg M71:*, reg M72:V, reg c46:L, reg M74:V, reg dr66:V, reg dc33:L, reg dx79:V, reg dx80:V, reg r251:V, reg p63:p(V +), reg r253:V, reg sort:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r254:V, reg r255:V, reg table:cls, reg first:*, reg first1:V, reg p64:p(V +), reg r257:V, reg names:cls, reg r258:V, reg p65:p(V +), reg r260:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r261:V, reg r262:V, reg nm:*, reg nm1:V, reg match:cls, reg r263:V, reg m:*, reg m1:V, reg c47:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r264:V, reg r265:V, reg nm2:*, reg nm3:V, reg c48:L, reg nm5:V, reg dr68:V, reg dc34:L, reg dx81:V, reg dx82:V, reg m2:*, reg m3:V, reg r266:V, reg __20:cls, reg r267:V, reg c49:cls, reg r268:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r270:V, reg r271:V, reg nm6:*, reg nm7:V, reg match1:cls, reg r272:V, reg m4:*, reg m5:V, reg c50:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r273:V, reg r274:V, reg nm8:*, reg nm9:V, reg c51:L, reg nm11:V, reg dr70:V, reg dc35:L, reg dx83:V, reg dx84:V, reg m6:*, reg m7:V, reg r275:V, reg __21:cls, reg r276:V, reg c52:cls, reg r277:V, reg writeLines:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r279:V, reg r280:V, reg paste0:cls, reg nm12:*, reg nm13:V, reg p66:p(V +), reg nm14:*, reg nm15:V, reg p67:p(V +), reg r283:V, reg c53:cls, reg r284:V, reg p68:p(V +), reg outcon2:*, reg outcon3:V, reg p69:p(V +), reg r287:V, reg nm16:*, reg nm17:V, reg s1:V, reg l10:I, reg i35:I, reg i36:I, reg i37:I, reg c54:L, reg x1:V, reg M75:*, reg M76:V, reg c55:L, reg i41:I, reg M78:V, reg dr72:V, reg dc36:L, reg dx85:V, reg i43:I, reg dx86:V, reg first2:*, reg first3:V, reg f2:*, reg f3:V, reg r288:V, reg __22:cls, reg r289:V, reg f4:*, reg f5:V, reg r290:V, reg c56:L, reg cat:cls, reg f6:*, reg f7:V, reg p70:p(V +), reg f8:*, reg f9:V, reg p71:p(V +), reg outcon4:*, reg outcon5:V, reg p72:p(V +), reg r294:V, reg i46:I, reg writeLines1:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r296:V, reg r297:V, reg paste1:cls, reg MM10:*, reg MM11:V, reg c57:L, reg dr74:V, reg dc37:L, reg dx87:V, reg dx88:V, reg __23:cls, reg r298:V, reg p73:p(V +), reg MM14:*, reg MM15:V, reg c58:L, reg MM17:V, reg dr76:V, reg dc38:L, reg dx89:V, reg dx90:V, reg r300:V, reg p74:p(V +), reg MM18:*, reg MM19:V, reg c59:L, reg dr78:V, reg dc39:L, reg dx91:V, reg dx92:V, reg __24:cls, reg r302:V, reg p75:p(V +), reg r304:V, reg c60:cls, reg r305:V, reg p76:p(V +), reg outcon6:*, reg outcon7:V, reg p77:p(V +), reg r308:V, reg nrow2:cls, reg M79:*, reg M80:V, reg p78:p(V +), reg r310:V, reg c61:L, reg writeLines2:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r311:V, reg r312:V, reg paste2:cls, reg M81:*, reg M82:V, reg c62:L, reg dr80:V, reg dc40:L, reg dx93:V, reg dx94:V, reg __25:cls, reg r313:V, reg p79:p(V +), reg M85:*, reg M86:V, reg c63:L, reg M88:V, reg dr82:V, reg dc41:L, reg dx95:V, reg dx96:V, reg r315:V, reg p80:p(V +), reg M89:*, reg M90:V, reg c64:L, reg dr84:V, reg dc42:L, reg dx97:V, reg dx98:V, reg __26:cls, reg r317:V, reg p81:p(V +), reg r319:V, reg c65:cls, reg r320:V, reg p82:p(V +), reg outcon8:*, reg outcon9:V, reg p83:p(V +), reg r323:V, reg writeLines3:cls, reg outcon10:*, reg outcon11:V, reg p84:p(V +), reg r325:V, reg writeLines4:cls, reg outcon12:*, reg outcon13:V, reg p85:p(V +), reg r327:V, reg file_copy:cls, reg file_path8:cls, reg R_home:cls, reg r328:V, reg p86:p(V +), reg r330:V, reg p87:p(V +), reg outman10:*, reg outman11:V, reg p88:p(V +), reg r333:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r334:V, reg r335:V, reg invisible:cls, reg r336:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    OS_isMissing = missing.0(OS);
    if OS_isMissing then L0() else L1(OS);
  L0():
    p = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c = `is.object`(_Platform1);
      if c then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r = `$`(_Platform3, <sym OS.type>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p);
  L1(OS_orDefault):
    st OS = OS_orDefault;
    html_isMissing = missing.0(html);
    if html_isMissing then L2(TRUE) else L2(html);
  L2(html_orDefault):
    st html = html_orDefault;
    r2 = clos inner2501545716;
    st re = r2;
    r3 = clos inner129866984;
    st html_header = r3;
    r4 = clos inner2501545716;
    st firstLetterCategory = r4;
    file_exists = ldf `file.exists`;
    check L51() else D0();
  D0():
    deopt 10 [];
  L51():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        outDir1 = ld outDir;
        outDir2 = force? outDir1;
        checkMissing(outDir2);
        return outDir2;
      };
      r6 = dyn file_path(p1, "Meta", "Rd.rds");
      st f = r6;
      invisible.0();
      return r6;
    };
    r8 = dyn file_exists(p2);
    check L52() else D1();
  D1():
    deopt 12 [r8];
  L52():
    c1 = `as.logical`(r8);
    if c1 then L53() else L3();
  L3():
    tryCatch = ldf tryCatch;
    check L57() else D4();
  L4(r11):
    st Rd = r11;
    Rd4 = ld Rd;
    check L71() else D14();
  L53():
    readRDS = ldf readRDS;
    check L54() else D2();
  D2():
    deopt 14 [];
  D4():
    deopt 18 [];
  D14():
    deopt 49 [Rd4];
  L54():
    p3 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r10 = dyn readRDS(p3);
    check L55() else D3();
  L57():
    p8 = prom<V +>{
      Rd_db = ldf Rd_db;
      p5 = prom<V +>{
        basename = ldf basename;
        p4 = prom<V +>{
          outDir3 = ld outDir;
          outDir4 = force? outDir3;
          checkMissing(outDir4);
          return outDir4;
        };
        r13 = dyn basename(p4);
        return r13;
      };
      p7 = prom<V +>{
        dirname = ldf dirname;
        p6 = prom<V +>{
          outDir5 = ld outDir;
          outDir6 = force? outDir5;
          checkMissing(outDir6);
          return outDir6;
        };
        r16 = dyn dirname(p6);
        return r16;
      };
      r18 = dyn Rd_db[, `lib.loc`](p5, p7);
      return r18;
    };
    p9 = prom<V +>{
      r20 = clos inner3708401697;
      return r20;
    };
    r22 = dyn tryCatch[, error](p8, p9);
    check L58() else D5();
  L71():
    Rd5 = force? Rd4;
    checkMissing(Rd5);
    c4 = `is.object`(Rd5);
    if c4 then L73() else L74(Rd5);
  D3():
    deopt 16 [r10];
  D5():
    deopt 22 [r22];
  L55():
    goto L4(r10);
  L58():
    st db = r22;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L59() else L60();
  L72(dx3):
    st topics = dx3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L76() else L77();
  L73():
    dr2 = tryDispatchBuiltin.1("$", Rd5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L75() else L74(dr2);
  L74(Rd7):
    r35 = `$`(Rd7, <sym Aliases>);
    goto L72(r35);
  L5(r24):
    c3 = `as.logical`(r24);
    if c3 then L62() else L6();
  L8(r37):
    r39 = `!`(r37);
    c5 = `as.logical`(r39);
    if c5 then L80() else L9();
  L59():
    db = ld db;
    check L61() else D6();
  L60():
    r23 = dyn base(<sym db>);
    goto L5(r23);
  L75():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L72(dx2);
  L76():
    topics = ld topics;
    check L78() else D15();
  L77():
    r36 = dyn base1(<sym topics>);
    goto L8(r36);
  D6():
    deopt 25 [db];
  D15():
    deopt 55 [topics];
  L6():
    goto L7();
  L7():
    Rd_contents = ldf Rd_contents;
    check L66() else D9();
  L9():
    lengths = ldf lengths;
    check L84() else D19();
  L10(r49):
    st M = r49;
    file_path2 = ldf `file.path`;
    check L92() else D27();
  L61():
    db1 = force? db;
    checkMissing(db1);
    c2 = `==`(db1, NULL);
    goto L5(c2);
  L62():
    Rd_db1 = ldf Rd_db;
    check L63() else D7();
  L78():
    topics1 = force? topics;
    checkMissing(topics1);
    length = ldf length in base;
    r38 = dyn length(topics1);
    check L79() else D16();
  L80():
    list2DF = ldf list2DF;
    check L81() else D17();
  D7():
    deopt 29 [];
  D9():
    deopt 37 [];
  D16():
    deopt 58 [r38];
  D17():
    deopt 61 [];
  D19():
    deopt 65 [];
  D27():
    deopt 91 [];
  L63():
    p10 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r26 = dyn Rd_db1[dir](p10);
    check L64() else D8();
  L66():
    p11 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      return db3;
    };
    r29 = dyn Rd_contents(p11);
    check L67() else D10();
  L79():
    goto L8(r38);
  L81():
    p15 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      character = ldf character;
      r42 = dyn character();
      character1 = ldf character;
      r43 = dyn character1();
      character2 = ldf character;
      r44 = dyn character2();
      character3 = ldf character;
      r45 = dyn character3();
      list = ldf list in base;
      r46 = dyn list(r42, r43, r44, r45);
      goto L0(r46);
    L2():
      r40 = dyn base2[Topic, File, Title, Internal](<lang character()>, <lang character()>, <lang character()>, <lang character()>);
      goto L0(r40);
    };
    r48 = dyn list2DF(p15);
    check L82() else D18();
  L84():
    p16 = prom<V +>{
      topics2 = ld topics;
      topics3 = force? topics2;
      checkMissing(topics3);
      return topics3;
    };
    r51 = dyn lengths(p16);
    check L85() else D20();
  L92():
    p22 = prom<V +>{
      outDir9 = ld outDir;
      outDir10 = force? outDir9;
      checkMissing(outDir10);
      return outDir10;
    };
    r79 = dyn file_path2(p22, "help");
    check L93() else D28();
  D8():
    deopt 32 [r26];
  D10():
    deopt 39 [r29];
  D18():
    deopt 63 [r48];
  D20():
    deopt 67 [r51];
  D28():
    deopt 94 [r79];
  L64():
    st db = r26;
    goto L7();
  L67():
    st Rd = r29;
    saveRDS = ldf saveRDS;
    check L68() else D11();
  L82():
    goto L10(r48);
  L85():
    st lens = r51;
    sub = ldf sub;
    check L86() else D21();
  L93():
    st outman = r79;
    dir_create = ldf `dir.create`;
    check L94() else D29();
  D11():
    deopt 42 [];
  D21():
    deopt 70 [];
  D29():
    deopt 97 [];
  L68():
    p12 = prom<V +>{
      Rd = ld Rd;
      Rd1 = force? Rd;
      checkMissing(Rd1);
      return Rd1;
    };
    p14 = prom<V +>{
      file_path1 = ldf `file.path`;
      p13 = prom<V +>{
        outDir7 = ld outDir;
        outDir8 = force? outDir7;
        checkMissing(outDir8);
        return outDir8;
      };
      r32 = dyn file_path1(p13, "Meta", "Rd.rds");
      return r32;
    };
    r34 = dyn saveRDS(p12, p14);
    check L69() else D12();
  L86():
    p17 = prom<V +>{
      Rd8 = ld Rd;
      Rd9 = force? Rd8;
      checkMissing(Rd9);
      c6 = `is.object`(Rd9);
      if c6 then L1() else L2(Rd9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", Rd9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(Rd11):
      r52 = `$`(Rd11, <sym File>);
      goto L0(r52);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r54 = dyn sub("\\.[Rr]d$", "", p17);
    check L87() else D22();
  L94():
    p23 = prom<V +>{
      outman = ld outman;
      outman1 = force? outman;
      checkMissing(outman1);
      return outman1;
    };
    r81 = dyn dir_create[, showWarnings](p23, FALSE);
    check L95() else D30();
  D12():
    deopt 45 [r34];
  D22():
    deopt 74 [r54];
  D30():
    deopt 101 [r81];
  L69():
    Rd2 = ld Rd;
    check L70() else D13();
  L87():
    st files = r54;
    vapply = ldf vapply;
    check L88() else D23();
  L95():
    M = ld M;
    check L96() else D31();
  D13():
    deopt 46 [Rd2];
  D23():
    deopt 77 [];
  D31():
    deopt 102 [M];
  L70():
    Rd3 = force? Rd2;
    checkMissing(Rd3);
    goto L4(Rd3);
  L88():
    p18 = prom<V +>{
      Rd12 = ld Rd;
      Rd13 = force? Rd12;
      checkMissing(Rd13);
      c7 = `is.object`(Rd13);
      if c7 then L1() else L2(Rd13);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", Rd13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(Rd15):
      r55 = `$`(Rd15, <sym Keywords>);
      goto L0(r55);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p19 = prom<V +>{
      r57 = clos inner2501545716;
      return r57;
    };
    r59 = dyn vapply(p18, p19, 0);
    check L89() else D24();
  L96():
    M1 = force? M;
    checkMissing(M1);
    c9 = `is.object`(M1);
    if c9 then L97() else L98(M1);
  D24():
    deopt 81 [r59];
  L11(dx11):
    st MM = dx11;
    __2 = ldf `::`;
    check L102() else D34();
  L89():
    r60 = `>`(r59, 0);
    st internal = r60;
    list2DF1 = ldf list2DF;
    check L90() else D25();
  L97():
    dr10 = tryDispatchBuiltin.1("[", M1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L99() else L98(dr10);
  L98(M3):
    re = ldf re;
    check L100() else D32();
  D25():
    deopt 86 [];
  D32():
    deopt 105 [M3];
  D34():
    deopt 112 [];
  L90():
    p21 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L0(r62):
      return r62;
    L4():
      unlist = ldf unlist;
      p20 = prom<V +>{
        topics4 = ld topics;
        topics5 = force? topics4;
        checkMissing(topics5);
        return topics5;
      };
      r64 = dyn unlist(p20);
      sym4 = ldf `rep.int`;
      base4 = ldf `rep.int` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L6() else L7();
    L5():
      r61 = dyn base3[Topic, File, Title, Internal](<lang unlist(topics)>, <lang rep.int(files, lens)>, <lang rep.int(`$`(Rd, Title), lens)>, <lang rep.int(internal, lens)>);
      goto L0(r61);
    L1(r66):
      sym5 = ldf `rep.int`;
      base5 = ldf `rep.int` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L8() else L9();
    L6():
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      lens = ld lens;
      lens1 = force? lens;
      checkMissing(lens1);
      rep_int = ldf `rep.int` in base;
      r67 = dyn rep_int(files1, lens1);
      goto L1(r67);
    L7():
      r65 = dyn base4(<sym files>, <sym lens>);
      goto L1(r65);
    L2(r69):
      sym6 = ldf `rep.int`;
      base6 = ldf `rep.int` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L14() else L15();
    L8():
      Rd16 = ld Rd;
      Rd17 = force? Rd16;
      checkMissing(Rd17);
      c8 = `is.object`(Rd17);
      if c8 then L11() else L12(Rd17);
    L9():
      r68 = dyn base5(<lang `$`(Rd, Title)>, <sym lens>);
      goto L2(r68);
    L3(r73):
      list1 = ldf list in base;
      r75 = dyn list1(r64, r66, r69, r73);
      goto L0(r75);
    L10(dx9):
      lens2 = ld lens;
      lens3 = force? lens2;
      checkMissing(lens3);
      rep_int1 = ldf `rep.int` in base;
      r71 = dyn rep_int1(dx9, lens3);
      goto L2(r71);
    L11():
      dr8 = tryDispatchBuiltin.1("$", Rd17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L13() else L12(dr8);
    L12(Rd19):
      r70 = `$`(Rd19, <sym Title>);
      goto L10(r70);
    L14():
      internal = ld internal;
      internal1 = force? internal;
      checkMissing(internal1);
      lens4 = ld lens;
      lens5 = force? lens4;
      checkMissing(lens5);
      rep_int2 = ldf `rep.int` in base;
      r74 = dyn rep_int2(internal1, lens5);
      goto L3(r74);
    L15():
      r72 = dyn base6(<sym internal>, <sym lens>);
      goto L3(r72);
    L13():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L10(dx8);
    };
    r77 = dyn list2DF1(p21);
    check L91() else D26();
  L99():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L11(dx10);
  L100():
    p24 = prom<V +>{
      M4 = ld M;
      M5 = force? M4;
      checkMissing(M5);
      c10 = `is.object`(M5);
      if c10 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", M5);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r82 = dyn __(M5, <missing>, 1);
      goto L0(r82);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r84 = dyn re(p24);
    check L101() else D33();
  L102():
    r86 = dyn __2("utils", "write.table");
    check L103() else D35();
  D26():
    deopt 88 [r77];
  D33():
    deopt 107 [M3, r84];
  D35():
    deopt 115 [r86];
  L91():
    goto L10(r77);
  L101():
    __1 = ldf `[` in base;
    r85 = dyn __1(M3, r84, <int 1, 2>);
    goto L11(r85);
  L103():
    checkFun.0(r86);
    r87 = r86 as cls;
    p25 = prom<V +>{
      MM = ld MM;
      MM1 = force? MM;
      checkMissing(MM1);
      return MM1;
    };
    p27 = prom<V +>{
      file_path3 = ldf `file.path`;
      p26 = prom<V +>{
        outman2 = ld outman;
        outman3 = force? outman2;
        checkMissing(outman3);
        return outman3;
      };
      r90 = dyn file_path3(p26, "AnIndex");
      return r90;
    };
    r92 = dyn r87[, , quote, `row.names`, `col.names`, sep](p25, p27, FALSE, FALSE, FALSE, "\t");
    check L104() else D36();
  D36():
    deopt 127 [r92];
  L104():
    structure = ldf structure;
    check L105() else D37();
  D37():
    deopt 129 [];
  L105():
    p28 = prom<V +>{
      MM2 = ld MM;
      MM3 = force? MM2;
      checkMissing(MM3);
      c11 = `is.object`(MM3);
      if c11 then L1() else L2();
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", MM3);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r93 = dyn __3(MM3, <missing>, 2);
      goto L0(r93);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p29 = prom<V +>{
      MM6 = ld MM;
      MM7 = force? MM6;
      checkMissing(MM7);
      c12 = `is.object`(MM7);
      if c12 then L1() else L2();
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", MM7);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r95 = dyn __4(MM7, <missing>, 1);
      goto L0(r95);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r97 = dyn structure[, names](p28, p29);
    check L106() else D38();
  D38():
    deopt 133 [r97];
  L106():
    st a = r97;
    saveRDS1 = ldf saveRDS;
    check L107() else D39();
  D39():
    deopt 136 [];
  L107():
    p30 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    p32 = prom<V +>{
      file_path4 = ldf `file.path`;
      p31 = prom<V +>{
        outman4 = ld outman;
        outman5 = force? outman4;
        checkMissing(outman5);
        return outman5;
      };
      r100 = dyn file_path4(p31, "aliases.rds");
      return r100;
    };
    r102 = dyn saveRDS1(p30, p32);
    check L108() else D40();
  D40():
    deopt 139 [r102];
  L108():
    file_path5 = ldf `file.path`;
    check L109() else D41();
  D41():
    deopt 141 [];
  L109():
    p33 = prom<V +>{
      outDir11 = ld outDir;
      outDir12 = force? outDir11;
      checkMissing(outDir12);
      return outDir12;
    };
    r104 = dyn file_path5(p33, "html");
    check L110() else D42();
  D42():
    deopt 144 [r104];
  L110():
    st outman = r104;
    dir_create1 = ldf `dir.create`;
    check L111() else D43();
  D43():
    deopt 147 [];
  L111():
    p34 = prom<V +>{
      outman6 = ld outman;
      outman7 = force? outman6;
      checkMissing(outman7);
      return outman7;
    };
    r106 = dyn dir_create1[, showWarnings](p34, FALSE);
    check L112() else D44();
  D44():
    deopt 151 [r106];
  L112():
    file = ldf file;
    check L113() else D45();
  D45():
    deopt 153 [];
  L113():
    p36 = prom<V +>{
      file_path6 = ldf `file.path`;
      p35 = prom<V +>{
        outman8 = ld outman;
        outman9 = force? outman8;
        checkMissing(outman9);
        return outman9;
      };
      r108 = dyn file_path6(p35, "00Index.html");
      return r108;
    };
    r110 = dyn file(p36, "wt");
    check L114() else D46();
  D46():
    deopt 156 [r110];
  L114():
    st outcon = r110;
    sym7 = ldf `on.exit`;
    base7 = ldf `on.exit` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L115() else L116();
  L12():
    read_dcf = ldf `read.dcf`;
    check L117() else D47();
  L115():
    on_exit = ldf `on.exit` in base;
    r113 = dyn on_exit(<lang close(outcon)>);
    goto L12();
  L116():
    r111 = dyn base7(<lang close(outcon)>);
    goto L12();
  D47():
    deopt 162 [];
  L117():
    p38 = prom<V +>{
      file_path7 = ldf `file.path`;
      p37 = prom<V +>{
        outDir13 = ld outDir;
        outDir14 = force? outDir13;
        checkMissing(outDir14);
        return outDir14;
      };
      r115 = dyn file_path7(p37, "DESCRIPTION");
      return r115;
    };
    r117 = dyn read_dcf(p38);
    check L118() else D48();
  D48():
    deopt 164 [r117];
  L118():
    c13 = `is.object`(r117);
    if c13 then L119() else L120();
  L13(dx19):
    st desc = dx19;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L122() else L123();
  L119():
    dr18 = tryDispatchBuiltin.1("[", r117);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L121() else L120();
  L120():
    __5 = ldf `[` in base;
    r120 = dyn __5(r117, 1, <missing>);
    goto L13(r120);
  L14(r122):
    r125 = `!`(r122);
    c15 = `as.logical`(r125);
    if c15 then L129() else L16();
  L121():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L13(dx18);
  L122():
    desc = ld desc;
    check L124() else D49();
  L123():
    r121 = dyn base8(<lang `<-`(enc, `[`(desc, "Encoding"))>);
    goto L14(r121);
  D49():
    deopt 172 [desc];
  L16():
    goto L17();
  L17():
    M8 = ld M;
    check L133() else D53();
  L124():
    desc1 = force? desc;
    checkMissing(desc1);
    c14 = `is.object`(desc1);
    if c14 then L125() else L126(desc1);
  L129():
    iconv = ldf iconv;
    check L130() else D51();
  D51():
    deopt 182 [];
  D53():
    deopt 192 [M8];
  L15(dx21):
    st enc = dx21;
    is_na = ldf `is.na` in base;
    r124 = dyn is_na(dx21);
    check L128() else D50();
  L125():
    dr20 = tryDispatchBuiltin.1("[", desc1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L127() else L126(dr20);
  L126(desc3):
    __6 = ldf `[` in base;
    r123 = dyn __6(desc3, "Encoding");
    goto L15(r123);
  L130():
    p39 = prom<V +>{
      desc4 = ld desc;
      desc5 = force? desc4;
      checkMissing(desc5);
      return desc5;
    };
    p40 = prom<V +>{
      enc = ld enc;
      enc1 = force? enc;
      checkMissing(enc1);
      return enc1;
    };
    r128 = dyn iconv[, , , sub](p39, p40, "UTF-8", "byte");
    check L131() else D52();
  L133():
    M9 = force? M8;
    checkMissing(M9);
    c16 = `is.object`(M9);
    if c16 then L134() else L135(M9);
  D50():
    deopt 179 [r124];
  D52():
    deopt 188 [r128];
  L18(dx23):
    st M = dx23;
    _in_ = ldf `%in%`;
    check L141() else D55();
  L127():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L15(dx20);
  L128():
    goto L14(r124);
  L131():
    st desc = r128;
    goto L17();
  L134():
    dr22 = tryDispatchBuiltin.1("[", M9);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L136() else L135(dr22);
  L135(M11):
    M12 = ld M;
    check L137() else D54();
  D54():
    deopt 194 [M11, M12];
  D55():
    deopt 206 [];
  L136():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L18(dx22);
  L137():
    M13 = force? M12;
    checkMissing(M13);
    c17 = `is.object`(M13);
    if c17 then L138() else L139(M11);
  L141():
    p41 = prom<V +>{
      desc6 = ld desc;
      desc7 = force? desc6;
      checkMissing(desc7);
      c18 = `is.object`(desc7);
      if c18 then L1() else L2(desc7);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("[", desc7);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(desc9):
      __9 = ldf `[` in base;
      r133 = dyn __9(desc9, "Package");
      goto L0(r133);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    p42 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r136):
      return r136;
    L1():
      c19 = ldf c in base;
      r137 = dyn c19("base", "graphics", "stats", "utils");
      goto L0(r137);
    L2():
      r135 = dyn base9("base", "graphics", "stats", "utils");
      goto L0(r135);
    };
    r139 = dyn _in_(p41, p42);
    check L142() else D56();
  D56():
    deopt 209 [r139];
  L19(dx25):
    r131 = `!`(dx25);
    __8 = ldf `[` in base;
    r132 = dyn __8(M9, r131, <missing>);
    goto L18(r132);
  L138():
    dr24 = tryDispatchBuiltin.1("[", M13);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L140() else L139(M11);
  L139(M16):
    __7 = ldf `[` in base;
    r130 = dyn __7(M13, <missing>, 4);
    goto L19(r130);
  L142():
    c20 = `as.logical`(r139);
    if c20 then L143() else L20();
  L20():
    goto L29();
  L29():
    sub5 = ldf sub;
    check L201() else D89();
  L140():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L19(dx24);
  L143():
    s = toForSeq(<int 1, 2>);
    l = length(s);
    i = 0;
    goto L21(i);
  D89():
    deopt 330 [];
  L21(i1):
    i2 = `+`.1(i1, 1);
    c21 = `<`.1(l, i2);
    if c21 then L144() else L28();
  L201():
    p52 = prom<V +>{
      M38 = ld M;
      M39 = force? M38;
      checkMissing(M39);
      c31 = `is.object`(M39);
      if c31 then L1() else L2(M39);
    L0(dx54):
      return dx54;
    L1():
      dr40 = tryDispatchBuiltin.1("$", M39);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(M41):
      r201 = `$`(M41, <sym Topic>);
      goto L0(r201);
    L3():
      dx53 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx53);
    };
    r203 = dyn sub5("^([^,]*),.*-method$", "\\1-method", p52);
    check L202() else D90();
  D90():
    deopt 334 [r203];
  L28():
    x = `[[`(s, i2, NULL, TRUE);
    st pass = x;
    gsub = ldf gsub;
    check L145() else D57();
  L144():
    goto L29();
  L202():
    l1 = ld M;
    c32 = `is.object`(l1);
    if c32 then L204() else L205(r203, l1);
  D57():
    deopt 213 [i2];
  L145():
    p43 = prom<V +>{
      M20 = ld M;
      M21 = force? M20;
      checkMissing(M21);
      c22 = `is.object`(M21);
      if c22 then L1() else L2(M21);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("$", M21);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(M23):
      r140 = `$`(M23, <sym Topic>);
      goto L0(r140);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    r142 = dyn gsub("\\.data\\.frame", ".data_frame", p43);
    check L146() else D58();
  L203(dx56):
    st M = dx56;
    M42 = ld M;
    check L207() else D91();
  L204():
    dr42 = tryDispatchBuiltin.0("$<-", l1, r203);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L206() else L205(r203, dr42);
  L205(r205, l3):
    r208 = `$<-`(l3, <sym Topic>, r203);
    goto L203(r208);
  D58():
    deopt 217 [i2, r142];
  D91():
    deopt 338 [M42];
  L146():
    st gen = r142;
    sub1 = ldf sub;
    check L147() else D59();
  L206():
    dx55 = getTryDispatchBuiltinValue(dr42);
    goto L203(dx55);
  L207():
    M43 = force? M42;
    checkMissing(M43);
    c33 = `is.object`(M43);
    if c33 then L208() else L209(M43);
  D59():
    deopt 220 [i2];
  L30(dx58):
    st M = dx58;
    M53 = ld M;
    check L213() else D94();
  L147():
    p44 = prom<V +>{
      gen = ld gen;
      gen1 = force? gen;
      checkMissing(gen1);
      return gen1;
    };
    r144 = dyn sub1("\\.model\\.matrix$", ".modelmatrix", p44);
    check L148() else D60();
  L208():
    dr44 = tryDispatchBuiltin.1("[", M43);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L210() else L209(dr44);
  L209(M45):
    duplicated = ldf duplicated;
    check L211() else D92();
  D60():
    deopt 224 [i2, r144];
  D92():
    deopt 341 [M45];
  D94():
    deopt 349 [M53];
  L148():
    st gen = r144;
    sub2 = ldf sub;
    check L149() else D61();
  L210():
    dx57 = getTryDispatchBuiltinValue(dr44);
    goto L30(dx57);
  L211():
    p53 = prom<V +>{
      M46 = ld M;
      M47 = force? M46;
      checkMissing(M47);
      c34 = `is.object`(M47);
      if c34 then L2() else L3(M47);
    L0(dx60):
      return dx60;
    L2():
      dr46 = tryDispatchBuiltin.1("[", M47);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L4() else L3(dr46);
    L3(M49):
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L5() else L6();
    L1(r210):
      __13 = ldf `[` in base;
      r212 = dyn __13(M47, <missing>, r210);
      goto L0(r212);
    L4():
      dx59 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx59);
    L5():
      c35 = ldf c in base;
      r211 = dyn c35("Topic", "File");
      goto L1(r211);
    L6():
      r209 = dyn base14("Topic", "File");
      goto L1(r209);
    };
    r214 = dyn duplicated(p53);
    check L212() else D93();
  L213():
    M54 = force? M53;
    checkMissing(M54);
    c36 = `is.object`(M54);
    if c36 then L214() else L215(M54);
  D61():
    deopt 227 [i2];
  D93():
    deopt 343 [M45, r214];
  L31(dx62):
    st M = dx62;
    r221 = clos inner1924495852;
    st htmlize = r221;
    htmlize = ldf htmlize;
    check L219() else D97();
  L149():
    p45 = prom<V +>{
      gen2 = ld gen;
      gen3 = force? gen2;
      checkMissing(gen3);
      return gen3;
    };
    r146 = dyn sub2("^(all|as|is|file|Sys|row|na|model)\\.", "\\1_", p45);
    check L150() else D62();
  L212():
    r215 = `!`(r214);
    __14 = ldf `[` in base;
    r216 = dyn __14(M43, r215, <missing>);
    goto L30(r216);
  L214():
    dr48 = tryDispatchBuiltin.1("[", M54);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L216() else L215(dr48);
  L215(M56):
    re1 = ldf re;
    check L217() else D95();
  D62():
    deopt 231 [i2, r146];
  D95():
    deopt 352 [M56];
  D97():
    deopt 363 [];
  L150():
    st gen = r146;
    sub3 = ldf sub;
    check L151() else D63();
  L216():
    dx61 = getTryDispatchBuiltinValue(dr48);
    goto L31(dx61);
  L217():
    p54 = prom<V +>{
      M57 = ld M;
      M58 = force? M57;
      checkMissing(M58);
      c37 = `is.object`(M58);
      if c37 then L1() else L2();
    L0(dx64):
      return dx64;
    L1():
      dr50 = tryDispatchBuiltin.1("[", M58);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2();
    L2():
      __15 = ldf `[` in base;
      r217 = dyn __15(M58, <missing>, 1);
      goto L0(r217);
    L3():
      dx63 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx63);
    };
    r219 = dyn re1(p54);
    check L218() else D96();
  L219():
    p55 = prom<V +>{
      M61 = ld M;
      M62 = force? M61;
      checkMissing(M62);
      c38 = `is.object`(M62);
      if c38 then L1() else L2(M62);
    L0(dx66):
      return dx66;
    L1():
      dr52 = tryDispatchBuiltin.1("$", M62);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(M64):
      r222 = `$`(M64, <sym Topic>);
      goto L0(r222);
    L3():
      dx65 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx65);
    };
    r224 = dyn htmlize(p55, FALSE);
    check L220() else D98();
  D63():
    deopt 234 [i2];
  D96():
    deopt 354 [M56, r219];
  D98():
    deopt 366 [r224];
  L151():
    p46 = prom<V +>{
      gen4 = ld gen;
      gen5 = force? gen4;
      checkMissing(gen5);
      return gen5;
    };
    r148 = dyn sub3("^(.*)\\.test", "\\1_test", p46);
    check L152() else D64();
  L218():
    __16 = ldf `[` in base;
    r220 = dyn __16(M54, r219, <missing>);
    goto L31(r220);
  L220():
    l4 = ld M;
    c39 = `is.object`(l4);
    if c39 then L222() else L223(r224, l4);
  D64():
    deopt 238 [i2, r148];
  L152():
    st gen = r148;
    sub4 = ldf sub;
    check L153() else D65();
  L221(dx68):
    st M = dx68;
    htmlize1 = ldf htmlize;
    check L225() else D99();
  L222():
    dr54 = tryDispatchBuiltin.0("$<-", l4, r224);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L224() else L223(r224, dr54);
  L223(r226, l6):
    r229 = `$<-`(l6, <sym HTopic>, r224);
    goto L221(r229);
  D65():
    deopt 241 [i2];
  D99():
    deopt 371 [];
  L153():
    p47 = prom<V +>{
      gen6 = ld gen;
      gen7 = force? gen6;
      checkMissing(gen7);
      return gen7;
    };
    r150 = dyn sub4("([-[:alnum:]]+)\\.[^.]+$", "\\1", p47);
    check L154() else D66();
  L224():
    dx67 = getTryDispatchBuiltinValue(dr54);
    goto L221(dx67);
  L225():
    p56 = prom<V +>{
      M65 = ld M;
      M66 = force? M65;
      checkMissing(M66);
      c40 = `is.object`(M66);
      if c40 then L1() else L2(M66);
    L0(dx70):
      return dx70;
    L1():
      dr56 = tryDispatchBuiltin.1("$", M66);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(M68):
      r230 = `$`(M68, <sym Title>);
      goto L0(r230);
    L3():
      dx69 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx69);
    };
    r232 = dyn htmlize1(p56, TRUE);
    check L226() else D100();
  D66():
    deopt 245 [i2, r150];
  D100():
    deopt 374 [r232];
  L154():
    st gen = r150;
    nrow = ldf nrow;
    check L155() else D67();
  L226():
    l7 = ld M;
    c41 = `is.object`(l7);
    if c41 then L228() else L229(r232, l7);
  D67():
    deopt 248 [i2];
  L155():
    p48 = prom<V +>{
      M24 = ld M;
      M25 = force? M24;
      checkMissing(M25);
      return M25;
    };
    r152 = dyn nrow(p48);
    check L156() else D68();
  L227(dx72):
    st M = dx72;
    html_header = ldf html_header;
    check L231() else D101();
  L228():
    dr58 = tryDispatchBuiltin.0("$<-", l7, r232);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L230() else L229(r232, dr58);
  L229(r234, l9):
    r237 = `$<-`(l9, <sym Title>, r232);
    goto L227(r237);
  D68():
    deopt 250 [i2, r152];
  D101():
    deopt 379 [];
  L156():
    st last = r152;
    _in_1 = ldf `%in%`;
    check L157() else D69();
  L230():
    dx71 = getTryDispatchBuiltinValue(dr58);
    goto L227(dx71);
  L231():
    p57 = prom<V +>{
      desc10 = ld desc;
      desc11 = force? desc10;
      checkMissing(desc11);
      c42 = `is.object`(desc11);
      if c42 then L1() else L2(desc11);
    L0(dx74):
      return dx74;
    L1():
      dr60 = tryDispatchBuiltin.1("[", desc11);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(desc13):
      __17 = ldf `[` in base;
      r238 = dyn __17(desc13, "Package");
      goto L0(r238);
    L3():
      dx73 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx73);
    };
    p59 = prom<V +>{
      htmlize2 = ldf htmlize;
      p58 = prom<V +>{
        desc14 = ld desc;
        desc15 = force? desc14;
        checkMissing(desc15);
        c43 = `is.object`(desc15);
        if c43 then L1() else L2(desc15);
      L0(dx76):
        return dx76;
      L1():
        dr62 = tryDispatchBuiltin.1("[", desc15);
        dc31 = getTryDispatchBuiltinDispatched(dr62);
        if dc31 then L3() else L2(dr62);
      L2(desc17):
        __18 = ldf `[` in base;
        r240 = dyn __18(desc17, "Title");
        goto L0(r240);
      L3():
        dx75 = getTryDispatchBuiltinValue(dr62);
        goto L0(dx75);
      };
      r242 = dyn htmlize2(p58, TRUE);
      return r242;
    };
    p60 = prom<V +>{
      desc18 = ld desc;
      desc19 = force? desc18;
      checkMissing(desc19);
      c44 = `is.object`(desc19);
      if c44 then L1() else L2(desc19);
    L0(dx78):
      return dx78;
    L1():
      dr64 = tryDispatchBuiltin.1("[", desc19);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(desc21):
      __19 = ldf `[` in base;
      r244 = dyn __19(desc21, "Version");
      goto L0(r244);
    L3():
      dx77 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx77);
    };
    p61 = prom<V +>{
      outcon = ld outcon;
      outcon1 = force? outcon;
      checkMissing(outcon1);
      return outcon1;
    };
    r247 = dyn html_header(p57, p59, p60, p61);
    check L232() else D102();
  D69():
    deopt 253 [i2];
  D102():
    deopt 384 [r247];
  L157():
    p49 = prom<V +>{
      gen8 = ld gen;
      gen9 = force? gen8;
      checkMissing(gen9);
      return gen9;
    };
    p50 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r155):
      return r155;
    L1():
      c23 = ldf c in base;
      r156 = dyn c23("ar", "bw", "contr", "dyn", "lm", "qr", "ts", "which", ".Call", ".External", ".Library", ".First", ".Last");
      goto L0(r156);
    L2():
      r154 = dyn base10("ar", "bw", "contr", "dyn", "lm", "qr", "ts", "which", ".Call", ".External", ".Library", ".First", ".Last");
      goto L0(r154);
    };
    r158 = dyn _in_1(p49, p50);
    check L158() else D70();
  L232():
    nrow1 = ldf nrow;
    check L233() else D103();
  D70():
    deopt 256 [i2, r158];
  D103():
    deopt 386 [];
  L158():
    st nongen = r158;
    sym11 = ldf nchar;
    base11 = ldf nchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L159() else L160();
  L233():
    p62 = prom<V +>{
      M69 = ld M;
      M70 = force? M69;
      checkMissing(M70);
      return M70;
    };
    r249 = dyn nrow1(p62);
    check L234() else D104();
  D104():
    deopt 388 [r249];
  L22(i7, r160):
    st nc = r160;
    nc = ld nc;
    check L163() else D73();
  L159():
    gen10 = ld gen;
    check L161() else D71();
  L160():
    r159 = dyn base11(<sym gen>);
    goto L22(i2, r159);
  L234():
    r250 = `>`(r249, 100.0);
    st use_alpha = r250;
    use_alpha = ld use_alpha;
    check L235() else D105();
  D71():
    deopt 260 [i2, gen10];
  D73():
    deopt 268 [i7, nc];
  D105():
    deopt 392 [use_alpha];
  L161():
    gen11 = force? gen10;
    checkMissing(gen11);
    nchar = ldf nchar in base;
    r161 = dyn nchar(gen11, "chars", FALSE, NA_LGL);
    check L162() else D72();
  L163():
    nc1 = force? nc;
    checkMissing(nc1);
    r162 = `>`(nc1, 3.0);
    endsWith = ldf endsWith;
    check L164() else D74();
  L235():
    use_alpha1 = force? use_alpha;
    checkMissing(use_alpha1);
    c45 = `as.logical`(use_alpha1);
    if c45 then L236() else L32();
  D72():
    deopt 266 [i2, r161];
  D74():
    deopt 272 [i7, r162];
  L32():
    nrow2 = ldf nrow;
    check L289() else D133();
  L48():
    writeLines4 = ldf writeLines;
    check L297() else D139();
  L162():
    goto L22(i2, r161);
  L164():
    p51 = prom<V +>{
      gen12 = ld gen;
      gen13 = force? gen12;
      checkMissing(gen13);
      return gen13;
    };
    r164 = dyn endsWith(p51, "<-");
    check L165() else D75();
  L236():
    firstLetterCategory = ldf firstLetterCategory;
    check L237() else D106();
  D75():
    deopt 275 [i7, r162, r164];
  D106():
    deopt 395 [];
  D133():
    deopt 500 [];
  D139():
    deopt 514 [];
  L165():
    r165 = `&&`(r162, r164);
    st asg = r165;
    gen14 = ld gen;
    check L166() else D76();
  L237():
    p63 = prom<V +>{
      M71 = ld M;
      M72 = force? M71;
      checkMissing(M72);
      c46 = `is.object`(M72);
      if c46 then L1() else L2(M72);
    L0(dx80):
      return dx80;
    L1():
      dr66 = tryDispatchBuiltin.1("$", M72);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(M74):
      r251 = `$`(M74, <sym Topic>);
      goto L0(r251);
    L3():
      dx79 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx79);
    };
    r253 = dyn firstLetterCategory(p63);
    check L238() else D107();
  L289():
    p78 = prom<V +>{
      M79 = ld M;
      M80 = force? M79;
      checkMissing(M80);
      return M80;
    };
    r310 = dyn nrow2(p78);
    check L290() else D134();
  L297():
    p85 = prom<V +>{
      outcon12 = ld outcon;
      outcon13 = force? outcon12;
      checkMissing(outcon13);
      return outcon13;
    };
    r327 = dyn writeLines4("</div></body></html>", p85);
    check L298() else D140();
  D76():
    deopt 278 [i7, gen14];
  D107():
    deopt 397 [r253];
  D134():
    deopt 502 [r310];
  D140():
    deopt 517 [r327];
  L166():
    gen15 = force? gen14;
    checkMissing(gen15);
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L167() else L168();
  L238():
    st first = r253;
    sort = ldf sort;
    check L239() else D108();
  L290():
    c61 = `as.logical`(r310);
    if c61 then L291() else L49();
  L298():
    file_copy = ldf `file.copy`;
    check L299() else D141();
  D108():
    deopt 400 [];
  D141():
    deopt 519 [];
  L23(i10, gen18, r167):
    r171 = `==`(gen18, r167);
    M26 = ld M;
    check L175() else D80();
  L49():
    writeLines3 = ldf writeLines;
    check L295() else D137();
  L167():
    gen19 = ld gen;
    check L169() else D77();
  L168():
    r166 = dyn base12("", <lang `[`(gen, `-`(last))>);
    goto L23(i7, gen15, r166);
  L239():
    p65 = prom<V +>{
      sym15 = ldf names;
      base15 = ldf names in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r255):
      return r255;
    L1():
      table = ldf table;
      p64 = prom<V +>{
        first = ld first;
        first1 = force? first;
        checkMissing(first1);
        return first1;
      };
      r257 = dyn table(p64);
      names = ldf names in base;
      r258 = dyn names(r257);
      goto L0(r258);
    L2():
      r254 = dyn base15(<lang table(first)>);
      goto L0(r254);
    };
    r260 = dyn sort(p65);
    check L240() else D109();
  L291():
    writeLines2 = ldf writeLines;
    check L292() else D135();
  L299():
    p87 = prom<V +>{
      file_path8 = ldf `file.path`;
      p86 = prom<V +>{
        R_home = ldf `R.home`;
        r328 = dyn R_home("doc");
        return r328;
      };
      r330 = dyn file_path8(p86, "html", "R.css");
      return r330;
    };
    p88 = prom<V +>{
      outman10 = ld outman;
      outman11 = force? outman10;
      checkMissing(outman11);
      return outman11;
    };
    r333 = dyn file_copy(p87, p88);
    check L300() else D142();
  D77():
    deopt 282 [i7, gen15, gen19];
  D80():
    deopt 290 [i10, r171, M26];
  D109():
    deopt 402 [r260];
  D135():
    deopt 504 [];
  D137():
    deopt 509 [];
  D142():
    deopt 522 [r333];
  L169():
    gen20 = force? gen19;
    checkMissing(gen20);
    c24 = `is.object`(gen20);
    if c24 then L170() else L171(i7, gen15, gen20);
  L175():
    M27 = force? M26;
    checkMissing(M27);
    c26 = `is.object`(M27);
    if c26 then L177() else L178(i10, r171, M27);
  L240():
    st nm = r260;
    sym16 = ldf match;
    base16 = ldf match in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L241() else L242();
  L292():
    p82 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r312):
      return r312;
    L1():
      paste2 = ldf paste0;
      p79 = prom<V +>{
        M81 = ld M;
        M82 = force? M81;
        checkMissing(M82);
        c62 = `is.object`(M82);
        if c62 then L1() else L2();
      L0(dx94):
        return dx94;
      L1():
        dr80 = tryDispatchBuiltin.1("[", M82);
        dc40 = getTryDispatchBuiltinDispatched(dr80);
        if dc40 then L3() else L2();
      L2():
        __25 = ldf `[` in base;
        r313 = dyn __25(M82, <missing>, 2);
        goto L0(r313);
      L3():
        dx93 = getTryDispatchBuiltinValue(dr80);
        goto L0(dx93);
      };
      p80 = prom<V +>{
        M85 = ld M;
        M86 = force? M85;
        checkMissing(M86);
        c63 = `is.object`(M86);
        if c63 then L1() else L2(M86);
      L0(dx96):
        return dx96;
      L1():
        dr82 = tryDispatchBuiltin.1("$", M86);
        dc41 = getTryDispatchBuiltinDispatched(dr82);
        if dc41 then L3() else L2(dr82);
      L2(M88):
        r315 = `$`(M88, <sym HTopic>);
        goto L0(r315);
      L3():
        dx95 = getTryDispatchBuiltinValue(dr82);
        goto L0(dx95);
      };
      p81 = prom<V +>{
        M89 = ld M;
        M90 = force? M89;
        checkMissing(M90);
        c64 = `is.object`(M90);
        if c64 then L1() else L2();
      L0(dx98):
        return dx98;
      L1():
        dr84 = tryDispatchBuiltin.1("[", M90);
        dc42 = getTryDispatchBuiltinDispatched(dr84);
        if dc42 then L3() else L2();
      L2():
        __26 = ldf `[` in base;
        r317 = dyn __26(M90, <missing>, 3);
        goto L0(r317);
      L3():
        dx97 = getTryDispatchBuiltinValue(dr84);
        goto L0(dx97);
      };
      r319 = dyn paste2("<tr><td style=\"width: 25%;\"><a href=\"", p79, ".html\">", p80, "</a></td>\n<td>", p81, "</td></tr>");
      c65 = ldf c in base;
      r320 = dyn c65("<table style=\"width: 100%;\">", r319, "</table>");
      goto L0(r320);
    L2():
      r311 = dyn base22("<table style=\"width: 100%;\">", <lang paste0("<tr><td style=\"width: 25%;\"><a href=\"", `[`(M, , 2), ".html\">", `$`(M, HTopic), "</a></td>\n<td>", `[`(M, , 3), "</td></tr>")>, "</table>");
      goto L0(r311);
    };
    p83 = prom<V +>{
      outcon8 = ld outcon;
      outcon9 = force? outcon8;
      checkMissing(outcon9);
      return outcon9;
    };
    r323 = dyn writeLines2(p82, p83);
    check L293() else D136();
  L295():
    p84 = prom<V +>{
      outcon10 = ld outcon;
      outcon11 = force? outcon10;
      checkMissing(outcon11);
      return outcon11;
    };
    r325 = dyn writeLines3("There are no help pages in this package", p84);
    check L296() else D138();
  L300():
    sym23 = ldf invisible;
    base23 = ldf invisible in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L301() else L302();
  D136():
    deopt 507 [r323];
  D138():
    deopt 512 [r325];
  L24(i14, gen26, dx31):
    c25 = ldf c in base;
    r170 = dyn c25("", dx31);
    check L174() else D79();
  L33(r262):
    st m = r262;
    m = ld m;
    check L245() else D112();
  L50(r335):
    popenv;
    return r335;
  L170():
    dr30 = tryDispatchBuiltin.1("[", gen20);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L172() else L171(i7, gen15, dr30);
  L171(i12, gen23, gen24):
    last = ld last;
    check L173() else D78();
  L176(i18, r175, dx33):
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L180() else L181();
  L177():
    dr32 = tryDispatchBuiltin.1("$", M27);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L179() else L178(i10, r171, dr32);
  L178(i16, r173, M29):
    r176 = `$`(M29, <sym File>);
    goto L176(i16, r173, r176);
  L241():
    nm = ld nm;
    check L243() else D110();
  L242():
    r261 = dyn base16(" ", <sym nm>, 0);
    goto L33(r261);
  L293():
    goto L48();
  L296():
    goto L48();
  L301():
    invisible = ldf invisible in base;
    r336 = dyn invisible(NULL);
    check L303() else D143();
  L302():
    r334 = dyn base23(NULL);
    goto L50(r334);
  D78():
    deopt 284 [i12, gen23, gen24, last];
  D79():
    deopt 289 [i14, gen26, r170];
  D110():
    deopt 407 [nm];
  D112():
    deopt 414 [m];
  D143():
    deopt 527 [r336];
  L25(i21, r180, dx36, r181):
    r194 = `==`(dx36, r181);
    r195 = `&&`(r180, r194);
    nongen = ld nongen;
    check L192() else D84();
  L172():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L24(i7, gen15, dx30);
  L173():
    last1 = force? last;
    checkMissing(last1);
    r168 = `-`(<missing>, last1);
    __10 = ldf `[` in base;
    r169 = dyn __10(gen24, r168);
    goto L24(i12, gen23, r169);
  L174():
    goto L23(i14, gen26, r170);
  L179():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L176(i10, r171, dx32);
  L180():
    M30 = ld M;
    check L182() else D81();
  L181():
    r179 = dyn base13("", <lang `[`(`$`(M, File), `-`(last))>);
    goto L25(i18, r175, dx33, r179);
  L243():
    nm1 = force? nm;
    checkMissing(nm1);
    match = ldf match in base;
    r263 = dyn match(" ", nm1, 0, NULL);
    check L244() else D111();
  L245():
    m1 = force? m;
    checkMissing(m1);
    c47 = `as.logical`(m1);
    if c47 then L246() else L34();
  L303():
    goto L50(r336);
  D81():
    deopt 295 [i18, r175, dx33, M30];
  D84():
    deopt 305 [i21, r195, nongen];
  D111():
    deopt 412 [r263];
  L34():
    goto L37();
  L37():
    sym18 = ldf match;
    base18 = ldf match in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L256() else L257();
  L182():
    M31 = force? M30;
    checkMissing(M31);
    c27 = `is.object`(M31);
    if c27 then L184() else L185(i18, r175, dx33, M31);
  L192():
    nongen1 = force? nongen;
    checkMissing(nongen1);
    r196 = `!`(nongen1);
    r197 = `&&`(r195, r196);
    st skip = r197;
    skip = ld skip;
    check L193() else D85();
  L244():
    goto L33(r263);
  L246():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L247() else L248();
  D85():
    deopt 310 [i21, skip];
  L35(r265):
    st nm = r265;
    goto L37();
  L38(r271):
    st m = r271;
    m4 = ld m;
    check L260() else D118();
  L183(i25, r185, dx41, dx42):
    c28 = `is.object`(dx42);
    if c28 then L187() else L188(i25, r185, dx41, dx42);
  L184():
    dr34 = tryDispatchBuiltin.1("$", M31);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L186() else L185(i18, r175, dx33, dr34);
  L185(i23, r183, dx38, M33):
    r186 = `$`(M33, <sym File>);
    goto L183(i23, r183, dx38, r186);
  L193():
    skip1 = force? skip;
    checkMissing(skip1);
    asg = ld asg;
    check L194() else D86();
  L247():
    nm2 = ld nm;
    check L249() else D113();
  L248():
    r264 = dyn base17(" ", <lang `[`(nm, `-`(m))>);
    goto L35(r264);
  L256():
    nm6 = ld nm;
    check L258() else D116();
  L257():
    r270 = dyn base18("misc", <sym nm>, 0);
    goto L38(r270);
  D86():
    deopt 311 [i21, skip1, asg];
  D113():
    deopt 419 [nm2];
  D116():
    deopt 433 [nm6];
  D118():
    deopt 440 [m4];
  L26(i29, r190, dx49, dx50):
    c29 = ldf c in base;
    r193 = dyn c29("", dx50);
    check L191() else D83();
  L186():
    dx40 = getTryDispatchBuiltinValue(dr34);
    goto L183(i18, r175, dx33, dx40);
  L187():
    dr36 = tryDispatchBuiltin.1("[", dx42);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L189() else L188(i25, r185, dx41, dr36);
  L188(i27, r188, dx45, dx46):
    last2 = ld last;
    check L190() else D82();
  L194():
    asg1 = force? asg;
    checkMissing(asg1);
    r198 = `||`(skip1, asg1);
    st skip = r198;
    M34 = ld M;
    check L195() else D87();
  L249():
    nm3 = force? nm2;
    checkMissing(nm3);
    c48 = `is.object`(nm3);
    if c48 then L250() else L251(nm3);
  L258():
    nm7 = force? nm6;
    checkMissing(nm7);
    match1 = ldf match in base;
    r272 = dyn match1("misc", nm7, 0, NULL);
    check L259() else D117();
  L260():
    m5 = force? m4;
    checkMissing(m5);
    c50 = `as.logical`(m5);
    if c50 then L261() else L39();
  D82():
    deopt 298 [i27, r188, dx45, dx46, last2];
  D83():
    deopt 303 [i29, r190, dx49, r193];
  D87():
    deopt 315 [i21, M34];
  D117():
    deopt 438 [r272];
  L36(dx82):
    c49 = ldf c in base;
    r268 = dyn c49(" ", dx82);
    check L254() else D115();
  L39():
    goto L42();
  L42():
    writeLines = ldf writeLines;
    check L271() else D122();
  L189():
    dx48 = getTryDispatchBuiltinValue(dr36);
    goto L26(i25, r185, dx41, dx48);
  L190():
    last3 = force? last2;
    checkMissing(last3);
    r191 = `-`(<missing>, last3);
    __11 = ldf `[` in base;
    r192 = dyn __11(dx46, r191);
    goto L26(i27, r188, dx45, r192);
  L191():
    goto L25(i29, r190, dx49, r193);
  L195():
    M35 = force? M34;
    checkMissing(M35);
    c30 = `is.object`(M35);
    if c30 then L196() else L197(i21, M35);
  L250():
    dr68 = tryDispatchBuiltin.1("[", nm3);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L252() else L251(dr68);
  L251(nm5):
    m2 = ld m;
    check L253() else D114();
  L259():
    goto L38(r272);
  L261():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L262() else L263();
  D114():
    deopt 421 [nm5, m2];
  D115():
    deopt 426 [r268];
  D122():
    deopt 457 [];
  L27(i33, dx52):
    st M = dx52;
    goto L21(i33);
  L40(r274):
    st nm = r274;
    goto L42();
  L196():
    dr38 = tryDispatchBuiltin.1("[", M35);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L198() else L197(i21, dr38);
  L197(i31, M37):
    skip2 = ld skip;
    check L199() else D88();
  L252():
    dx81 = getTryDispatchBuiltinValue(dr68);
    goto L36(dx81);
  L253():
    m3 = force? m2;
    checkMissing(m3);
    r266 = `-`(<missing>, m3);
    __20 = ldf `[` in base;
    r267 = dyn __20(nm5, r266);
    goto L36(r267);
  L254():
    goto L35(r268);
  L262():
    nm8 = ld nm;
    check L264() else D119();
  L263():
    r273 = dyn base19(<lang `[`(nm, `-`(m))>, "misc");
    goto L40(r273);
  L271():
    p68 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r280):
      return r280;
    L1():
      paste0 = ldf paste0;
      p66 = prom<V +>{
        nm12 = ld nm;
        nm13 = force? nm12;
        checkMissing(nm13);
        return nm13;
      };
      p67 = prom<V +>{
        nm14 = ld nm;
        nm15 = force? nm14;
        checkMissing(nm15);
        return nm15;
      };
      r283 = dyn paste0("<a href=\"#", p66, "\">", p67, "</a>");
      c53 = ldf c in base;
      r284 = dyn c53("<p style=\"text-align: center;\">", r283, "</p>\n");
      goto L0(r284);
    L2():
      r279 = dyn base20("<p style=\"text-align: center;\">", <lang paste0("<a href=\"#", nm, "\">", nm, "</a>")>, "</p>\n");
      goto L0(r279);
    };
    p69 = prom<V +>{
      outcon2 = ld outcon;
      outcon3 = force? outcon2;
      checkMissing(outcon3);
      return outcon3;
    };
    r287 = dyn writeLines(p68, p69);
    check L272() else D123();
  D88():
    deopt 317 [i31, M37, skip2];
  D119():
    deopt 444 [nm8];
  D123():
    deopt 460 [r287];
  L198():
    dx51 = getTryDispatchBuiltinValue(dr38);
    goto L27(i21, dx51);
  L199():
    skip3 = force? skip2;
    checkMissing(skip3);
    r199 = `!`(skip3);
    __12 = ldf `[` in base;
    r200 = dyn __12(M35, r199, <missing>);
    goto L27(i31, r200);
  L264():
    nm9 = force? nm8;
    checkMissing(nm9);
    c51 = `is.object`(nm9);
    if c51 then L265() else L266(nm9);
  L272():
    nm16 = ld nm;
    check L273() else D124();
  D124():
    deopt 461 [nm16];
  L41(dx84):
    c52 = ldf c in base;
    r277 = dyn c52(dx84, "misc");
    check L269() else D121();
  L265():
    dr70 = tryDispatchBuiltin.1("[", nm9);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L267() else L266(dr70);
  L266(nm11):
    m6 = ld m;
    check L268() else D120();
  L273():
    nm17 = force? nm16;
    checkMissing(nm17);
    s1 = toForSeq(nm17);
    l10 = length(s1);
    i35 = 0;
    goto L43(i35);
  D120():
    deopt 446 [nm11, m6];
  D121():
    deopt 452 [r277];
  L43(i36):
    i37 = `+`.1(i36, 1);
    c54 = `<`.1(l10, i37);
    if c54 then L274() else L47();
  L267():
    dx83 = getTryDispatchBuiltinValue(dr70);
    goto L41(dx83);
  L268():
    m7 = force? m6;
    checkMissing(m7);
    r275 = `-`(<missing>, m7);
    __21 = ldf `[` in base;
    r276 = dyn __21(nm11, r275);
    goto L41(r276);
  L269():
    goto L40(r277);
  L47():
    x1 = `[[`(s1, i37, NULL, TRUE);
    st f = x1;
    M75 = ld M;
    check L275() else D125();
  L274():
    goto L48();
  D125():
    deopt 463 [i37, M75];
  L275():
    M76 = force? M75;
    checkMissing(M76);
    c55 = `is.object`(M76);
    if c55 then L276() else L277(i37, M76);
  L44(i43, dx86):
    st MM = dx86;
    f4 = ld f;
    check L281() else D128();
  L276():
    dr72 = tryDispatchBuiltin.1("[", M76);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L278() else L277(i37, dr72);
  L277(i41, M78):
    first2 = ld first;
    check L279() else D126();
  D126():
    deopt 465 [i41, M78, first2];
  D128():
    deopt 473 [i43, f4];
  L278():
    dx85 = getTryDispatchBuiltinValue(dr72);
    goto L44(i37, dx85);
  L279():
    first3 = force? first2;
    checkMissing(first3);
    f2 = ld f;
    check L280() else D127();
  L281():
    f5 = force? f4;
    checkMissing(f5);
    r290 = `!=`(f5, " ");
    c56 = `as.logical`(r290);
    if c56 then L282() else L45();
  D127():
    deopt 466 [i41, M78, first3, f2];
  L45():
    goto L46(i43);
  L46(i46):
    writeLines1 = ldf writeLines;
    check L286() else D131();
  L280():
    f3 = force? f2;
    checkMissing(f3);
    r288 = `==`(first3, f3);
    __22 = ldf `[` in base;
    r289 = dyn __22(M76, r288, <missing>);
    goto L44(i41, r289);
  L282():
    cat = ldf cat;
    check L283() else D129();
  D129():
    deopt 478 [i43];
  D131():
    deopt 492 [i46];
  L283():
    p70 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    p71 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    p72 = prom<V +>{
      outcon4 = ld outcon;
      outcon5 = force? outcon4;
      checkMissing(outcon5);
      return outcon5;
    };
    r294 = dyn cat[, , , , , sep, file]("\n<h2><a id=\"", p70, "\">-- ", p71, " --</a></h2>\n\n", "", p72);
    check L284() else D130();
  L286():
    p76 = prom<V +>{
      sym21 = ldf c;
      base21 = ldf c in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r297):
      return r297;
    L1():
      paste1 = ldf paste0;
      p73 = prom<V +>{
        MM10 = ld MM;
        MM11 = force? MM10;
        checkMissing(MM11);
        c57 = `is.object`(MM11);
        if c57 then L1() else L2();
      L0(dx88):
        return dx88;
      L1():
        dr74 = tryDispatchBuiltin.1("[", MM11);
        dc37 = getTryDispatchBuiltinDispatched(dr74);
        if dc37 then L3() else L2();
      L2():
        __23 = ldf `[` in base;
        r298 = dyn __23(MM11, <missing>, 2);
        goto L0(r298);
      L3():
        dx87 = getTryDispatchBuiltinValue(dr74);
        goto L0(dx87);
      };
      p74 = prom<V +>{
        MM14 = ld MM;
        MM15 = force? MM14;
        checkMissing(MM15);
        c58 = `is.object`(MM15);
        if c58 then L1() else L2(MM15);
      L0(dx90):
        return dx90;
      L1():
        dr76 = tryDispatchBuiltin.1("$", MM15);
        dc38 = getTryDispatchBuiltinDispatched(dr76);
        if dc38 then L3() else L2(dr76);
      L2(MM17):
        r300 = `$`(MM17, <sym HTopic>);
        goto L0(r300);
      L3():
        dx89 = getTryDispatchBuiltinValue(dr76);
        goto L0(dx89);
      };
      p75 = prom<V +>{
        MM18 = ld MM;
        MM19 = force? MM18;
        checkMissing(MM19);
        c59 = `is.object`(MM19);
        if c59 then L1() else L2();
      L0(dx92):
        return dx92;
      L1():
        dr78 = tryDispatchBuiltin.1("[", MM19);
        dc39 = getTryDispatchBuiltinDispatched(dr78);
        if dc39 then L3() else L2();
      L2():
        __24 = ldf `[` in base;
        r302 = dyn __24(MM19, <missing>, 3);
        goto L0(r302);
      L3():
        dx91 = getTryDispatchBuiltinValue(dr78);
        goto L0(dx91);
      };
      r304 = dyn paste1("<tr><td style=\"width: 25%;\"><a href=\"", p73, ".html\">", p74, "</a></td>\n<td>", p75, "</td></tr>");
      c60 = ldf c in base;
      r305 = dyn c60("<table style=\"width: 100%;\">", r304, "</table>");
      goto L0(r305);
    L2():
      r296 = dyn base21("<table style=\"width: 100%;\">", <lang paste0("<tr><td style=\"width: 25%;\"><a href=\"", `[`(MM, , 2), ".html\">", `$`(MM, HTopic), "</a></td>\n<td>", `[`(MM, , 3), "</td></tr>")>, "</table>");
      goto L0(r296);
    };
    p77 = prom<V +>{
      outcon6 = ld outcon;
      outcon7 = force? outcon6;
      checkMissing(outcon7);
      return outcon7;
    };
    r308 = dyn writeLines1(p76, p77);
    check L287() else D132();
  D130():
    deopt 488 [i43, r294];
  D132():
    deopt 495 [i46, r308];
  L284():
    goto L46(i43);
  L287():
    goto L43(i46);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg length:cls, reg r4:V, reg rep_int:cls, reg r5:V, reg l:*, reg c:L, reg r7:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grep:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r11:V, reg ___:cls, reg r12:V, reg order:cls, reg xx:*, reg xx1:V, reg p1:p(V +), reg toupper:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg x7:*, reg x8:V, reg p4:p(V +), reg r18:V |
    mkenv;
    st x = x;
    sym = ldf `rep.int`;
    base = ldf `rep.int` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    st xx = r1;
    l = ld xx;
    c = `is.object`(l);
    if c then L10() else L11(FALSE, l);
  L3():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(TRUE, <lang length(x)>);
    goto L0(r);
  L1(r3):
    rep_int = ldf `rep.int` in base;
    r5 = dyn rep_int(TRUE, r3);
    check L9() else D2();
  L2(dx1):
    st xx = dx1;
    order = ldf order;
    check L15() else D5();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  L10():
    dr = tryDispatchBuiltin.0("[<-", l, FALSE);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(FALSE, dr);
  L11(r7, l2):
    grep = ldf grep;
    check L13() else D3();
  D0():
    deopt 5 [x1];
  D2():
    deopt 10 [r5];
  D3():
    deopt 16 [r7, l2, FALSE];
  D5():
    deopt 25 [];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r4 = dyn length(x2);
    check L8() else D1();
  L9():
    goto L0(r5);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L13():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r11 = dyn grep[, , fixed]("-package", p, TRUE);
    check L14() else D4();
  L15():
    p1 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p3 = prom<V +>{
      toupper = ldf toupper;
      p2 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r15 = dyn toupper(p2);
      return r15;
    };
    p4 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r18 = dyn order(p1, p3, p4);
    check L16() else D6();
  D1():
    deopt 8 [r4];
  D4():
    deopt 21 [r7, l2, FALSE, r11];
  D6():
    deopt 29 [r18];
  L8():
    goto L1(r4);
  L14():
    ___ = ldf `[<-` in base;
    r12 = dyn ___(l2, FALSE, r11);
    goto L2(r12);
  L16():
    popenv;
    return r18;
  }
}
fun inner129866984(pkg, title, version, conn) {
  (reg pkg:*, reg title:*, reg version:*, reg conn:*) -+> V { var pkg:*, var title:*, var version:*, var conn:*, reg cat:cls, reg paste:cls, reg HTMLheader:cls, reg title1:*, reg title2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg pkg1:*, reg pkg2:V, reg p3:p(V +), reg version1:*, reg version2:V, reg p4:p(V +), reg conn1:*, reg conn2:V, reg p5:p(V +), reg r8:V, reg cat1:cls, reg conn3:*, reg conn4:V, reg p6:p(V +), reg r10:V, reg file_exists:cls, reg file_path:cls, reg outDir:*, reg outDir1:V, reg p7:p(V +), reg r12:V, reg p8:p(V +), reg r14:V, reg c:L, reg cat2:cls, reg conn5:*, reg conn6:V, reg p9:p(V +), reg r16:V, reg file_exists1:cls, reg file_path1:cls, reg outDir2:*, reg outDir3:V, reg p10:p(V +), reg r19:V, reg p11:p(V +), reg r21:V, reg c1:L, reg cat3:cls, reg conn7:*, reg conn8:V, reg p12:p(V +), reg r23:V, reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg r26:V, reg file_exists2:cls, reg file_path2:cls, reg outDir4:*, reg outDir5:V, reg p13:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg c2:cls, reg r30:V, reg p14:p(V +), reg r32:V, reg p15:p(V +), reg r34:V, reg any:cls, reg r35:V, reg c3:L, reg cat4:cls, reg conn9:*, reg conn10:V, reg p16:p(V +), reg r37:V, reg cat5:cls, reg conn11:*, reg conn12:V, reg p17:p(V +), reg r40:V |
    mkenv;
    st pkg = pkg;
    st title = title;
    st version = version;
    st conn = conn;
    cat = ldf cat;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        HTMLheader = ldf HTMLheader;
        p = prom<V +>{
          title1 = ld title;
          title2 = force? title1;
          checkMissing(title2);
          return title2;
        };
        r1 = dyn HTMLheader[, Rhome, up, css](p, "../../..", "../../../doc/html/packages.html", "R.css");
        return r1;
      };
      r3 = dyn paste[, collapse](p1, "\n");
      return r3;
    };
    p3 = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p4 = prom<V +>{
      version1 = ld version;
      version2 = force? version1;
      checkMissing(version2);
      return version2;
    };
    p5 = prom<V +>{
      conn1 = ld conn;
      conn2 = force? conn1;
      checkMissing(conn2);
      return conn2;
    };
    r8 = dyn cat[, , , , , , sep, file](p2, "<h2>Documentation for package &lsquo;", p3, "&rsquo; version ", p4, "</h2>\n\n", "", p5);
    check L8() else D1();
  D1():
    deopt 12 [r8];
  L8():
    cat1 = ldf cat;
    check L9() else D2();
  D2():
    deopt 14 [];
  L9():
    p6 = prom<V +>{
      conn3 = ld conn;
      conn4 = force? conn3;
      checkMissing(conn4);
      return conn4;
    };
    r10 = dyn cat1[, file]("<ul><li><a href=\"../DESCRIPTION\">DESCRIPTION file</a>.</li>\n", p6);
    check L10() else D3();
  D3():
    deopt 18 [r10];
  L10():
    file_exists = ldf `file.exists`;
    check L11() else D4();
  D4():
    deopt 20 [];
  L11():
    p8 = prom<V +>{
      file_path = ldf `file.path`;
      p7 = prom<V +>{
        outDir = ld outDir;
        outDir1 = force? outDir;
        checkMissing(outDir1);
        return outDir1;
      };
      r12 = dyn file_path(p7, "doc");
      return r12;
    };
    r14 = dyn file_exists(p8);
    check L12() else D5();
  D5():
    deopt 22 [r14];
  L12():
    c = `as.logical`(r14);
    if c then L13() else L0();
  L0():
    goto L1();
  L1():
    file_exists1 = ldf `file.exists`;
    check L17() else D8();
  L13():
    cat2 = ldf cat;
    check L14() else D6();
  D6():
    deopt 24 [];
  D8():
    deopt 32 [];
  L14():
    p9 = prom<V +>{
      conn5 = ld conn;
      conn6 = force? conn5;
      checkMissing(conn6);
      return conn6;
    };
    r16 = dyn cat2[, file]("<li><a href=\"../doc/index.html\">User guides, package vignettes and other documentation.</a></li>\n", p9);
    check L15() else D7();
  L17():
    p11 = prom<V +>{
      file_path1 = ldf `file.path`;
      p10 = prom<V +>{
        outDir2 = ld outDir;
        outDir3 = force? outDir2;
        checkMissing(outDir3);
        return outDir3;
      };
      r19 = dyn file_path1(p10, "demo");
      return r19;
    };
    r21 = dyn file_exists1(p11);
    check L18() else D9();
  D7():
    deopt 28 [r16];
  D9():
    deopt 34 [r21];
  L15():
    goto L1();
  L18():
    c1 = `as.logical`(r21);
    if c1 then L19() else L2();
  L2():
    goto L3();
  L3():
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L19():
    cat3 = ldf cat;
    check L20() else D10();
  D10():
    deopt 36 [];
  L4(r26):
    c3 = `as.logical`(r26);
    if c3 then L28() else L5();
  L20():
    p12 = prom<V +>{
      conn7 = ld conn;
      conn8 = force? conn7;
      checkMissing(conn8);
      return conn8;
    };
    r23 = dyn cat3[, sep, file]("<li><a href=\"../demo\">Code demos</a>.  Use <a href=\"../../utils/help/demo\">demo()</a> to run them.</li>\n", "", p12);
    check L21() else D11();
  L23():
    file_exists2 = ldf `file.exists`;
    check L25() else D12();
  L24():
    r25 = dyn base(<lang file.exists(file.path(outDir, c("NEWS", "NEWS.Rd", "NEWS.md")))>);
    goto L4(r25);
  D11():
    deopt 42 [r23];
  D12():
    deopt 48 [];
  L5():
    goto L6();
  L6():
    cat5 = ldf cat;
    check L32() else D17();
  L21():
    goto L3();
  L25():
    p15 = prom<V +>{
      file_path2 = ldf `file.path`;
      p13 = prom<V +>{
        outDir4 = ld outDir;
        outDir5 = force? outDir4;
        checkMissing(outDir5);
        return outDir5;
      };
      p14 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r29):
        return r29;
      L1():
        c2 = ldf c in base;
        r30 = dyn c2("NEWS", "NEWS.Rd", "NEWS.md");
        goto L0(r30);
      L2():
        r28 = dyn base1("NEWS", "NEWS.Rd", "NEWS.md");
        goto L0(r28);
      };
      r32 = dyn file_path2(p13, p14);
      return r32;
    };
    r34 = dyn file_exists2(p15);
    check L26() else D13();
  L28():
    cat4 = ldf cat;
    check L29() else D15();
  D13():
    deopt 50 [r34];
  D15():
    deopt 54 [];
  D17():
    deopt 64 [];
  L26():
    any = ldf any in base;
    r35 = dyn any(r34);
    check L27() else D14();
  L29():
    p16 = prom<V +>{
      conn9 = ld conn;
      conn10 = force? conn9;
      checkMissing(conn10);
      return conn10;
    };
    r37 = dyn cat4[, sep, file]("<li><a href=\"../NEWS\">Package NEWS</a>.</li>\n", "", p16);
    check L30() else D16();
  L32():
    p17 = prom<V +>{
      conn11 = ld conn;
      conn12 = force? conn11;
      checkMissing(conn12);
      return conn12;
    };
    r40 = dyn cat5[, sep, file]("</ul>\n\n<h2>Help Pages</h2>\n\n\n", "", p17);
    check L33() else D18();
  D14():
    deopt 52 [r35];
  D16():
    deopt 60 [r37];
  D18():
    deopt 70 [r40];
  L27():
    goto L4(r35);
  L30():
    goto L6();
  L33():
    popenv;
    return r40;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}
fun inner1924495852(x, backtick) {
  (reg x:*, reg backtick:*) -+> V { var x:*, var backtick:*, reg gsub:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg gsub1:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg gsub2:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r5:V, reg backtick1:*, reg backtick2:V, reg c:L, reg gsub3:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r7:V, reg gsub4:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r9:V, reg x11:*, reg x12:V |
    mkenv;
    st x = x;
    st backtick = backtick;
    gsub = ldf gsub;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn gsub[, , , fixed]("&", "&amp;", p, TRUE);
    check L3() else D1();
  D1():
    deopt 7 [r1];
  L3():
    st x = r1;
    gsub1 = ldf gsub;
    check L4() else D2();
  D2():
    deopt 10 [];
  L4():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn gsub1[, , , fixed]("<", "&lt;", p1, TRUE);
    check L5() else D3();
  D3():
    deopt 16 [r3];
  L5():
    st x = r3;
    gsub2 = ldf gsub;
    check L6() else D4();
  D4():
    deopt 19 [];
  L6():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r5 = dyn gsub2[, , , fixed](">", "&gt;", p2, TRUE);
    check L7() else D5();
  D5():
    deopt 25 [r5];
  L7():
    st x = r5;
    backtick1 = ld backtick;
    check L8() else D6();
  D6():
    deopt 27 [backtick1];
  L8():
    backtick2 = force? backtick1;
    checkMissing(backtick2);
    c = `as.logical`(backtick2);
    if c then L9() else L0();
  L0():
    goto L1();
  L1():
    x11 = ld x;
    check L15() else D11();
  L9():
    gsub3 = ldf gsub;
    check L10() else D7();
  D7():
    deopt 30 [];
  D11():
    deopt 49 [x11];
  L10():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r7 = dyn gsub3[, , , fixed]("---", "-", p3, TRUE);
    check L11() else D8();
  L15():
    x12 = force? x11;
    checkMissing(x12);
    popenv;
    return x12;
  D8():
    deopt 36 [r7];
  L11():
    st x = r7;
    gsub4 = ldf gsub;
    check L12() else D9();
  D9():
    deopt 39 [];
  L12():
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r9 = dyn gsub4[, , , fixed]("--", "-", p4, TRUE);
    check L13() else D10();
  D10():
    deopt 45 [r9];
  L13():
    st x = r9;
    goto L1();
  }
}