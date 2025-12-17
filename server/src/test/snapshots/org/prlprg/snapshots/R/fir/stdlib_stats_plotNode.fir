fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2259041756;
    st plotNode = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2259041756(x1, x2, subtree, type, center, leaflab, dLeaf, nodePar, edgePar, horiz) {
  (reg x1:*, reg x2:*, reg subtree:*, reg type:*, reg center:*, reg leaflab:*, reg dLeaf:*, reg nodePar:*, reg edgePar:*, reg horiz:*) -+> V { var x1:*, var x2:*, var subtree:*, var type:*, var center:*, var leaflab:*, var dLeaf:*, var nodePar:*, var edgePar:*, var horiz:*, reg horiz_isMissing:L, reg horiz_orDefault:*, reg subtree1:*, reg subtree2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg integer:cls, reg r3:V, reg integer1:cls, reg r4:V, reg is_leaf:cls, reg subtree3:*, reg subtree4:V, reg p:p(V +), reg r6:V, reg r7:V, reg c:L, reg c2:V, reg x3:*, reg x4:V, reg x5:*, reg x6:V, reg r8:V, reg c3:L, reg c4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg subtree5:*, reg subtree6:V, reg attr:cls, reg r11:V, reg plotNodeLimit:cls, reg x7:*, reg x8:V, reg p1:p(V +), reg x9:*, reg x10:V, reg p2:p(V +), reg subtree7:*, reg subtree8:V, reg p3:p(V +), reg center1:*, reg center2:V, reg p4:p(V +), reg r16:V, reg bx:*, reg bx1:V, reg c6:L, reg bx3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r17:V, reg depth:*, reg depth1:V, reg r18:V, reg bx4:*, reg bx5:V, reg c7:L, reg bx7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r19:V, reg l:*, reg c8:L, reg dx5:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx7:V, reg dx9:V, reg depth2:*, reg depth3:V, reg ____:cls, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg subtree9:*, reg subtree10:V, reg attr1:cls, reg r25:V, reg c9:V, reg r26:V, reg hasP:*, reg hasP1:V, reg r27:V, reg c10:L, reg nodePar1:*, reg nodePar2:V, reg getOption:cls, reg r28:V, reg c11:L, reg cat:cls, reg inner:*, reg inner1:V, reg c12:L, reg p5:p(V +), reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg nPar:*, reg nPar1:V, reg c13:V, reg r33:V, reg c14:L, reg cat1:cls, reg r34:V, reg str:cls, reg nPar2:*, reg nPar3:V, reg p6:p(V +), reg r36:V, reg cat2:cls, reg inner2:*, reg inner3:V, reg c15:L, reg paste:cls, reg formatC:cls, reg yTop:*, reg yTop1:V, reg p7:p(V +), reg r39:V, reg p8:p(V +), reg r41:V, reg p9:p(V +), reg formatC1:cls, reg x11:*, reg x12:V, reg p10:p(V +), reg r44:V, reg p11:p(V +), reg formatC2:cls, reg x13:*, reg x14:V, reg p12:p(V +), reg r47:V, reg p13:p(V +), reg formatC3:cls, reg xTop:*, reg xTop1:V, reg p14:p(V +), reg r50:V, reg p15:p(V +), reg r52:V, reg r54:cls, reg r55:cls, reg inner4:*, reg inner5:V, reg c16:L, reg c17:V, reg hasP2:*, reg hasP3:V, reg c19:L, reg c20:V, reg c22:L, reg r56:R, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg r58:V, reg nPar4:*, reg nPar5:V, reg c23:V, reg r59:V, reg c24:L, reg Xtract:cls, reg nPar6:*, reg nPar7:V, reg p16:p(V +), reg p17:p(V +), reg i:*, reg i1:V, reg p18:p(V +), reg r63:V, reg Xtract1:cls, reg nPar8:*, reg nPar9:V, reg p19:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r65:V, reg r66:V, reg c25:cls, reg r67:V, reg p20:p(V +), reg i2:*, reg i3:V, reg p21:p(V +), reg r70:V, reg Xtract2:cls, reg nPar10:*, reg nPar11:V, reg p22:p(V +), reg par:cls, reg r72:V, reg p23:p(V +), reg i4:*, reg i5:V, reg p24:p(V +), reg r75:V, reg Xtract3:cls, reg nPar12:*, reg nPar13:V, reg p25:p(V +), reg par1:cls, reg r77:V, reg p26:p(V +), reg i6:*, reg i7:V, reg p27:p(V +), reg r80:V, reg points:cls, reg horiz1:*, reg horiz2:V, reg c26:L, reg cbind:cls, reg yTop2:*, reg yTop3:V, reg p28:p(V +), reg xTop2:*, reg xTop3:V, reg p29:p(V +), reg r83:V, reg cbind1:cls, reg xTop4:*, reg xTop5:V, reg p30:p(V +), reg yTop4:*, reg yTop5:V, reg p31:p(V +), reg r86:V, reg p32:p(V +), reg pch:*, reg pch1:V, reg p33:p(V +), reg bg:*, reg bg1:V, reg p34:p(V +), reg col:*, reg col1:V, reg p35:p(V +), reg cex:*, reg cex1:V, reg p36:p(V +), reg r92:V, reg leaflab1:*, reg leaflab2:V, reg r94:V, reg c27:L, reg Xtract4:cls, reg nPar14:*, reg nPar15:V, reg p37:p(V +), reg i8:*, reg i9:V, reg p38:p(V +), reg r97:V, reg Xtract5:cls, reg nPar16:*, reg nPar17:V, reg p39:p(V +), reg par2:cls, reg r100:V, reg p40:p(V +), reg i10:*, reg i11:V, reg p41:p(V +), reg r103:V, reg Xtract6:cls, reg nPar18:*, reg nPar19:V, reg p42:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r105:V, reg r106:V, reg c28:cls, reg r107:V, reg p43:p(V +), reg i12:*, reg i13:V, reg p44:p(V +), reg r110:V, reg Xtract7:cls, reg nPar20:*, reg nPar21:V, reg p45:p(V +), reg par3:cls, reg r112:V, reg p46:p(V +), reg i14:*, reg i15:V, reg p47:p(V +), reg r115:V, reg Xtract8:cls, reg nPar22:*, reg nPar23:V, reg p48:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r117:V, reg r118:V, reg c29:cls, reg r119:V, reg p49:p(V +), reg i16:*, reg i17:V, reg p50:p(V +), reg r122:V, reg is_leaf1:cls, reg subtree11:*, reg subtree12:V, reg p51:p(V +), reg r124:V, reg c30:L, reg leaflab3:*, reg leaflab4:V, reg r125:V, reg c31:L, reg horiz3:*, reg horiz4:V, reg c32:L, reg yTop6:*, reg yTop7:V, reg dLeaf1:*, reg dLeaf2:V, reg lab_cex:*, reg lab_cex1:V, reg r126:V, reg r127:V, reg xTop6:*, reg xTop7:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r128:V, reg r129:V, reg c33:cls, reg r130:V, reg yTop8:*, reg yTop9:V, reg dLeaf3:*, reg dLeaf4:V, reg lab_cex2:*, reg lab_cex3:V, reg r132:V, reg r133:V, reg xTop8:*, reg xTop9:V, reg asTxt:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r134:V, reg r135:V, reg subtree13:*, reg subtree14:V, reg attr2:cls, reg r136:V, reg p52:p(V +), reg r138:V, reg text:cls, reg X:*, reg X1:V, reg p53:p(V +), reg Y:*, reg Y1:V, reg p54:p(V +), reg nodeText:*, reg nodeText1:V, reg p55:p(V +), reg lab_xpd:*, reg lab_xpd1:V, reg p56:p(V +), reg srt:*, reg srt1:V, reg p57:p(V +), reg adj:*, reg adj1:V, reg p58:p(V +), reg lab_cex4:*, reg lab_cex5:V, reg p59:p(V +), reg lab_col:*, reg lab_col1:V, reg p60:p(V +), reg lab_font:*, reg lab_font1:V, reg p61:p(V +), reg r148:V, reg r149:V, reg inner6:*, reg inner7:V, reg c34:L, reg r151:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r152:V, reg r153:V, reg subtree15:*, reg subtree16:V, reg r154:I, reg s:V, reg l3:I, reg i18:I, reg i19:I, reg i20:I, reg c35:L, reg x15:V, reg subtree17:*, reg subtree18:V, reg c36:L, reg i24:I, reg subtree20:V, reg dr6:V, reg dc3:L, reg dx10:V, reg i26:I, reg dx11:V, reg k:*, reg k1:V, reg __:cls, reg r155:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r156:V, reg i29:I, reg r157:V, reg child:*, reg child1:V, reg attr3:cls, reg r158:V, reg getOption1:cls, reg r159:V, reg c37:L, reg cat3:cls, reg k2:*, reg k3:V, reg p62:p(V +), reg yBot:*, reg yBot1:V, reg p63:p(V +), reg r162:V, reg i32:I, reg sym13:cls, reg base13:cls, reg guard13:L, reg r164:V, reg i35:I, reg r165:V, reg yBot2:*, reg yBot3:V, reg c38:V, reg c39:L, reg i38:I, reg center3:*, reg center4:V, reg c40:L, reg mean:cls, reg bx8:*, reg bx9:V, reg c41:L, reg bx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r167:V, reg c42:L, reg dx15:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg k4:*, reg k5:V, reg k6:*, reg k7:V, reg r168:V, reg r169:V, reg __1:cls, reg r170:V, reg p64:p(V +), reg r172:V, reg i41:I, reg r173:V, reg bx12:*, reg bx13:V, reg c43:L, reg i43:I, reg bx15:V, reg dr12:V, reg dc6:L, reg dx18:V, reg i45:I, reg dx19:V, reg r174:V, reg c44:L, reg i47:I, reg dx21:V, reg dr14:V, reg dc7:L, reg dx22:V, reg i49:I, reg dx23:V, reg k8:*, reg k9:V, reg __2:cls, reg r175:V, reg _midDend:cls, reg child2:*, reg child3:V, reg p65:p(V +), reg r177:V, reg r178:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r179:V, reg i52:I, reg r180:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r181:V, reg i55:I, reg r182:V, reg child4:*, reg child5:V, reg attr4:cls, reg r183:V, reg c45:V, reg r184:V, reg hasE:*, reg hasE1:V, reg r185:V, reg c46:L, reg edgePar1:*, reg edgePar2:V, reg i58:I, reg is_leaf2:cls, reg child6:*, reg child7:V, reg p66:p(V +), reg r187:V, reg r188:V, reg c47:L, reg i59:I, reg c48:V, reg hasE2:*, reg hasE3:V, reg c50:L, reg c51:V, reg c53:L, reg i64:I, reg r189:R, reg Xtract9:cls, reg ePar:*, reg ePar1:V, reg p67:p(V +), reg par4:cls, reg r191:V, reg p68:p(V +), reg i65:*, reg i66:V, reg p69:p(V +), reg r194:V, reg Xtract10:cls, reg ePar2:*, reg ePar3:V, reg p70:p(V +), reg par5:cls, reg r196:V, reg p71:p(V +), reg i67:*, reg i68:V, reg p72:p(V +), reg r199:V, reg Xtract11:cls, reg ePar4:*, reg ePar5:V, reg p73:p(V +), reg par6:cls, reg r201:V, reg p74:p(V +), reg i69:*, reg i70:V, reg p75:p(V +), reg r204:V, reg type1:*, reg type2:V, reg r205:V, reg c54:L, reg segmentsHV:cls, reg xTop10:*, reg xTop11:V, reg p76:p(V +), reg yTop10:*, reg yTop11:V, reg p77:p(V +), reg xBot:*, reg xBot1:V, reg p78:p(V +), reg yBot4:*, reg yBot5:V, reg p79:p(V +), reg r210:V, reg i73:I, reg segmentsHV1:cls, reg xTop12:*, reg xTop13:V, reg p80:p(V +), reg yTop12:*, reg yTop13:V, reg p81:p(V +), reg xBot2:*, reg xBot3:V, reg p82:p(V +), reg yTop14:*, reg yTop15:V, reg p83:p(V +), reg r216:V, reg segmentsHV2:cls, reg xBot4:*, reg xBot5:V, reg p84:p(V +), reg yTop16:*, reg yTop17:V, reg p85:p(V +), reg xBot6:*, reg xBot7:V, reg p86:p(V +), reg yBot6:*, reg yBot7:V, reg p87:p(V +), reg r221:V, reg is_leaf3:cls, reg child8:*, reg child9:V, reg p88:p(V +), reg r223:V, reg c55:L, reg i75:I, reg c57:V, reg leaflab5:*, reg leaflab6:V, reg r224:V, reg c58:L, reg c59:V, reg c61:L, reg asTxt1:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r225:V, reg r226:V, reg child10:*, reg child11:V, reg attr5:cls, reg r227:V, reg p89:p(V +), reg r229:V, reg getOption2:cls, reg r230:V, reg c62:L, reg cat4:cls, reg format:cls, reg nodeText2:*, reg nodeText3:V, reg p90:p(V +), reg r232:V, reg p91:p(V +), reg r234:V, reg i81:I, reg strwidth:cls, reg nodeText4:*, reg nodeText5:V, reg p92:p(V +), reg lab_cex6:*, reg lab_cex7:V, reg p93:p(V +), reg r238:V, reg r239:V, reg r240:V, reg strheight:cls, reg nodeText6:*, reg nodeText7:V, reg p94:p(V +), reg lab_cex8:*, reg lab_cex9:V, reg p95:p(V +), reg r243:V, reg r244:V, reg r245:V, reg rect:cls, reg xBot8:*, reg xBot9:V, reg hln:*, reg hln1:V, reg r246:V, reg p96:p(V +), reg yBot8:*, reg yBot9:V, reg p97:p(V +), reg xBot10:*, reg xBot11:V, reg hln2:*, reg hln3:V, reg r249:V, reg p98:p(V +), reg yBot10:*, reg yBot11:V, reg vln:*, reg vln1:V, reg r251:V, reg r252:V, reg p99:p(V +), reg p_col:*, reg p_col1:V, reg p100:p(V +), reg r255:V, reg text1:cls, reg xBot12:*, reg xBot13:V, reg p101:p(V +), reg yBot12:*, reg yBot13:V, reg vln2:*, reg vln3:V, reg r257:V, reg p102:p(V +), reg nodeText8:*, reg nodeText9:V, reg p103:p(V +), reg lab_xpd2:*, reg lab_xpd3:V, reg p104:p(V +), reg lab_cex10:*, reg lab_cex11:V, reg p105:p(V +), reg lab_col2:*, reg lab_col3:V, reg p106:p(V +), reg lab_font2:*, reg lab_font3:V, reg p107:p(V +), reg r264:V, reg i82:I, reg sym17:cls, reg base17:cls, reg guard17:L, reg r266:V, reg i85:I, reg r267:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r268:V, reg i88:I, reg r269:V, reg child12:*, reg child13:V, reg attr6:cls, reg r270:V, reg c63:V, reg r271:V, reg c64:L, reg asTxt2:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r272:V, reg r273:V, reg child14:*, reg child15:V, reg attr7:cls, reg r274:V, reg p108:p(V +), reg r276:V, reg getOption3:cls, reg r277:V, reg c65:L, reg cat5:cls, reg format1:cls, reg edgeText:*, reg edgeText1:V, reg p109:p(V +), reg r279:V, reg p110:p(V +), reg r281:V, reg i93:I, reg sym20:cls, reg base20:cls, reg guard20:L, reg r283:V, reg i96:I, reg r284:V, reg vln4:*, reg vln5:V, reg c66:V, reg r285:V, reg c67:L, reg type3:*, reg type4:V, reg r286:V, reg c68:L, reg xTop14:*, reg xTop15:V, reg xBot14:*, reg xBot15:V, reg r287:V, reg xTop16:*, reg xTop17:V, reg xBot16:*, reg xBot17:V, reg r288:V, reg yTop18:*, reg yTop19:V, reg yBot14:*, reg yBot15:V, reg r289:V, reg r290:V, reg vln6:*, reg vln7:V, reg r291:V, reg r292:V, reg r293:V, reg i101:I, reg r294:V, reg xBot18:*, reg xBot19:V, reg yTop20:*, reg yTop21:V, reg yBot16:*, reg yBot17:V, reg r295:V, reg vln8:*, reg vln9:V, reg r296:V, reg r297:V, reg r298:V, reg i102:I, reg type5:*, reg type6:V, reg r300:V, reg c69:L, reg xTop18:*, reg xTop19:V, reg xBot20:*, reg xBot21:V, reg r301:V, reg r302:V, reg i105:I, reg r303:V, reg xBot22:*, reg xBot23:V, reg yTop22:*, reg yTop23:V, reg yBot18:*, reg yBot19:V, reg r304:V, reg r305:V, reg Xtract12:cls, reg ePar6:*, reg ePar7:V, reg p111:p(V +), reg i106:*, reg i107:V, reg p112:p(V +), reg r308:V, reg Xtract13:cls, reg ePar8:*, reg ePar9:V, reg p113:p(V +), reg par7:cls, reg r310:V, reg p114:p(V +), reg i108:*, reg i109:V, reg p115:p(V +), reg r313:V, reg Xtract14:cls, reg ePar10:*, reg ePar11:V, reg p116:p(V +), reg lwd:*, reg lwd1:V, reg p117:p(V +), reg i110:*, reg i111:V, reg p118:p(V +), reg r317:V, reg Xtract15:cls, reg ePar12:*, reg ePar13:V, reg p119:p(V +), reg lty:*, reg lty1:V, reg p120:p(V +), reg i112:*, reg i113:V, reg p121:p(V +), reg r321:V, reg Xtract16:cls, reg ePar14:*, reg ePar15:V, reg p122:p(V +), reg col2:*, reg col3:V, reg p123:p(V +), reg i114:*, reg i115:V, reg p124:p(V +), reg r325:V, reg Xtract17:cls, reg ePar16:*, reg ePar17:V, reg p125:p(V +), reg i116:*, reg i117:V, reg p126:p(V +), reg r328:V, reg Xtract18:cls, reg ePar18:*, reg ePar19:V, reg p127:p(V +), reg par8:cls, reg r330:V, reg p128:p(V +), reg i118:*, reg i119:V, reg p129:p(V +), reg r333:V, reg strheight1:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r334:V, reg r335:V, reg edgeText2:*, reg edgeText3:V, reg c70:cls, reg r336:V, reg p130:p(V +), reg t_cex:*, reg t_cex1:V, reg p131:p(V +), reg r339:V, reg r340:V, reg strwidth1:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r341:V, reg r342:V, reg edgeText4:*, reg edgeText5:V, reg c71:cls, reg r343:V, reg p132:p(V +), reg t_cex2:*, reg t_cex3:V, reg p133:p(V +), reg r346:V, reg r347:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r348:V, reg i122:I, reg r349:V, reg hlm:*, reg hlm1:V, reg c72:L, reg i124:I, reg hlm3:V, reg dr16:V, reg dc8:L, reg dx24:V, reg i126:I, reg dx25:V, reg __3:cls, reg r350:V, reg hlm4:*, reg hlm5:V, reg c73:L, reg i128:I, reg hlm7:V, reg dr18:V, reg dc9:L, reg dx26:V, reg i130:I, reg dx27:V, reg __4:cls, reg r351:V, reg hlm8:*, reg hlm9:V, reg c74:L, reg i132:I, reg dx29:V, reg hlm11:V, reg dr20:V, reg dc10:L, reg dx31:V, reg i134:I, reg dx32:V, reg dx33:V, reg __5:cls, reg r352:V, reg r353:V, reg hlm12:*, reg hlm13:V, reg c75:L, reg i136:I, reg hlm15:V, reg dr22:V, reg dc11:L, reg dx34:V, reg i138:I, reg dx35:V, reg __6:cls, reg r354:V, reg c76:cls, reg r355:V, reg horiz5:*, reg horiz6:V, reg c77:L, reg polygon:cls, reg my:*, reg my1:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r356:V, reg my4:V, reg r357:V, reg hl3:*, reg hl4:V, reg r358:V, reg hl5:*, reg hl6:V, reg c78:cls, reg r359:V, reg r360:V, reg p134:p(V +), reg mx:*, reg mx1:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r362:V, reg mx4:V, reg r363:V, reg vlm:*, reg vlm1:V, reg sum:cls, reg r364:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r367:V, reg mx7:V, reg r368:V, reg r369:V, reg c79:cls, reg r370:V, reg r371:V, reg r372:V, reg p135:p(V +), reg p_col2:*, reg p_col3:V, reg p136:p(V +), reg p_border:*, reg p_border1:V, reg p137:p(V +), reg p_lty:*, reg p_lty1:V, reg p138:p(V +), reg p_lwd:*, reg p_lwd1:V, reg p139:p(V +), reg r378:V, reg text2:cls, reg my5:*, reg my6:V, reg p140:p(V +), reg mx8:*, reg mx9:V, reg p141:p(V +), reg edgeText6:*, reg edgeText7:V, reg p142:p(V +), reg t_cex4:*, reg t_cex5:V, reg p143:p(V +), reg t_col:*, reg t_col1:V, reg p144:p(V +), reg t_font:*, reg t_font1:V, reg p145:p(V +), reg r385:V, reg i141:I, reg r386:V, reg polygon1:cls, reg mx10:*, reg mx11:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r387:V, reg mx14:V, reg r388:V, reg hl7:*, reg hl8:V, reg r389:V, reg hl9:*, reg hl10:V, reg c80:cls, reg r390:V, reg r391:V, reg p146:p(V +), reg my7:*, reg my8:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r393:V, reg my11:V, reg r394:V, reg vlm2:*, reg vlm3:V, reg sum1:cls, reg r395:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r398:V, reg my14:V, reg r399:V, reg r400:V, reg c81:cls, reg r401:V, reg r402:V, reg r403:V, reg p147:p(V +), reg p_col4:*, reg p_col5:V, reg p148:p(V +), reg p_border2:*, reg p_border3:V, reg p149:p(V +), reg p_lty2:*, reg p_lty3:V, reg p150:p(V +), reg p_lwd2:*, reg p_lwd3:V, reg p151:p(V +), reg r409:V, reg text3:cls, reg mx15:*, reg mx16:V, reg p152:p(V +), reg my15:*, reg my16:V, reg p153:p(V +), reg edgeText8:*, reg edgeText9:V, reg p154:p(V +), reg t_cex6:*, reg t_cex7:V, reg p155:p(V +), reg t_col2:*, reg t_col3:V, reg p156:p(V +), reg t_font2:*, reg t_font3:V, reg p157:p(V +), reg r416:V, reg i142:I, reg inner8:*, reg inner9:V, reg c82:L, reg c84:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r418:V, reg c87:L, reg r419:V, reg subtree21:*, reg subtree22:V, reg length:cls, reg r420:V, reg c88:L, reg c89:V, reg c91:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r421:V, reg r422:V, reg subtree23:*, reg subtree24:V, reg length1:cls, reg r423:V, reg l4:*, reg c92:L, reg r425:V, reg l6:*, reg dr24:V, reg dc12:L, reg dx36:V, reg dx37:V, reg depth4:*, reg depth5:V, reg ___:cls, reg r428:V, reg storage_mode:cls, reg kk:*, reg kk1:V, reg p158:p(V +), reg r430:V, reg storage_mode1:cls, reg KK:*, reg KK1:V, reg p159:p(V +), reg r432:V, reg r433:V, reg c93:L, reg storage_mode2:cls, reg KK2:*, reg KK3:V, reg p160:p(V +), reg r435:V, reg l7:*, reg storage_mode__:cls, reg r436:V, reg l8:*, reg c94:L, reg r439:I, reg l10:*, reg dr26:V, reg dc13:L, reg dx38:V, reg dx39:V, reg depth6:*, reg depth7:V, reg ___1:cls, reg r442:V, reg bx16:*, reg bx17:V, reg c95:L, reg bx19:V, reg dr28:V, reg dc14:L, reg dx40:V, reg dx41:V, reg r443:V, reg c96:L, reg dx43:V, reg dr30:V, reg dc15:L, reg dx44:V, reg dx45:V, reg __7:cls, reg r444:V, reg bx20:*, reg bx21:V, reg c97:L, reg bx23:V, reg dr32:V, reg dc16:L, reg dx46:V, reg dx47:V, reg r445:V, reg c98:L, reg dx49:V, reg dr34:V, reg dc17:L, reg dx50:V, reg dx51:V, reg __8:cls, reg r446:V, reg subtree25:*, reg subtree26:V, reg c99:L, reg subtree28:V, reg dr36:V, reg dc18:L, reg dx52:V, reg dx53:V, reg __9:cls, reg r447:V, reg depth8:*, reg depth9:V, reg r448:V, reg depth10:*, reg depth11:V, reg r449:V, reg c100:L, reg c101:V, reg kk2:*, reg kk3:V, reg c103:L, reg c105:L, reg kk5:V, reg dr38:V, reg dc19:L, reg dx55:V, reg c107:L, reg dx56:V, reg depth12:*, reg depth13:V, reg __10:cls, reg r450:V, reg KK4:*, reg KK5:V, reg c108:L, reg c110:L, reg dx58:V, reg KK7:V, reg dr40:V, reg dc20:L, reg dx60:V, reg c112:L, reg dx61:V, reg dx62:V, reg depth14:*, reg depth15:V, reg __11:cls, reg r451:V, reg r452:V, reg c113:L, reg c114:V, reg c116:L, reg depth16:*, reg depth17:V, reg r454:V, reg c117:L, reg depth18:*, reg depth19:V, reg l11:*, reg length__:cls, reg r456:V, reg kk6:*, reg kk7:V, reg c118:L, reg kk9:V, reg dr42:V, reg dc21:L, reg dx63:V, reg dx64:V, reg depth20:*, reg depth21:V, reg __12:cls, reg r457:V, reg r458:V, reg l12:*, reg c119:L, reg r460:V, reg l14:*, reg dr44:V, reg dc22:L, reg dx65:V, reg dx66:V, reg depth22:*, reg depth23:V, reg ___2:cls, reg r463:V, reg llimit:*, reg llimit1:V, reg c120:L, reg llimit3:V, reg dr46:V, reg dc23:L, reg dx67:V, reg dx68:V, reg depth24:*, reg depth25:V, reg __13:cls, reg r464:V, reg c121:L, reg dx70:V, reg dr48:V, reg dc24:L, reg dx71:V, reg dx72:V, reg k10:*, reg k11:V, reg __14:cls, reg r465:V, reg llimit4:*, reg llimit5:V, reg c122:L, reg llimit7:V, reg dr50:V, reg dc25:L, reg dx73:V, reg dx74:V, reg depth26:*, reg depth27:V, reg __15:cls, reg r466:V, reg c123:L, reg dx76:V, reg dr52:V, reg dc26:L, reg dx77:V, reg dx78:V, reg k12:*, reg k13:V, reg r467:V, reg __16:cls, reg r468:V, reg wholetree:*, reg wholetree1:V, reg c124:L, reg wholetree3:V, reg dr54:V, reg dc27:L, reg dx79:V, reg dx80:V, reg kk10:*, reg kk11:V, reg __17:cls, reg r469:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r470:V, reg r471:V, reg invisible:cls, reg r472:V |
    mkenv;
    st x1 = x1;
    st x2 = x2;
    st subtree = subtree;
    st type = type;
    st center = center;
    st leaflab = leaflab;
    st dLeaf = dLeaf;
    st nodePar = nodePar;
    st edgePar = edgePar;
    horiz_isMissing = missing.0(horiz);
    if horiz_isMissing then L0(FALSE) else L0(horiz);
  L0(horiz_orDefault):
    st horiz = horiz_orDefault;
    subtree1 = ld subtree;
    check L107() else D0();
  D0():
    deopt 0 [subtree1];
  L107():
    subtree2 = force? subtree1;
    checkMissing(subtree2);
    st wholetree = subtree2;
    st depth = 0;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L108() else L109();
  L1(r1):
    st llimit = r1;
    integer = ldf integer;
    check L111() else D2();
  L108():
    list = ldf list in base;
    r2 = dyn list();
    check L110() else D1();
  L109():
    r = dyn base();
    goto L1(r);
  D1():
    deopt 9 [r2];
  D2():
    deopt 12 [];
  L110():
    goto L1(r2);
  L111():
    r3 = dyn integer();
    check L112() else D3();
  D3():
    deopt 13 [r3];
  L112():
    st KK = r3;
    integer1 = ldf integer;
    check L113() else D4();
  D4():
    deopt 16 [];
  L113():
    r4 = dyn integer1();
    check L114() else D5();
  D5():
    deopt 17 [r4];
  L114():
    st kk = r4;
    goto L105();
  L105():
    is_leaf = ldf `is.leaf`;
    check L115() else D6();
  D6():
    deopt 20 [];
  L115():
    p = prom<V +>{
      subtree3 = ld subtree;
      subtree4 = force? subtree3;
      checkMissing(subtree4);
      return subtree4;
    };
    r6 = dyn is_leaf(p);
    check L116() else D7();
  D7():
    deopt 22 [r6];
  L116():
    r7 = `!`(r6);
    c = `as.logical`(r7);
    if c then L117() else L2(c);
  L2(c2):
    st inner = c2;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L121() else L122();
  L117():
    x3 = ld x1;
    check L118() else D8();
  D8():
    deopt 24 [c, x3];
  L3(r10):
    st yTop = r10;
    plotNodeLimit = ldf plotNodeLimit;
    check L125() else D12();
  L118():
    x4 = force? x3;
    checkMissing(x4);
    x5 = ld x2;
    check L119() else D9();
  L121():
    subtree5 = ld subtree;
    check L123() else D10();
  L122():
    r9 = dyn base1(<sym subtree>, "height");
    goto L3(r9);
  D9():
    deopt 25 [c, x4, x5];
  D10():
    deopt 32 [subtree5];
  D12():
    deopt 39 [];
  L119():
    x6 = force? x5;
    checkMissing(x6);
    r8 = `!=`(x4, x6);
    c3 = `as.logical`(r8);
    c4 = `&&`(c, c3);
    goto L2(c4);
  L123():
    subtree6 = force? subtree5;
    checkMissing(subtree6);
    attr = ldf attr in base;
    r11 = dyn attr(subtree6, "height");
    check L124() else D11();
  L125():
    p1 = prom<V +>{
      x7 = ld x1;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p2 = prom<V +>{
      x9 = ld x2;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p3 = prom<V +>{
      subtree7 = ld subtree;
      subtree8 = force? subtree7;
      checkMissing(subtree8);
      return subtree8;
    };
    p4 = prom<V +>{
      center1 = ld center;
      center2 = force? center1;
      checkMissing(center2);
      return center2;
    };
    r16 = dyn plotNodeLimit(p1, p2, p3, p4);
    check L126() else D13();
  D11():
    deopt 36 [r11];
  D13():
    deopt 44 [r16];
  L124():
    goto L3(r11);
  L126():
    st bx = r16;
    bx = ld bx;
    check L127() else D14();
  D14():
    deopt 46 [bx];
  L127():
    bx1 = force? bx;
    checkMissing(bx1);
    c6 = `is.object`(bx1);
    if c6 then L129() else L130(bx1);
  L128(dx1):
    st xTop = dx1;
    depth = ld depth;
    check L132() else D15();
  L129():
    dr = tryDispatchBuiltin.1("$", bx1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L131() else L130(dr);
  L130(bx3):
    r17 = `$`(bx3, <sym x>);
    goto L128(r17);
  D15():
    deopt 50 [depth];
  L131():
    dx = getTryDispatchBuiltinValue(dr);
    goto L128(dx);
  L132():
    depth1 = force? depth;
    checkMissing(depth1);
    r18 = `+`(depth1, 1);
    st depth = r18;
    bx4 = ld bx;
    check L133() else D16();
  D16():
    deopt 55 [bx4];
  L133():
    bx5 = force? bx4;
    checkMissing(bx5);
    c7 = `is.object`(bx5);
    if c7 then L135() else L136(bx5);
  L134(dx3):
    l = ld llimit;
    c8 = `is.object`(l);
    if c8 then L138() else L139(dx3, l);
  L135():
    dr2 = tryDispatchBuiltin.1("$", bx5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L137() else L136(dr2);
  L136(bx7):
    r19 = `$`(bx7, <sym limit>);
    goto L134(r19);
  L4(dx9):
    st llimit = dx9;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L142() else L143();
  L137():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L134(dx2);
  L138():
    dr4 = tryDispatchBuiltin.0("[[<-", l, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L140() else L139(dx3, dr4);
  L139(dx5, l2):
    depth2 = ld depth;
    check L141() else D17();
  D17():
    deopt 59 [dx5, l2, dx3, depth2];
  L5(r22):
    r26 = `!`(r22);
    st hasP = r26;
    hasP = ld hasP;
    check L148() else D20();
  L140():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx7);
  L141():
    depth3 = force? depth2;
    ____ = ldf `[[<-` in base;
    r20 = dyn ____(l2, dx3, depth3);
    goto L4(r20);
  L142():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L144() else L145();
  L143():
    r21 = dyn base2(<lang `<-`(nPar, attr(subtree, "nodePar"))>);
    goto L5(r21);
  D20():
    deopt 75 [hasP];
  L6(r24):
    st nPar = r24;
    c9 = `==`(r24, NULL);
    goto L5(c9);
  L144():
    subtree9 = ld subtree;
    check L146() else D18();
  L145():
    r23 = dyn base3(<sym subtree>, "nodePar");
    goto L6(r23);
  L148():
    hasP1 = force? hasP;
    checkMissing(hasP1);
    r27 = `!`(hasP1);
    c10 = `as.logical`(r27);
    if c10 then L149() else L7();
  D18():
    deopt 66 [subtree9];
  L7():
    goto L8();
  L8():
    getOption = ldf getOption;
    check L152() else D22();
  L146():
    subtree10 = force? subtree9;
    checkMissing(subtree10);
    attr1 = ldf attr in base;
    r25 = dyn attr1(subtree10, "nodePar");
    check L147() else D19();
  L149():
    nodePar1 = ld nodePar;
    check L150() else D21();
  D19():
    deopt 70 [r25];
  D21():
    deopt 78 [nodePar1];
  D22():
    deopt 84 [];
  L147():
    goto L6(r25);
  L150():
    nodePar2 = force? nodePar1;
    checkMissing(nodePar2);
    st nPar = nodePar2;
    goto L8();
  L152():
    r28 = dyn getOption("verbose");
    check L153() else D23();
  D23():
    deopt 86 [r28];
  L153():
    c11 = `as.logical`(r28);
    if c11 then L154() else L9();
  L9():
    goto L13();
  L13():
    r54 = clos inner2837184312;
    st Xtract = r54;
    r55 = clos inner2501545716;
    st asTxt = r55;
    inner4 = ld inner;
    check L169() else D33();
  L154():
    cat = ldf cat;
    check L155() else D24();
  D24():
    deopt 88 [];
  D33():
    deopt 129 [inner4];
  L155():
    p5 = prom<V +>{
      inner = ld inner;
      inner1 = force? inner;
      checkMissing(inner1);
      c12 = `as.logical`(inner1);
      if c12 then L1() else L0();
    L0():
      return "leaf";
    L1():
      return "inner node";
    };
    r30 = dyn cat(p5, ":");
    check L156() else D25();
  L169():
    inner5 = force? inner4;
    checkMissing(inner5);
    c16 = `as.logical`(inner5);
    if c16 then L14(c16) else L170();
  D25():
    deopt 91 [r30];
  L14(c17):
    c22 = `as.logical`(c17);
    if c22 then L173() else L15();
  L156():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L157() else L158();
  L170():
    hasP2 = ld hasP;
    check L171() else D34();
  D34():
    deopt 131 [c16, hasP2];
  L10(r32):
    r33 = `!`(r32);
    c14 = `as.logical`(r33);
    if c14 then L160() else L11();
  L15():
    goto L16(2.0);
  L16(r56):
    st i = r56;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L175() else L176();
  L157():
    nPar = ld nPar;
    check L159() else D26();
  L158():
    r31 = dyn base4(<sym nPar>);
    goto L10(r31);
  L171():
    hasP3 = force? hasP2;
    checkMissing(hasP3);
    c19 = `as.logical`(hasP3);
    c20 = `||`(c16, c19);
    goto L14(c20);
  L173():
    goto L16(1.0);
  D26():
    deopt 93 [nPar];
  L11():
    goto L12();
  L12():
    cat2 = ldf cat;
    check L166() else D31();
  L17(r58):
    r59 = `!`(r58);
    c24 = `as.logical`(r59);
    if c24 then L178() else L18();
  L159():
    nPar1 = force? nPar;
    checkMissing(nPar1);
    c13 = `==`(nPar1, NULL);
    goto L10(c13);
  L160():
    cat1 = ldf cat;
    check L161() else D27();
  L175():
    nPar4 = ld nPar;
    check L177() else D35();
  L176():
    r57 = dyn base5(<sym nPar>);
    goto L17(r57);
  D27():
    deopt 98 [];
  D31():
    deopt 108 [];
  D35():
    deopt 140 [nPar4];
  L18():
    goto L19();
  L19():
    leaflab1 = ld leaflab;
    check L190() else D46();
  L161():
    r34 = dyn cat1(" with node pars\n");
    check L162() else D28();
  L166():
    p9 = prom<V +>{
      inner2 = ld inner;
      inner3 = force? inner2;
      checkMissing(inner3);
      c15 = `as.logical`(inner3);
      if c15 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      paste = ldf paste;
      p8 = prom<V +>{
        formatC = ldf formatC;
        p7 = prom<V +>{
          yTop = ld yTop;
          yTop1 = force? yTop;
          checkMissing(yTop1);
          return yTop1;
        };
        r39 = dyn formatC(p7);
        return r39;
      };
      r41 = dyn paste(" height", p8, "; ");
      return r41;
    };
    p11 = prom<V +>{
      formatC1 = ldf formatC;
      p10 = prom<V +>{
        x11 = ld x1;
        x12 = force? x11;
        checkMissing(x12);
        return x12;
      };
      r44 = dyn formatC1[, width](p10, 4.0);
      return r44;
    };
    p13 = prom<V +>{
      formatC2 = ldf formatC;
      p12 = prom<V +>{
        x13 = ld x2;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      r47 = dyn formatC2[, width](p12, 4.0);
      return r47;
    };
    p15 = prom<V +>{
      formatC3 = ldf formatC;
      p14 = prom<V +>{
        xTop = ld xTop;
        xTop1 = force? xTop;
        checkMissing(xTop1);
        return xTop1;
      };
      r50 = dyn formatC3[, width](p14, 8.0);
      return r50;
    };
    r52 = dyn cat2[, , , , , , , , , sep](p9, "(x1,x2)= (", p11, ",", p13, ")", "--> xTop=", p15, "\n", "");
    check L167() else D32();
  L177():
    nPar5 = force? nPar4;
    checkMissing(nPar5);
    c23 = `==`(nPar5, NULL);
    goto L17(c23);
  L178():
    Xtract = ldf Xtract;
    check L179() else D36();
  D28():
    deopt 100 [r34];
  D32():
    deopt 120 [r52];
  D36():
    deopt 145 [];
  D46():
    deopt 194 [leaflab1];
  L162():
    str = ldf str;
    check L163() else D29();
  L167():
    goto L13();
  L179():
    p16 = prom<V +>{
      nPar6 = ld nPar;
      nPar7 = force? nPar6;
      checkMissing(nPar7);
      return nPar7;
    };
    p17 = prom<V +>{
      return <int 1, 2>;
    };
    p18 = prom<V +>{
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      return i1;
    };
    r63 = dyn Xtract[, , default, ]("pch", p16, p17, p18);
    check L180() else D37();
  L190():
    leaflab2 = force? leaflab1;
    checkMissing(leaflab2);
    r94 = `==`(leaflab2, "textlike");
    c27 = `as.logical`(r94);
    if c27 then L191() else L20();
  D29():
    deopt 102 [];
  D37():
    deopt 151 [r63];
  L20():
    goto L21();
  L21():
    Xtract5 = ldf Xtract;
    check L195() else D49();
  L163():
    p6 = prom<V +>{
      nPar2 = ld nPar;
      nPar3 = force? nPar2;
      checkMissing(nPar3);
      return nPar3;
    };
    r36 = dyn str(p6);
    check L164() else D30();
  L180():
    st pch = r63;
    Xtract1 = ldf Xtract;
    check L181() else D38();
  L191():
    Xtract4 = ldf Xtract;
    check L192() else D47();
  D30():
    deopt 104 [r36];
  D38():
    deopt 154 [];
  D47():
    deopt 199 [];
  D49():
    deopt 210 [];
  L164():
    goto L12();
  L181():
    p19 = prom<V +>{
      nPar8 = ld nPar;
      nPar9 = force? nPar8;
      checkMissing(nPar9);
      return nPar9;
    };
    p20 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      c25 = ldf c in base;
      r67 = dyn c25(1.0, 1.0);
      goto L0(r67);
    L2():
      r65 = dyn base6(1.0, 1.0);
      goto L0(r65);
    };
    p21 = prom<V +>{
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      return i3;
    };
    r70 = dyn Xtract1[, , default, ]("cex", p19, p20, p21);
    check L182() else D39();
  L192():
    p37 = prom<V +>{
      nPar14 = ld nPar;
      nPar15 = force? nPar14;
      checkMissing(nPar15);
      return nPar15;
    };
    p38 = prom<V +>{
      i8 = ld i;
      i9 = force? i8;
      checkMissing(i9);
      return i9;
    };
    r97 = dyn Xtract4[, , default, ]("p.col", p37, "white", p38);
    check L193() else D48();
  L195():
    p39 = prom<V +>{
      nPar16 = ld nPar;
      nPar17 = force? nPar16;
      checkMissing(nPar17);
      return nPar17;
    };
    p40 = prom<V +>{
      par2 = ldf par;
      r100 = dyn par2("col");
      return r100;
    };
    p41 = prom<V +>{
      i10 = ld i;
      i11 = force? i10;
      checkMissing(i11);
      return i11;
    };
    r103 = dyn Xtract5[, , default, ]("lab.col", p39, p40, p41);
    check L196() else D50();
  D39():
    deopt 160 [r70];
  D48():
    deopt 205 [r97];
  D50():
    deopt 216 [r103];
  L182():
    st cex = r70;
    Xtract2 = ldf Xtract;
    check L183() else D40();
  L193():
    st `p.col` = r97;
    goto L21();
  L196():
    st `lab.col` = r103;
    Xtract6 = ldf Xtract;
    check L197() else D51();
  D40():
    deopt 163 [];
  D51():
    deopt 219 [];
  L183():
    p22 = prom<V +>{
      nPar10 = ld nPar;
      nPar11 = force? nPar10;
      checkMissing(nPar11);
      return nPar11;
    };
    p23 = prom<V +>{
      par = ldf par;
      r72 = dyn par("col");
      return r72;
    };
    p24 = prom<V +>{
      i4 = ld i;
      i5 = force? i4;
      checkMissing(i5);
      return i5;
    };
    r75 = dyn Xtract2[, , default, ]("col", p22, p23, p24);
    check L184() else D41();
  L197():
    p42 = prom<V +>{
      nPar18 = ld nPar;
      nPar19 = force? nPar18;
      checkMissing(nPar19);
      return nPar19;
    };
    p43 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r106):
      return r106;
    L1():
      c28 = ldf c in base;
      r107 = dyn c28(1.0, 1.0);
      goto L0(r107);
    L2():
      r105 = dyn base7(1.0, 1.0);
      goto L0(r105);
    };
    p44 = prom<V +>{
      i12 = ld i;
      i13 = force? i12;
      checkMissing(i13);
      return i13;
    };
    r110 = dyn Xtract6[, , default, ]("lab.cex", p42, p43, p44);
    check L198() else D52();
  D41():
    deopt 169 [r75];
  D52():
    deopt 225 [r110];
  L184():
    st col = r75;
    Xtract3 = ldf Xtract;
    check L185() else D42();
  L198():
    st `lab.cex` = r110;
    Xtract7 = ldf Xtract;
    check L199() else D53();
  D42():
    deopt 172 [];
  D53():
    deopt 228 [];
  L185():
    p25 = prom<V +>{
      nPar12 = ld nPar;
      nPar13 = force? nPar12;
      checkMissing(nPar13);
      return nPar13;
    };
    p26 = prom<V +>{
      par1 = ldf par;
      r77 = dyn par1("bg");
      return r77;
    };
    p27 = prom<V +>{
      i6 = ld i;
      i7 = force? i6;
      checkMissing(i7);
      return i7;
    };
    r80 = dyn Xtract3[, , default, ]("bg", p25, p26, p27);
    check L186() else D43();
  L199():
    p45 = prom<V +>{
      nPar20 = ld nPar;
      nPar21 = force? nPar20;
      checkMissing(nPar21);
      return nPar21;
    };
    p46 = prom<V +>{
      par3 = ldf par;
      r112 = dyn par3("font");
      return r112;
    };
    p47 = prom<V +>{
      i14 = ld i;
      i15 = force? i14;
      checkMissing(i15);
      return i15;
    };
    r115 = dyn Xtract7[, , default, ]("lab.font", p45, p46, p47);
    check L200() else D54();
  D43():
    deopt 178 [r80];
  D54():
    deopt 234 [r115];
  L186():
    st bg = r80;
    points = ldf points;
    check L187() else D44();
  L200():
    st `lab.font` = r115;
    Xtract8 = ldf Xtract;
    check L201() else D55();
  D44():
    deopt 181 [];
  D55():
    deopt 237 [];
  L187():
    p32 = prom<V +>{
      horiz1 = ld horiz;
      horiz2 = force? horiz1;
      checkMissing(horiz2);
      c26 = `as.logical`(horiz2);
      if c26 then L1() else L0();
    L0():
      cbind1 = ldf cbind;
      p30 = prom<V +>{
        xTop4 = ld xTop;
        xTop5 = force? xTop4;
        checkMissing(xTop5);
        return xTop5;
      };
      p31 = prom<V +>{
        yTop4 = ld yTop;
        yTop5 = force? yTop4;
        checkMissing(yTop5);
        return yTop5;
      };
      r86 = dyn cbind1(p30, p31);
      return r86;
    L1():
      cbind = ldf cbind;
      p28 = prom<V +>{
        yTop2 = ld yTop;
        yTop3 = force? yTop2;
        checkMissing(yTop3);
        return yTop3;
      };
      p29 = prom<V +>{
        xTop2 = ld xTop;
        xTop3 = force? xTop2;
        checkMissing(xTop3);
        return xTop3;
      };
      r83 = dyn cbind(p28, p29);
      return r83;
    };
    p33 = prom<V +>{
      pch = ld pch;
      pch1 = force? pch;
      checkMissing(pch1);
      return pch1;
    };
    p34 = prom<V +>{
      bg = ld bg;
      bg1 = force? bg;
      checkMissing(bg1);
      return bg1;
    };
    p35 = prom<V +>{
      col = ld col;
      col1 = force? col;
      checkMissing(col1);
      return col1;
    };
    p36 = prom<V +>{
      cex = ld cex;
      cex1 = force? cex;
      checkMissing(cex1);
      return cex1;
    };
    r92 = dyn points[, pch, bg, col, cex](p32, p33, p34, p35, p36);
    check L188() else D45();
  L201():
    p48 = prom<V +>{
      nPar22 = ld nPar;
      nPar23 = force? nPar22;
      checkMissing(nPar23);
      return nPar23;
    };
    p49 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r118):
      return r118;
    L1():
      c29 = ldf c in base;
      r119 = dyn c29(TRUE, TRUE);
      goto L0(r119);
    L2():
      r117 = dyn base8(TRUE, TRUE);
      goto L0(r117);
    };
    p50 = prom<V +>{
      i16 = ld i;
      i17 = force? i16;
      checkMissing(i17);
      return i17;
    };
    r122 = dyn Xtract8[, , default, ]("xpd", p48, p49, p50);
    check L202() else D56();
  D45():
    deopt 191 [r92];
  D56():
    deopt 243 [r122];
  L188():
    goto L19();
  L202():
    st `lab.xpd` = r122;
    is_leaf1 = ldf `is.leaf`;
    check L203() else D57();
  D57():
    deopt 246 [];
  L203():
    p51 = prom<V +>{
      subtree11 = ld subtree;
      subtree12 = force? subtree11;
      checkMissing(subtree12);
      return subtree12;
    };
    r124 = dyn is_leaf1(p51);
    check L204() else D58();
  D58():
    deopt 248 [r124];
  L204():
    c30 = `as.logical`(r124);
    if c30 then L205() else L22();
  L22():
    inner6 = ld inner;
    check L228() else D74();
  L28():
    inner8 = ld inner;
    check L417() else D188();
  L205():
    leaflab3 = ld leaflab;
    check L206() else D59();
  D59():
    deopt 249 [leaflab3];
  D74():
    deopt 316 [inner6];
  D188():
    deopt 789 [inner8];
  L206():
    leaflab4 = force? leaflab3;
    checkMissing(leaflab4);
    r125 = `==`(leaflab4, "perpendicular");
    c31 = `as.logical`(r125);
    if c31 then L207() else L23();
  L228():
    inner7 = force? inner6;
    checkMissing(inner7);
    c34 = `as.logical`(inner7);
    if c34 then L229() else L29();
  L417():
    inner9 = force? inner8;
    checkMissing(inner9);
    c82 = `as.logical`(inner9);
    if c82 then L418() else L77(c82);
  L23():
    goto L27(NULL);
  L27(r149):
    goto L28();
  L29():
    goto L28();
  L77(c84):
    c91 = `as.logical`(c84);
    if c91 then L424() else L79();
  L207():
    horiz3 = ld horiz;
    check L208() else D60();
  L229():
    r151 = clos inner35005340;
    st segmentsHV = r151;
    sym11 = ldf seq_along;
    base11 = ldf seq_along in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L230() else L231();
  L418():
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L419() else L420();
  D60():
    deopt 253 [horiz3];
  L30(r153):
    s = toForSeq(r153);
    l3 = length(s);
    i18 = 0;
    goto L31(i18);
  L78(c87, r419):
    c88 = `as.logical`(r419);
    c89 = `&&`(c87, c88);
    goto L77(c89);
  L79():
    depth8 = ld depth;
    check L468() else D206();
  L88():
    goto L105();
  L208():
    horiz4 = force? horiz3;
    checkMissing(horiz4);
    c32 = `as.logical`(horiz4);
    if c32 then L209() else L24();
  L230():
    subtree15 = ld subtree;
    check L232() else D75();
  L231():
    r152 = dyn base11(<sym subtree>);
    goto L30(r152);
  L419():
    subtree21 = ld subtree;
    check L421() else D189();
  L420():
    r418 = dyn base30(<sym subtree>);
    goto L78(c82, r418);
  L424():
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L425() else L426();
  D75():
    deopt 322 [subtree15];
  D189():
    deopt 793 [c82, subtree21];
  D206():
    deopt 855 [depth8];
  L24():
    yTop8 = ld yTop;
    check L218() else D66();
  L26():
    asTxt = ldf asTxt;
    check L222() else D70();
  L31(i19):
    i20 = `+`.1(i19, 1);
    c35 = `<`.1(l3, i20);
    if c35 then L233() else L76();
  L80(r422):
    l4 = ld KK;
    c92 = `is.object`(l4);
    if c92 then L429() else L430(r422, l4);
  L209():
    yTop6 = ld yTop;
    check L210() else D61();
  L232():
    subtree16 = force? subtree15;
    checkMissing(subtree16);
    r154 = seq_along(subtree16);
    goto L30(r154);
  L421():
    subtree22 = force? subtree21;
    checkMissing(subtree22);
    length = ldf length in base;
    r420 = dyn length(subtree22);
    check L422() else D190();
  L425():
    subtree23 = ld subtree;
    check L427() else D191();
  L426():
    r421 = dyn base31(<sym subtree>);
    goto L80(r421);
  L468():
    depth9 = force? depth8;
    checkMissing(depth9);
    r448 = `-`(depth9, 1);
    st depth = r448;
    depth10 = ld depth;
    check L469() else D207();
  D61():
    deopt 255 [yTop6];
  D66():
    deopt 275 [yTop8];
  D70():
    deopt 292 [];
  D190():
    deopt 796 [c82, r420];
  D191():
    deopt 800 [subtree23];
  D207():
    deopt 860 [depth10];
  L76():
    x15 = `[[`(s, i20, NULL, TRUE);
    st k = x15;
    subtree17 = ld subtree;
    check L234() else D76();
  L81(dx37):
    st KK = dx37;
    storage_mode = ldf `storage.mode`;
    check L433() else D194();
  L210():
    yTop7 = force? yTop6;
    checkMissing(yTop7);
    dLeaf1 = ld dLeaf;
    check L211() else D62();
  L218():
    yTop9 = force? yTop8;
    checkMissing(yTop9);
    dLeaf3 = ld dLeaf;
    check L219() else D67();
  L222():
    p52 = prom<V +>{
      sym10 = ldf attr;
      base10 = ldf attr in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r135):
      return r135;
    L1():
      subtree13 = ld subtree;
      subtree14 = force? subtree13;
      checkMissing(subtree14);
      attr2 = ldf attr in base;
      r136 = dyn attr2(subtree14, "label");
      goto L0(r136);
    L2():
      r134 = dyn base10(<sym subtree>, "label");
      goto L0(r134);
    };
    r138 = dyn asTxt(p52);
    check L223() else D71();
  L233():
    goto L28();
  L422():
    goto L78(c82, r420);
  L427():
    subtree24 = force? subtree23;
    checkMissing(subtree24);
    length1 = ldf length in base;
    r423 = dyn length1(subtree24);
    check L428() else D192();
  L429():
    dr24 = tryDispatchBuiltin.0("[<-", l4, r422);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L431() else L430(r422, dr24);
  L430(r425, l6):
    depth4 = ld depth;
    check L432() else D193();
  L469():
    depth11 = force? depth10;
    checkMissing(depth11);
    r449 = `!`(depth11);
    c100 = `as.logical`(r449);
    if c100 then L89(c100) else L470();
  D62():
    deopt 256 [yTop7, dLeaf1];
  D67():
    deopt 276 [yTop9, dLeaf3];
  D71():
    deopt 294 [r138];
  D76():
    deopt 325 [i20, subtree17];
  D192():
    deopt 803 [r423];
  D193():
    deopt 805 [r425, l6, r422, depth4];
  D194():
    deopt 810 [];
  L89(c101):
    c116 = `as.logical`(c101);
    if c116 then L482() else L92();
  L211():
    dLeaf2 = force? dLeaf1;
    checkMissing(dLeaf2);
    lab_cex = ld `lab.cex`;
    check L212() else D63();
  L219():
    dLeaf4 = force? dLeaf3;
    checkMissing(dLeaf4);
    lab_cex2 = ld `lab.cex`;
    check L220() else D68();
  L223():
    st nodeText = r138;
    text = ldf text;
    check L224() else D72();
  L234():
    subtree18 = force? subtree17;
    checkMissing(subtree18);
    c36 = `is.object`(subtree18);
    if c36 then L235() else L236(i20, subtree18);
  L428():
    goto L80(r423);
  L431():
    dx36 = getTryDispatchBuiltinValue(dr24);
    goto L81(dx36);
  L432():
    depth5 = force? depth4;
    ___ = ldf `[<-` in base;
    r428 = dyn ___(l6, r422, depth5);
    goto L81(r428);
  L433():
    p158 = prom<V +>{
      kk = ld kk;
      kk1 = force? kk;
      checkMissing(kk1);
      return kk1;
    };
    r430 = dyn storage_mode(p158);
    check L434() else D195();
  L470():
    kk2 = ld kk;
    check L471() else D208();
  D63():
    deopt 257 [yTop7, dLeaf2, lab_cex];
  D68():
    deopt 277 [yTop9, dLeaf4, lab_cex2];
  D72():
    deopt 297 [];
  D195():
    deopt 812 [r430];
  D208():
    deopt 863 [c100, kk2];
  L32(i26, dx11):
    st child = dx11;
    sym12 = ldf attr;
    base12 = ldf attr in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L239() else L240();
  L92():
    goto L79();
  L212():
    lab_cex1 = force? lab_cex;
    checkMissing(lab_cex1);
    r126 = `*`(dLeaf2, lab_cex1);
    r127 = `+`(yTop7, r126);
    st X = r127;
    xTop6 = ld xTop;
    check L213() else D64();
  L220():
    lab_cex3 = force? lab_cex2;
    checkMissing(lab_cex3);
    r132 = `*`(dLeaf4, lab_cex3);
    r133 = `-`(yTop9, r132);
    st Y = r133;
    xTop8 = ld xTop;
    check L221() else D69();
  L224():
    p53 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    p54 = prom<V +>{
      Y = ld Y;
      Y1 = force? Y;
      checkMissing(Y1);
      return Y1;
    };
    p55 = prom<V +>{
      nodeText = ld nodeText;
      nodeText1 = force? nodeText;
      checkMissing(nodeText1);
      return nodeText1;
    };
    p56 = prom<V +>{
      lab_xpd = ld `lab.xpd`;
      lab_xpd1 = force? lab_xpd;
      checkMissing(lab_xpd1);
      return lab_xpd1;
    };
    p57 = prom<V +>{
      srt = ld srt;
      srt1 = force? srt;
      checkMissing(srt1);
      return srt1;
    };
    p58 = prom<V +>{
      adj = ld adj;
      adj1 = force? adj;
      checkMissing(adj1);
      return adj1;
    };
    p59 = prom<V +>{
      lab_cex4 = ld `lab.cex`;
      lab_cex5 = force? lab_cex4;
      checkMissing(lab_cex5);
      return lab_cex5;
    };
    p60 = prom<V +>{
      lab_col = ld `lab.col`;
      lab_col1 = force? lab_col;
      checkMissing(lab_col1);
      return lab_col1;
    };
    p61 = prom<V +>{
      lab_font = ld `lab.font`;
      lab_font1 = force? lab_font;
      checkMissing(lab_font1);
      return lab_font1;
    };
    r148 = dyn text[, , , xpd, srt, adj, cex, col, font](p53, p54, p55, p56, p57, p58, p59, p60, p61);
    check L225() else D73();
  L235():
    dr6 = tryDispatchBuiltin.1("[[", subtree18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L237() else L236(i20, dr6);
  L236(i24, subtree20):
    k = ld k;
    check L238() else D77();
  L434():
    storage_mode1 = ldf `storage.mode`;
    check L435() else D196();
  L471():
    kk3 = force? kk2;
    checkMissing(kk3);
    c103 = `is.object`(kk3);
    if c103 then L472() else L473(c100, kk3);
  L482():
    depth16 = ld depth;
    check L486() else D212();
  D64():
    deopt 262 [xTop6];
  D69():
    deopt 282 [xTop8];
  D73():
    deopt 313 [r148];
  D77():
    deopt 327 [i24, subtree20, k];
  D196():
    deopt 813 [r430];
  D212():
    deopt 881 [depth16];
  L33(i29, r157):
    st yBot = r157;
    getOption1 = ldf getOption;
    check L243() else D80();
  L90(c107, dx56):
    KK4 = ld KK;
    check L476() else D210();
  L213():
    xTop7 = force? xTop6;
    checkMissing(xTop7);
    st Y = xTop7;
    st srt = 0.0;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L214() else L215();
  L221():
    xTop9 = force? xTop8;
    checkMissing(xTop9);
    st X = xTop9;
    st srt = 90.0;
    st adj = 1.0;
    goto L26();
  L225():
    goto L27(r148);
  L237():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L32(i20, dx10);
  L238():
    k1 = force? k;
    __ = ldf `[[` in base;
    r155 = dyn __(subtree20, k1);
    goto L32(i24, r155);
  L239():
    child = ld child;
    check L241() else D78();
  L240():
    r156 = dyn base12(<sym child>, "height");
    goto L33(i26, r156);
  L435():
    p159 = prom<V +>{
      KK = ld KK;
      KK1 = force? KK;
      checkMissing(KK1);
      return KK1;
    };
    r432 = dyn storage_mode1(p159);
    check L436() else D197();
  L472():
    dr38 = tryDispatchBuiltin.1("[", kk3);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L474() else L473(c100, dr38);
  L473(c105, kk5):
    depth12 = ld depth;
    check L475() else D209();
  L486():
    depth17 = force? depth16;
    checkMissing(depth17);
    r454 = `!`(depth17);
    c117 = `as.logical`(r454);
    if c117 then L487() else L95();
  D78():
    deopt 333 [i26, child];
  D80():
    deopt 340 [i29];
  D197():
    deopt 815 [r430, r432];
  D209():
    deopt 865 [c105, kk5, depth12];
  D210():
    deopt 867 [c107, dx56, KK4];
  L25(r129):
    st adj = r129;
    goto L26();
  L95():
    depth18 = ld depth;
    check L490() else D213();
  L214():
    c33 = ldf c in base;
    r130 = dyn c33(0.0, 0.5);
    check L216() else D65();
  L215():
    r128 = dyn base9(0.0, 0.5);
    goto L25(r128);
  L241():
    child1 = force? child;
    checkMissing(child1);
    attr3 = ldf attr in base;
    r158 = dyn attr3(child1, "height");
    check L242() else D79();
  L243():
    r159 = dyn getOption1("verbose");
    check L244() else D81();
  L436():
    r433 = `!=`(r430, r432);
    c93 = `as.logical`(r433);
    if c93 then L437() else L82();
  L474():
    dx55 = getTryDispatchBuiltinValue(dr38);
    goto L90(c100, dx55);
  L475():
    depth13 = force? depth12;
    __10 = ldf `[` in base;
    r450 = dyn __10(kk5, depth13);
    goto L90(c105, r450);
  L476():
    KK5 = force? KK4;
    checkMissing(KK5);
    c108 = `is.object`(KK5);
    if c108 then L477() else L478(c107, dx56, KK5);
  L487():
    sym32 = ldf invisible;
    base32 = ldf invisible in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L526() else L527();
  D65():
    deopt 273 [r130];
  D79():
    deopt 337 [i26, r158];
  D81():
    deopt 342 [i29, r159];
  D213():
    deopt 888 [depth18];
  L82():
    goto L83();
  L83():
    l8 = ld kk;
    c94 = `is.object`(l8);
    if c94 then L443() else L444(1, l8);
  L91(c112, dx61, dx62):
    r452 = `<`(dx61, dx62);
    c113 = `as.logical`(r452);
    c114 = `||`(c112, c113);
    goto L89(c114);
  L106(r471):
    popenv;
    return r471;
  L216():
    goto L25(r130);
  L242():
    goto L33(i26, r158);
  L244():
    c37 = `as.logical`(r159);
    if c37 then L245() else L34();
  L437():
    storage_mode2 = ldf `storage.mode`;
    check L438() else D198();
  L477():
    dr40 = tryDispatchBuiltin.1("[", KK5);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L479() else L478(c107, dx56, dr40);
  L478(c110, dx58, KK7):
    depth14 = ld depth;
    check L480() else D211();
  L490():
    depth19 = force? depth18;
    checkMissing(depth19);
    l11 = ld kk;
    length__ = ldf `length<-`;
    check L491() else D214();
  L526():
    invisible = ldf invisible in base;
    r472 = dyn invisible();
    check L528() else D227();
  L527():
    r470 = dyn base32();
    goto L106(r470);
  D198():
    deopt 818 [];
  D211():
    deopt 869 [c110, dx58, KK7, depth14];
  D214():
    deopt 891 [depth19, l11, depth19];
  D227():
    deopt 940 [r472];
  L34():
    goto L35(i29);
  L35(i32):
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L249() else L250();
  L84(dx39):
    st kk = dx39;
    bx16 = ld bx;
    check L447() else D203();
  L245():
    cat3 = ldf cat;
    check L246() else D82();
  L438():
    p160 = prom<V +>{
      KK2 = ld KK;
      KK3 = force? KK2;
      checkMissing(KK3);
      return KK3;
    };
    r435 = dyn storage_mode2(p160);
    check L439() else D199();
  L443():
    dr26 = tryDispatchBuiltin.0("[<-", l8, 1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L445() else L444(1, dr26);
  L444(r439, l10):
    depth6 = ld depth;
    check L446() else D202();
  L479():
    dx60 = getTryDispatchBuiltinValue(dr40);
    goto L91(c107, dx56, dx60);
  L480():
    depth15 = force? depth14;
    __11 = ldf `[` in base;
    r451 = dyn __11(KK7, depth15);
    goto L91(c110, dx58, r451);
  L491():
    r456 = dyn length__(l11, NULL, depth19);
    check L492() else D215();
  L528():
    goto L106(r472);
  D82():
    deopt 344 [i29];
  D199():
    deopt 820 [r435];
  D202():
    deopt 831 [r439, l10, 1, depth6];
  D203():
    deopt 835 [bx16];
  D215():
    deopt 893 [depth19, r456];
  L36(i35, r165):
    c39 = `as.logical`(r165);
    if c39 then L252() else L37();
  L246():
    p62 = prom<V +>{
      k2 = ld k;
      k3 = force? k2;
      checkMissing(k3);
      return k3;
    };
    p63 = prom<V +>{
      yBot = ld yBot;
      yBot1 = force? yBot;
      checkMissing(yBot1);
      return yBot1;
    };
    r162 = dyn cat3("ch.", p62, "@ h=", p63, "; ");
    check L247() else D83();
  L249():
    yBot2 = ld yBot;
    check L251() else D84();
  L250():
    r164 = dyn base13(<sym yBot>);
    goto L36(i32, r164);
  L439():
    l7 = ld kk;
    storage_mode__ = ldf `storage.mode<-`;
    check L440() else D200();
  L445():
    dx38 = getTryDispatchBuiltinValue(dr26);
    goto L84(dx38);
  L446():
    depth7 = force? depth6;
    ___1 = ldf `[<-` in base;
    r442 = dyn ___1(l10, 1, depth7);
    goto L84(r442);
  L447():
    bx17 = force? bx16;
    checkMissing(bx17);
    c95 = `is.object`(bx17);
    if c95 then L449() else L450(bx17);
  L492():
    st kk = r456;
    kk6 = ld kk;
    check L493() else D216();
  D83():
    deopt 350 [i29, r162];
  D84():
    deopt 354 [i32, yBot2];
  D200():
    deopt 822 [r435, l7, r435];
  D216():
    deopt 895 [kk6];
  L37():
    goto L38(i35);
  L38(i38):
    center3 = ld center;
    check L254() else D85();
  L247():
    goto L35(i29);
  L251():
    yBot3 = force? yBot2;
    checkMissing(yBot3);
    c38 = `==`(yBot3, NULL);
    goto L36(i32, c38);
  L252():
    st yBot = 0.0;
    goto L38(i35);
  L440():
    r436 = dyn storage_mode__(l7, NULL, r435);
    check L441() else D201();
  L448(dx41):
    c96 = `is.object`(dx41);
    if c96 then L452() else L453(dx41);
  L449():
    dr28 = tryDispatchBuiltin.1("$", bx17);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L451() else L450(dr28);
  L450(bx19):
    r443 = `$`(bx19, <sym limit>);
    goto L448(r443);
  L493():
    kk7 = force? kk6;
    checkMissing(kk7);
    c118 = `is.object`(kk7);
    if c118 then L494() else L495(kk7);
  D85():
    deopt 362 [i38, center3];
  D201():
    deopt 824 [r435, r436];
  L85(dx45):
    st x1 = dx45;
    bx20 = ld bx;
    check L455() else D204();
  L98(dx64):
    r458 = `+`(dx64, 1);
    st k = r458;
    l12 = ld kk;
    c119 = `is.object`(l12);
    if c119 then L498() else L499(r458, l12);
  L254():
    center4 = force? center3;
    checkMissing(center4);
    c40 = `as.logical`(center4);
    if c40 then L255() else L39();
  L441():
    st kk = r436;
    goto L83();
  L451():
    dx40 = getTryDispatchBuiltinValue(dr28);
    goto L448(dx40);
  L452():
    dr30 = tryDispatchBuiltin.1("[", dx41);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L454() else L453(dr30);
  L453(dx43):
    __7 = ldf `[` in base;
    r444 = dyn __7(dx43, 1);
    goto L85(r444);
  L494():
    dr42 = tryDispatchBuiltin.1("[", kk7);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L496() else L495(dr42);
  L495(kk9):
    depth20 = ld depth;
    check L497() else D217();
  D204():
    deopt 842 [bx20];
  D217():
    deopt 897 [kk9, depth20];
  L39():
    bx12 = ld bx;
    check L259() else D88();
  L40(i41, r173):
    st xBot = r173;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L270() else L271();
  L99(dx66):
    st kk = dx66;
    llimit = ld llimit;
    check L502() else D219();
  L255():
    mean = ldf mean;
    check L256() else D86();
  L454():
    dx44 = getTryDispatchBuiltinValue(dr30);
    goto L85(dx44);
  L455():
    bx21 = force? bx20;
    checkMissing(bx21);
    c97 = `is.object`(bx21);
    if c97 then L457() else L458(bx21);
  L496():
    dx63 = getTryDispatchBuiltinValue(dr42);
    goto L98(dx63);
  L497():
    depth21 = force? depth20;
    __12 = ldf `[` in base;
    r457 = dyn __12(kk9, depth21);
    goto L98(r457);
  L498():
    dr44 = tryDispatchBuiltin.0("[<-", l12, r458);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L500() else L499(r458, dr44);
  L499(r460, l14):
    depth22 = ld depth;
    check L501() else D218();
  D86():
    deopt 365 [i38];
  D88():
    deopt 368 [i38, bx12];
  D218():
    deopt 904 [r460, l14, r458, depth22];
  D219():
    deopt 908 [llimit];
  L42(i52, r180):
    r184 = `!`(r180);
    st hasE = r184;
    hasE = ld hasE;
    check L276() else D94();
  L256():
    p64 = prom<V +>{
      bx8 = ld bx;
      bx9 = force? bx8;
      checkMissing(bx9);
      c41 = `is.object`(bx9);
      if c41 then L2() else L3(bx9);
    L1(dx13):
      c42 = `is.object`(dx13);
      if c42 then L5() else L6(dx13);
    L2():
      dr8 = tryDispatchBuiltin.1("$", bx9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(bx11):
      r167 = `$`(bx11, <sym limit>);
      goto L1(r167);
    L0(dx17):
      return dx17;
    L4():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx12);
    L5():
      dr10 = tryDispatchBuiltin.1("[", dx13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L7() else L6(dr10);
    L6(dx15):
      k4 = ld k;
      k5 = force? k4;
      checkMissing(k5);
      k6 = ld k;
      k7 = force? k6;
      checkMissing(k7);
      r168 = `+`(k7, 1.0);
      r169 = `:`(k5, r168);
      __1 = ldf `[` in base;
      r170 = dyn __1(dx15, r169);
      goto L0(r170);
    L7():
      dx16 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx16);
    };
    r172 = dyn mean(p64);
    check L257() else D87();
  L259():
    bx13 = force? bx12;
    checkMissing(bx13);
    c43 = `is.object`(bx13);
    if c43 then L261() else L262(i38, bx13);
  L270():
    sym15 = ldf attr;
    base15 = ldf attr in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L272() else L273();
  L271():
    r179 = dyn base14(<lang `<-`(ePar, attr(child, "edgePar"))>);
    goto L42(i41, r179);
  L456(dx47):
    c98 = `is.object`(dx47);
    if c98 then L460() else L461(dx47);
  L457():
    dr32 = tryDispatchBuiltin.1("$", bx21);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L459() else L458(dr32);
  L458(bx23):
    r445 = `$`(bx23, <sym limit>);
    goto L456(r445);
  L500():
    dx65 = getTryDispatchBuiltinValue(dr44);
    goto L99(dx65);
  L501():
    depth23 = force? depth22;
    ___2 = ldf `[<-` in base;
    r463 = dyn ___2(l14, r458, depth23);
    goto L99(r463);
  L502():
    llimit1 = force? llimit;
    checkMissing(llimit1);
    c120 = `is.object`(llimit1);
    if c120 then L503() else L504(llimit1);
  D87():
    deopt 367 [i38, r172];
  D94():
    deopt 391 [i52, hasE];
  L43(i55, r182):
    st ePar = r182;
    c45 = `==`(r182, NULL);
    goto L42(i55, c45);
  L86(dx51):
    st x2 = dx51;
    subtree25 = ld subtree;
    check L463() else D205();
  L100(dx68):
    c121 = `is.object`(dx68);
    if c121 then L507() else L508(dx68);
  L257():
    goto L40(i38, r172);
  L260(i45, dx19):
    c44 = `is.object`(dx19);
    if c44 then L264() else L265(i45, dx19);
  L261():
    dr12 = tryDispatchBuiltin.1("$", bx13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L263() else L262(i38, dr12);
  L262(i43, bx15):
    r174 = `$`(bx15, <sym limit>);
    goto L260(i43, r174);
  L272():
    child4 = ld child;
    check L274() else D92();
  L273():
    r181 = dyn base15(<sym child>, "edgePar");
    goto L43(i41, r181);
  L276():
    hasE1 = force? hasE;
    checkMissing(hasE1);
    r185 = `!`(hasE1);
    c46 = `as.logical`(r185);
    if c46 then L277() else L44();
  L459():
    dx46 = getTryDispatchBuiltinValue(dr32);
    goto L456(dx46);
  L460():
    dr34 = tryDispatchBuiltin.1("[", dx47);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L462() else L461(dr34);
  L461(dx49):
    __8 = ldf `[` in base;
    r446 = dyn __8(dx49, 2);
    goto L86(r446);
  L503():
    dr46 = tryDispatchBuiltin.1("[[", llimit1);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L505() else L504(dr46);
  L504(llimit3):
    depth24 = ld depth;
    check L506() else D220();
  D92():
    deopt 382 [i41, child4];
  D205():
    deopt 849 [subtree25];
  D220():
    deopt 910 [llimit3, depth24];
  L41(i49, dx23):
    _midDend = ldf `.midDend`;
    check L268() else D90();
  L44():
    goto L45(i52);
  L45(i58):
    is_leaf2 = ldf `is.leaf`;
    check L280() else D96();
  L101(dx72):
    st x1 = dx72;
    llimit4 = ld llimit;
    check L511() else D222();
  L263():
    dx18 = getTryDispatchBuiltinValue(dr12);
    goto L260(i38, dx18);
  L264():
    dr14 = tryDispatchBuiltin.1("[", dx19);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L266() else L265(i45, dr14);
  L265(i47, dx21):
    k8 = ld k;
    check L267() else D89();
  L274():
    child5 = force? child4;
    checkMissing(child5);
    attr4 = ldf attr in base;
    r183 = dyn attr4(child5, "edgePar");
    check L275() else D93();
  L277():
    edgePar1 = ld edgePar;
    check L278() else D95();
  L462():
    dx50 = getTryDispatchBuiltinValue(dr34);
    goto L86(dx50);
  L463():
    subtree26 = force? subtree25;
    checkMissing(subtree26);
    c99 = `is.object`(subtree26);
    if c99 then L464() else L465(subtree26);
  L505():
    dx67 = getTryDispatchBuiltinValue(dr46);
    goto L100(dx67);
  L506():
    depth25 = force? depth24;
    __13 = ldf `[[` in base;
    r464 = dyn __13(llimit3, depth25);
    goto L100(r464);
  L507():
    dr48 = tryDispatchBuiltin.1("[", dx68);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L509() else L508(dr48);
  L508(dx70):
    k10 = ld k;
    check L510() else D221();
  D89():
    deopt 371 [i47, dx21, k8];
  D90():
    deopt 374 [i49, dx23];
  D93():
    deopt 386 [i41, r183];
  D95():
    deopt 394 [i52, edgePar1];
  D96():
    deopt 400 [i58];
  D221():
    deopt 913 [dx70, k10];
  D222():
    deopt 917 [llimit4];
  L87(dx53):
    st subtree = dx53;
    goto L88();
  L266():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L41(i45, dx22);
  L267():
    k9 = force? k8;
    __2 = ldf `[` in base;
    r175 = dyn __2(dx21, k9);
    goto L41(i47, r175);
  L268():
    p65 = prom<V +>{
      child2 = ld child;
      child3 = force? child2;
      checkMissing(child3);
      return child3;
    };
    r177 = dyn _midDend(p65);
    check L269() else D91();
  L275():
    goto L43(i41, r183);
  L278():
    edgePar2 = force? edgePar1;
    checkMissing(edgePar2);
    st ePar = edgePar2;
    goto L45(i52);
  L280():
    p66 = prom<V +>{
      child6 = ld child;
      child7 = force? child6;
      checkMissing(child7);
      return child7;
    };
    r187 = dyn is_leaf2(p66);
    check L281() else D97();
  L464():
    dr36 = tryDispatchBuiltin.1("[[", subtree26);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L466() else L465(dr36);
  L465(subtree28):
    __9 = ldf `[[` in base;
    r447 = dyn __9(subtree28, 1);
    goto L87(r447);
  L509():
    dx71 = getTryDispatchBuiltinValue(dr48);
    goto L101(dx71);
  L510():
    k11 = force? k10;
    __14 = ldf `[` in base;
    r465 = dyn __14(dx70, k11);
    goto L101(r465);
  L511():
    llimit5 = force? llimit4;
    checkMissing(llimit5);
    c122 = `is.object`(llimit5);
    if c122 then L512() else L513(llimit5);
  D91():
    deopt 376 [i49, dx23, r177];
  D97():
    deopt 402 [i58, r187];
  L102(dx74):
    c123 = `is.object`(dx74);
    if c123 then L516() else L517(dx74);
  L269():
    r178 = `+`(dx23, r177);
    goto L40(i49, r178);
  L281():
    r188 = `!`(r187);
    c47 = `as.logical`(r188);
    if c47 then L46(i58, c47) else L282();
  L466():
    dx52 = getTryDispatchBuiltinValue(dr36);
    goto L87(dx52);
  L512():
    dr50 = tryDispatchBuiltin.1("[[", llimit5);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L514() else L513(dr50);
  L513(llimit7):
    depth26 = ld depth;
    check L515() else D223();
  D223():
    deopt 919 [llimit7, depth26];
  L46(i59, c48):
    c53 = `as.logical`(c48);
    if c53 then L285() else L47();
  L103(dx78):
    st x2 = dx78;
    wholetree = ld wholetree;
    check L520() else D225();
  L282():
    hasE2 = ld hasE;
    check L283() else D98();
  L514():
    dx73 = getTryDispatchBuiltinValue(dr50);
    goto L102(dx73);
  L515():
    depth27 = force? depth26;
    __15 = ldf `[[` in base;
    r466 = dyn __15(llimit7, depth27);
    goto L102(r466);
  L516():
    dr52 = tryDispatchBuiltin.1("[", dx74);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L518() else L517(dr52);
  L517(dx76):
    k12 = ld k;
    check L519() else D224();
  D98():
    deopt 404 [i58, c47, hasE2];
  D224():
    deopt 922 [dx76, k12];
  D225():
    deopt 928 [wholetree];
  L47():
    goto L48(i59, 2.0);
  L48(i64, r189):
    st i = r189;
    Xtract9 = ldf Xtract;
    check L287() else D99();
  L283():
    hasE3 = force? hasE2;
    checkMissing(hasE3);
    c50 = `as.logical`(hasE3);
    c51 = `||`(c47, c50);
    goto L46(i58, c51);
  L285():
    goto L48(i59, 1.0);
  L518():
    dx77 = getTryDispatchBuiltinValue(dr52);
    goto L103(dx77);
  L519():
    k13 = force? k12;
    checkMissing(k13);
    r467 = `+`(k13, 1);
    __16 = ldf `[` in base;
    r468 = dyn __16(dx76, r467);
    goto L103(r468);
  L520():
    wholetree1 = force? wholetree;
    checkMissing(wholetree1);
    c124 = `is.object`(wholetree1);
    if c124 then L521() else L522(wholetree1);
  D99():
    deopt 413 [i64];
  L104(dx80):
    st subtree = dx80;
    goto L88();
  L287():
    p67 = prom<V +>{
      ePar = ld ePar;
      ePar1 = force? ePar;
      checkMissing(ePar1);
      return ePar1;
    };
    p68 = prom<V +>{
      par4 = ldf par;
      r191 = dyn par4("col");
      return r191;
    };
    p69 = prom<V +>{
      i65 = ld i;
      i66 = force? i65;
      checkMissing(i66);
      return i66;
    };
    r194 = dyn Xtract9[, , default, ]("col", p67, p68, p69);
    check L288() else D100();
  L521():
    dr54 = tryDispatchBuiltin.1("[[", wholetree1);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L523() else L522(dr54);
  L522(wholetree3):
    kk10 = ld kk;
    check L524() else D226();
  D100():
    deopt 419 [i64, r194];
  D226():
    deopt 930 [wholetree3, kk10];
  L288():
    st col = r194;
    Xtract10 = ldf Xtract;
    check L289() else D101();
  L523():
    dx79 = getTryDispatchBuiltinValue(dr54);
    goto L104(dx79);
  L524():
    kk11 = force? kk10;
    __17 = ldf `[[` in base;
    r469 = dyn __17(wholetree3, kk11);
    goto L104(r469);
  D101():
    deopt 422 [i64];
  L289():
    p70 = prom<V +>{
      ePar2 = ld ePar;
      ePar3 = force? ePar2;
      checkMissing(ePar3);
      return ePar3;
    };
    p71 = prom<V +>{
      par5 = ldf par;
      r196 = dyn par5("lty");
      return r196;
    };
    p72 = prom<V +>{
      i67 = ld i;
      i68 = force? i67;
      checkMissing(i68);
      return i68;
    };
    r199 = dyn Xtract10[, , default, ]("lty", p70, p71, p72);
    check L290() else D102();
  D102():
    deopt 428 [i64, r199];
  L290():
    st lty = r199;
    Xtract11 = ldf Xtract;
    check L291() else D103();
  D103():
    deopt 431 [i64];
  L291():
    p73 = prom<V +>{
      ePar4 = ld ePar;
      ePar5 = force? ePar4;
      checkMissing(ePar5);
      return ePar5;
    };
    p74 = prom<V +>{
      par6 = ldf par;
      r201 = dyn par6("lwd");
      return r201;
    };
    p75 = prom<V +>{
      i69 = ld i;
      i70 = force? i69;
      checkMissing(i70);
      return i70;
    };
    r204 = dyn Xtract11[, , default, ]("lwd", p73, p74, p75);
    check L292() else D104();
  D104():
    deopt 437 [i64, r204];
  L292():
    st lwd = r204;
    type1 = ld type;
    check L293() else D105();
  D105():
    deopt 439 [i64, type1];
  L293():
    type2 = force? type1;
    checkMissing(type2);
    r205 = `==`(type2, "triangle");
    c54 = `as.logical`(r205);
    if c54 then L294() else L49();
  L49():
    segmentsHV1 = ldf segmentsHV;
    check L298() else D108();
  L50(i73):
    st vln = NULL;
    is_leaf3 = ldf `is.leaf`;
    check L302() else D112();
  L294():
    segmentsHV = ldf segmentsHV;
    check L295() else D106();
  D106():
    deopt 444 [i64];
  D108():
    deopt 451 [i64];
  D112():
    deopt 468 [i73];
  L295():
    p76 = prom<V +>{
      xTop10 = ld xTop;
      xTop11 = force? xTop10;
      checkMissing(xTop11);
      return xTop11;
    };
    p77 = prom<V +>{
      yTop10 = ld yTop;
      yTop11 = force? yTop10;
      checkMissing(yTop11);
      return yTop11;
    };
    p78 = prom<V +>{
      xBot = ld xBot;
      xBot1 = force? xBot;
      checkMissing(xBot1);
      return xBot1;
    };
    p79 = prom<V +>{
      yBot4 = ld yBot;
      yBot5 = force? yBot4;
      checkMissing(yBot5);
      return yBot5;
    };
    r210 = dyn segmentsHV(p76, p77, p78, p79);
    check L296() else D107();
  L298():
    p80 = prom<V +>{
      xTop12 = ld xTop;
      xTop13 = force? xTop12;
      checkMissing(xTop13);
      return xTop13;
    };
    p81 = prom<V +>{
      yTop12 = ld yTop;
      yTop13 = force? yTop12;
      checkMissing(yTop13);
      return yTop13;
    };
    p82 = prom<V +>{
      xBot2 = ld xBot;
      xBot3 = force? xBot2;
      checkMissing(xBot3);
      return xBot3;
    };
    p83 = prom<V +>{
      yTop14 = ld yTop;
      yTop15 = force? yTop14;
      checkMissing(yTop15);
      return yTop15;
    };
    r216 = dyn segmentsHV1(p80, p81, p82, p83);
    check L299() else D109();
  L302():
    p88 = prom<V +>{
      child8 = ld child;
      child9 = force? child8;
      checkMissing(child9);
      return child9;
    };
    r223 = dyn is_leaf3(p88);
    check L303() else D113();
  D107():
    deopt 449 [i64, r210];
  D109():
    deopt 456 [i64, r216];
  D113():
    deopt 470 [i73, r223];
  L296():
    goto L50(i64);
  L299():
    segmentsHV2 = ldf segmentsHV;
    check L300() else D110();
  L303():
    c55 = `as.logical`(r223);
    if c55 then L304() else L51(i73, c55);
  D110():
    deopt 458 [i64];
  L51(i75, c57):
    c61 = `as.logical`(c57);
    if c61 then L307() else L52();
  L300():
    p84 = prom<V +>{
      xBot4 = ld xBot;
      xBot5 = force? xBot4;
      checkMissing(xBot5);
      return xBot5;
    };
    p85 = prom<V +>{
      yTop16 = ld yTop;
      yTop17 = force? yTop16;
      checkMissing(yTop17);
      return yTop17;
    };
    p86 = prom<V +>{
      xBot6 = ld xBot;
      xBot7 = force? xBot6;
      checkMissing(xBot7);
      return xBot7;
    };
    p87 = prom<V +>{
      yBot6 = ld yBot;
      yBot7 = force? yBot6;
      checkMissing(yBot7);
      return yBot7;
    };
    r221 = dyn segmentsHV2(p84, p85, p86, p87);
    check L301() else D111();
  L304():
    leaflab5 = ld leaflab;
    check L305() else D114();
  D111():
    deopt 463 [i64, r221];
  D114():
    deopt 471 [i73, c55, leaflab5];
  L52():
    goto L55(i75);
  L55(i82):
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L325() else L326();
  L301():
    goto L50(i64);
  L305():
    leaflab6 = force? leaflab5;
    checkMissing(leaflab6);
    r224 = `==`(leaflab6, "textlike");
    c58 = `as.logical`(r224);
    c59 = `&&`(c55, c58);
    goto L51(i73, c59);
  L307():
    asTxt1 = ldf asTxt;
    check L308() else D115();
  D115():
    deopt 477 [i75];
  L56(i85, r267):
    r271 = `!`(r267);
    c64 = `as.logical`(r271);
    if c64 then L331() else L58();
  L308():
    p89 = prom<V +>{
      sym16 = ldf attr;
      base16 = ldf attr in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r226):
      return r226;
    L1():
      child10 = ld child;
      child11 = force? child10;
      checkMissing(child11);
      attr5 = ldf attr in base;
      r227 = dyn attr5(child11, "label");
      goto L0(r227);
    L2():
      r225 = dyn base16(<sym child>, "label");
      goto L0(r225);
    };
    r229 = dyn asTxt1(p89);
    check L309() else D116();
  L325():
    sym18 = ldf attr;
    base18 = ldf attr in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L327() else L328();
  L326():
    r266 = dyn base17(<lang attr(child, "edgetext")>);
    goto L56(i82, r266);
  D116():
    deopt 479 [i75, r229];
  L57(i88, r269):
    c63 = `==`(r269, NULL);
    goto L56(i88, c63);
  L58():
    goto L75(i85);
  L75(i142):
    goto L31(i142);
  L309():
    st nodeText = r229;
    getOption2 = ldf getOption;
    check L310() else D117();
  L327():
    child12 = ld child;
    check L329() else D129();
  L328():
    r268 = dyn base18(<sym child>, "edgetext");
    goto L57(i82, r268);
  L331():
    asTxt2 = ldf asTxt;
    check L332() else D131();
  D117():
    deopt 482 [i75];
  D129():
    deopt 542 [i82, child12];
  D131():
    deopt 550 [i85];
  L310():
    r230 = dyn getOption2("verbose");
    check L311() else D118();
  L329():
    child13 = force? child12;
    checkMissing(child13);
    attr6 = ldf attr in base;
    r270 = dyn attr6(child13, "edgetext");
    check L330() else D130();
  L332():
    p108 = prom<V +>{
      sym19 = ldf attr;
      base19 = ldf attr in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r273):
      return r273;
    L1():
      child14 = ld child;
      child15 = force? child14;
      checkMissing(child15);
      attr7 = ldf attr in base;
      r274 = dyn attr7(child15, "edgetext");
      goto L0(r274);
    L2():
      r272 = dyn base19(<sym child>, "edgetext");
      goto L0(r272);
    };
    r276 = dyn asTxt2(p108);
    check L333() else D132();
  D118():
    deopt 484 [i75, r230];
  D130():
    deopt 546 [i82, r270];
  D132():
    deopt 552 [i85, r276];
  L311():
    c62 = `as.logical`(r230);
    if c62 then L312() else L53();
  L330():
    goto L57(i82, r270);
  L333():
    st edgeText = r276;
    getOption3 = ldf getOption;
    check L334() else D133();
  D133():
    deopt 555 [i85];
  L53():
    goto L54(i75);
  L54(i81):
    strwidth = ldf strwidth;
    check L316() else D121();
  L312():
    cat4 = ldf cat;
    check L313() else D119();
  L334():
    r277 = dyn getOption3("verbose");
    check L335() else D134();
  D119():
    deopt 486 [i75];
  D121():
    deopt 494 [i81, 0.6];
  D134():
    deopt 557 [i85, r277];
  L313():
    p91 = prom<V +>{
      format = ldf format;
      p90 = prom<V +>{
        nodeText2 = ld nodeText;
        nodeText3 = force? nodeText2;
        checkMissing(nodeText3);
        return nodeText3;
      };
      r232 = dyn format(p90);
      return r232;
    };
    r234 = dyn cat4("-- with \"label\"", p91);
    check L314() else D120();
  L316():
    p92 = prom<V +>{
      nodeText4 = ld nodeText;
      nodeText5 = force? nodeText4;
      checkMissing(nodeText5);
      return nodeText5;
    };
    p93 = prom<V +>{
      lab_cex6 = ld `lab.cex`;
      lab_cex7 = force? lab_cex6;
      checkMissing(lab_cex7);
      return lab_cex7;
    };
    r238 = dyn strwidth[, cex](p92, p93);
    check L317() else D122();
  L335():
    c65 = `as.logical`(r277);
    if c65 then L336() else L59();
  D120():
    deopt 489 [i75, r234];
  D122():
    deopt 498 [i81, 0.6, r238];
  L59():
    goto L60(i85);
  L60(i93):
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L340() else L341();
  L314():
    goto L54(i75);
  L317():
    r239 = `*`(0.6, r238);
    r240 = `/`(r239, 2.0);
    st hln = r240;
    strheight = ldf strheight;
    check L318() else D123();
  L336():
    cat5 = ldf cat;
    check L337() else D135();
  D123():
    deopt 505 [i81, 1.5];
  D135():
    deopt 559 [i85];
  L61(i96, r284):
    r285 = `!`(r284);
    c67 = `as.logical`(r285);
    if c67 then L343() else L62();
  L318():
    p94 = prom<V +>{
      nodeText6 = ld nodeText;
      nodeText7 = force? nodeText6;
      checkMissing(nodeText7);
      return nodeText7;
    };
    p95 = prom<V +>{
      lab_cex8 = ld `lab.cex`;
      lab_cex9 = force? lab_cex8;
      checkMissing(lab_cex9);
      return lab_cex9;
    };
    r243 = dyn strheight[, cex](p94, p95);
    check L319() else D124();
  L337():
    p110 = prom<V +>{
      format1 = ldf format;
      p109 = prom<V +>{
        edgeText = ld edgeText;
        edgeText1 = force? edgeText;
        checkMissing(edgeText1);
        return edgeText1;
      };
      r279 = dyn format1(p109);
      return r279;
    };
    r281 = dyn cat5("-- with \"edgetext\"", p110);
    check L338() else D136();
  L340():
    vln4 = ld vln;
    check L342() else D137();
  L341():
    r283 = dyn base20(<sym vln>);
    goto L61(i93, r283);
  D124():
    deopt 509 [i81, 1.5, r243];
  D136():
    deopt 562 [i85, r281];
  D137():
    deopt 566 [i93, vln4];
  L62():
    type5 = ld type;
    check L359() else D150();
  L65(i102):
    Xtract12 = ldf Xtract;
    check L367() else D156();
  L319():
    r244 = `*`(1.5, r243);
    r245 = `/`(r244, 2.0);
    st vln = r245;
    rect = ldf rect;
    check L320() else D125();
  L338():
    goto L60(i85);
  L342():
    vln5 = force? vln4;
    checkMissing(vln5);
    c66 = `==`(vln5, NULL);
    goto L61(i93, c66);
  L343():
    type3 = ld type;
    check L344() else D138();
  D125():
    deopt 515 [i81];
  D138():
    deopt 570 [i96, type3];
  D150():
    deopt 604 [i96, type5];
  D156():
    deopt 625 [i102];
  L320():
    p96 = prom<V +>{
      xBot8 = ld xBot;
      xBot9 = force? xBot8;
      checkMissing(xBot9);
      hln = ld hln;
      hln1 = force? hln;
      checkMissing(hln1);
      r246 = `-`(xBot9, hln1);
      return r246;
    };
    p97 = prom<V +>{
      yBot8 = ld yBot;
      yBot9 = force? yBot8;
      checkMissing(yBot9);
      return yBot9;
    };
    p98 = prom<V +>{
      xBot10 = ld xBot;
      xBot11 = force? xBot10;
      checkMissing(xBot11);
      hln2 = ld hln;
      hln3 = force? hln2;
      checkMissing(hln3);
      r249 = `+`(xBot11, hln3);
      return r249;
    };
    p99 = prom<V +>{
      yBot10 = ld yBot;
      yBot11 = force? yBot10;
      checkMissing(yBot11);
      vln = ld vln;
      vln1 = force? vln;
      checkMissing(vln1);
      r251 = `*`(2.0, vln1);
      r252 = `+`(yBot11, r251);
      return r252;
    };
    p100 = prom<V +>{
      p_col = ld `p.col`;
      p_col1 = force? p_col;
      checkMissing(p_col1);
      return p_col1;
    };
    r255 = dyn rect[, , , , col](p96, p97, p98, p99, p100);
    check L321() else D126();
  L344():
    type4 = force? type3;
    checkMissing(type4);
    r286 = `==`(type4, "triangle");
    c68 = `as.logical`(r286);
    if c68 then L345() else L63();
  L359():
    type6 = force? type5;
    checkMissing(type6);
    r300 = `==`(type6, "triangle");
    c69 = `as.logical`(r300);
    if c69 then L360() else L66();
  L367():
    p111 = prom<V +>{
      ePar6 = ld ePar;
      ePar7 = force? ePar6;
      checkMissing(ePar7);
      return ePar7;
    };
    p112 = prom<V +>{
      i106 = ld i;
      i107 = force? i106;
      checkMissing(i107);
      return i107;
    };
    r308 = dyn Xtract12[, , default, ]("p.col", p111, "white", p112);
    check L368() else D157();
  D126():
    deopt 522 [i81, r255];
  D157():
    deopt 631 [i102, r308];
  L63():
    xBot18 = ld xBot;
    check L354() else D146();
  L64(i101, r294):
    st mx = r294;
    yTop20 = ld yTop;
    check L355() else D147();
  L66():
    xBot22 = ld xBot;
    check L364() else D153();
  L67(i105, r303):
    st mx = r303;
    yTop22 = ld yTop;
    check L365() else D154();
  L321():
    text1 = ldf text;
    check L322() else D127();
  L345():
    xTop14 = ld xTop;
    check L346() else D139();
  L360():
    xTop18 = ld xTop;
    check L361() else D151();
  L368():
    st `p.col` = r308;
    Xtract13 = ldf Xtract;
    check L369() else D158();
  D127():
    deopt 524 [i81];
  D139():
    deopt 574 [i96, xTop14];
  D146():
    deopt 590 [i96, xBot18];
  D147():
    deopt 593 [i101, yTop20];
  D151():
    deopt 608 [i96, xTop18];
  D153():
    deopt 614 [i96, xBot22];
  D154():
    deopt 617 [i105, yTop22];
  D158():
    deopt 634 [i102];
  L322():
    p101 = prom<V +>{
      xBot12 = ld xBot;
      xBot13 = force? xBot12;
      checkMissing(xBot13);
      return xBot13;
    };
    p102 = prom<V +>{
      yBot12 = ld yBot;
      yBot13 = force? yBot12;
      checkMissing(yBot13);
      vln2 = ld vln;
      vln3 = force? vln2;
      checkMissing(vln3);
      r257 = `+`(yBot13, vln3);
      return r257;
    };
    p103 = prom<V +>{
      nodeText8 = ld nodeText;
      nodeText9 = force? nodeText8;
      checkMissing(nodeText9);
      return nodeText9;
    };
    p104 = prom<V +>{
      lab_xpd2 = ld `lab.xpd`;
      lab_xpd3 = force? lab_xpd2;
      checkMissing(lab_xpd3);
      return lab_xpd3;
    };
    p105 = prom<V +>{
      lab_cex10 = ld `lab.cex`;
      lab_cex11 = force? lab_cex10;
      checkMissing(lab_cex11);
      return lab_cex11;
    };
    p106 = prom<V +>{
      lab_col2 = ld `lab.col`;
      lab_col3 = force? lab_col2;
      checkMissing(lab_col3);
      return lab_col3;
    };
    p107 = prom<V +>{
      lab_font2 = ld `lab.font`;
      lab_font3 = force? lab_font2;
      checkMissing(lab_font3);
      return lab_font3;
    };
    r264 = dyn text1[, , , xpd, cex, col, font](p101, p102, p103, p104, p105, p106, p107);
    check L323() else D128();
  L346():
    xTop15 = force? xTop14;
    checkMissing(xTop15);
    xBot14 = ld xBot;
    check L347() else D140();
  L354():
    xBot19 = force? xBot18;
    checkMissing(xBot19);
    goto L64(i96, xBot19);
  L355():
    yTop21 = force? yTop20;
    checkMissing(yTop21);
    yBot16 = ld yBot;
    check L356() else D148();
  L361():
    xTop19 = force? xTop18;
    checkMissing(xTop19);
    xBot20 = ld xBot;
    check L362() else D152();
  L364():
    xBot23 = force? xBot22;
    checkMissing(xBot23);
    goto L67(i96, xBot23);
  L365():
    yTop23 = force? yTop22;
    checkMissing(yTop23);
    yBot18 = ld yBot;
    check L366() else D155();
  L369():
    p113 = prom<V +>{
      ePar8 = ld ePar;
      ePar9 = force? ePar8;
      checkMissing(ePar9);
      return ePar9;
    };
    p114 = prom<V +>{
      par7 = ldf par;
      r310 = dyn par7("fg");
      return r310;
    };
    p115 = prom<V +>{
      i108 = ld i;
      i109 = force? i108;
      checkMissing(i109);
      return i109;
    };
    r313 = dyn Xtract13[, , default, ]("p.border", p113, p114, p115);
    check L370() else D159();
  D128():
    deopt 536 [i81, r264];
  D140():
    deopt 575 [i96, xTop15, xBot14];
  D148():
    deopt 594 [i101, yTop21, yBot16];
  D152():
    deopt 609 [i96, xTop19, xBot20];
  D155():
    deopt 618 [i105, yTop23, yBot18];
  D159():
    deopt 640 [i102, r313];
  L323():
    goto L55(i81);
  L347():
    xBot15 = force? xBot14;
    checkMissing(xBot15);
    r287 = `+`(xTop15, xBot15);
    xTop16 = ld xTop;
    check L348() else D141();
  L356():
    yBot17 = force? yBot16;
    checkMissing(yBot17);
    r295 = `+`(yTop21, yBot17);
    vln8 = ld vln;
    check L357() else D149();
  L362():
    xBot21 = force? xBot20;
    checkMissing(xBot21);
    r301 = `+`(xTop19, xBot21);
    r302 = `/`(r301, 2.0);
    goto L67(i96, r302);
  L366():
    yBot19 = force? yBot18;
    checkMissing(yBot19);
    r304 = `+`(yTop23, yBot19);
    r305 = `/`(r304, 2.0);
    st my = r305;
    goto L65(i105);
  L370():
    st `p.border` = r313;
    Xtract14 = ldf Xtract;
    check L371() else D160();
  D141():
    deopt 577 [i96, r287, xTop16];
  D149():
    deopt 597 [i101, r295, 2.0, vln8];
  D160():
    deopt 643 [i102];
  L348():
    xTop17 = force? xTop16;
    checkMissing(xTop17);
    xBot16 = ld xBot;
    check L349() else D142();
  L357():
    vln9 = force? vln8;
    checkMissing(vln9);
    r296 = `*`(2.0, vln9);
    r297 = `+`(r295, r296);
    r298 = `/`(r297, 2.0);
    st my = r298;
    goto L65(i101);
  L371():
    p116 = prom<V +>{
      ePar10 = ld ePar;
      ePar11 = force? ePar10;
      checkMissing(ePar11);
      return ePar11;
    };
    p117 = prom<V +>{
      lwd = ld lwd;
      lwd1 = force? lwd;
      checkMissing(lwd1);
      return lwd1;
    };
    p118 = prom<V +>{
      i110 = ld i;
      i111 = force? i110;
      checkMissing(i111);
      return i111;
    };
    r317 = dyn Xtract14[, , default, ]("p.lwd", p116, p117, p118);
    check L372() else D161();
  D142():
    deopt 578 [i96, r287, xTop17, xBot16];
  D161():
    deopt 649 [i102, r317];
  L349():
    xBot17 = force? xBot16;
    checkMissing(xBot17);
    r288 = `-`(xTop17, xBot17);
    yTop18 = ld yTop;
    check L350() else D143();
  L372():
    st `p.lwd` = r317;
    Xtract15 = ldf Xtract;
    check L373() else D162();
  D143():
    deopt 580 [i96, r287, r288, yTop18];
  D162():
    deopt 652 [i102];
  L350():
    yTop19 = force? yTop18;
    checkMissing(yTop19);
    yBot14 = ld yBot;
    check L351() else D144();
  L373():
    p119 = prom<V +>{
      ePar12 = ld ePar;
      ePar13 = force? ePar12;
      checkMissing(ePar13);
      return ePar13;
    };
    p120 = prom<V +>{
      lty = ld lty;
      lty1 = force? lty;
      checkMissing(lty1);
      return lty1;
    };
    p121 = prom<V +>{
      i112 = ld i;
      i113 = force? i112;
      checkMissing(i113);
      return i113;
    };
    r321 = dyn Xtract15[, , default, ]("p.lty", p119, p120, p121);
    check L374() else D163();
  D144():
    deopt 581 [i96, r287, r288, yTop19, yBot14];
  D163():
    deopt 658 [i102, r321];
  L351():
    yBot15 = force? yBot14;
    checkMissing(yBot15);
    r289 = `-`(yTop19, yBot15);
    r290 = `/`(r288, r289);
    vln6 = ld vln;
    check L352() else D145();
  L374():
    st `p.lty` = r321;
    Xtract16 = ldf Xtract;
    check L375() else D164();
  D145():
    deopt 584 [i96, r287, r290, vln6];
  D164():
    deopt 661 [i102];
  L352():
    vln7 = force? vln6;
    checkMissing(vln7);
    r291 = `*`(r290, vln7);
    r292 = `+`(r287, r291);
    r293 = `/`(r292, 2.0);
    goto L64(i96, r293);
  L375():
    p122 = prom<V +>{
      ePar14 = ld ePar;
      ePar15 = force? ePar14;
      checkMissing(ePar15);
      return ePar15;
    };
    p123 = prom<V +>{
      col2 = ld col;
      col3 = force? col2;
      checkMissing(col3);
      return col3;
    };
    p124 = prom<V +>{
      i114 = ld i;
      i115 = force? i114;
      checkMissing(i115);
      return i115;
    };
    r325 = dyn Xtract16[, , default, ]("t.col", p122, p123, p124);
    check L376() else D165();
  D165():
    deopt 667 [i102, r325];
  L376():
    st `t.col` = r325;
    Xtract17 = ldf Xtract;
    check L377() else D166();
  D166():
    deopt 670 [i102];
  L377():
    p125 = prom<V +>{
      ePar16 = ld ePar;
      ePar17 = force? ePar16;
      checkMissing(ePar17);
      return ePar17;
    };
    p126 = prom<V +>{
      i116 = ld i;
      i117 = force? i116;
      checkMissing(i117);
      return i117;
    };
    r328 = dyn Xtract17[, , default, ]("t.cex", p125, 1.0, p126);
    check L378() else D167();
  D167():
    deopt 676 [i102, r328];
  L378():
    st `t.cex` = r328;
    Xtract18 = ldf Xtract;
    check L379() else D168();
  D168():
    deopt 679 [i102];
  L379():
    p127 = prom<V +>{
      ePar18 = ld ePar;
      ePar19 = force? ePar18;
      checkMissing(ePar19);
      return ePar19;
    };
    p128 = prom<V +>{
      par8 = ldf par;
      r330 = dyn par8("font");
      return r330;
    };
    p129 = prom<V +>{
      i118 = ld i;
      i119 = force? i118;
      checkMissing(i119);
      return i119;
    };
    r333 = dyn Xtract18[, , default, ]("t.font", p127, p128, p129);
    check L380() else D169();
  D169():
    deopt 685 [i102, r333];
  L380():
    st `t.font` = r333;
    strheight1 = ldf strheight;
    check L381() else D170();
  D170():
    deopt 688 [i102];
  L381():
    p130 = prom<V +>{
      sym21 = ldf c;
      base21 = ldf c in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r335):
      return r335;
    L1():
      edgeText2 = ld edgeText;
      edgeText3 = force? edgeText2;
      checkMissing(edgeText3);
      c70 = ldf c in base;
      r336 = dyn c70(edgeText3, "h");
      goto L0(r336);
    L2():
      r334 = dyn base21(<sym edgeText>, "h");
      goto L0(r334);
    };
    p131 = prom<V +>{
      t_cex = ld `t.cex`;
      t_cex1 = force? t_cex;
      checkMissing(t_cex1);
      return t_cex1;
    };
    r339 = dyn strheight1[, cex](p130, p131);
    check L382() else D171();
  D171():
    deopt 692 [i102, r339];
  L382():
    r340 = `/`(r339, 2.0);
    st vlm = r340;
    strwidth1 = ldf strwidth;
    check L383() else D172();
  D172():
    deopt 697 [i102];
  L383():
    p132 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r342):
      return r342;
    L1():
      edgeText4 = ld edgeText;
      edgeText5 = force? edgeText4;
      checkMissing(edgeText5);
      c71 = ldf c in base;
      r343 = dyn c71(edgeText5, "m");
      goto L0(r343);
    L2():
      r341 = dyn base22(<sym edgeText>, "m");
      goto L0(r341);
    };
    p133 = prom<V +>{
      t_cex2 = ld `t.cex`;
      t_cex3 = force? t_cex2;
      checkMissing(t_cex3);
      return t_cex3;
    };
    r346 = dyn strwidth1[, cex](p132, p133);
    check L384() else D173();
  D173():
    deopt 701 [i102, r346];
  L384():
    r347 = `/`(r346, 2.0);
    st hlm = r347;
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L385() else L386();
  L68(i122, r349):
    st hl3 = r349;
    horiz5 = ld horiz;
    check L404() else D179();
  L385():
    hlm = ld hlm;
    check L387() else D174();
  L386():
    r348 = dyn base23(<lang `[`(hlm, 1)>, <lang `+`(`[`(hlm, 1), `[`(hlm, 2))>, <lang `[`(hlm, 1)>);
    goto L68(i102, r348);
  D174():
    deopt 707 [i102, hlm];
  D179():
    deopt 730 [i122, horiz5];
  L387():
    hlm1 = force? hlm;
    checkMissing(hlm1);
    c72 = `is.object`(hlm1);
    if c72 then L388() else L389(i102, hlm1);
  L404():
    horiz6 = force? horiz5;
    checkMissing(horiz6);
    c77 = `as.logical`(horiz6);
    if c77 then L405() else L73();
  L69(i126, dx25):
    hlm4 = ld hlm;
    check L391() else D175();
  L73():
    polygon1 = ldf polygon;
    check L411() else D184();
  L74(i141, r386):
    goto L75(i141);
  L388():
    dr16 = tryDispatchBuiltin.1("[", hlm1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L390() else L389(i102, dr16);
  L389(i124, hlm3):
    __3 = ldf `[` in base;
    r350 = dyn __3(hlm3, 1);
    goto L69(i124, r350);
  L405():
    polygon = ldf polygon;
    check L406() else D180();
  D175():
    deopt 712 [i126, hlm4];
  D180():
    deopt 733 [i122];
  D184():
    deopt 758 [i122];
  L390():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L69(i102, dx24);
  L391():
    hlm5 = force? hlm4;
    checkMissing(hlm5);
    c73 = `is.object`(hlm5);
    if c73 then L392() else L393(i126, hlm5);
  L406():
    p134 = prom<V +>{
      my = ld my;
      my1 = force? my;
      checkMissing(my1);
      sym24 = ldf c;
      base24 = ldf c in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L1() else L2();
    L0(my4, r357):
      r360 = `+`(my4, r357);
      return r360;
    L1():
      hl3 = ld hl3;
      hl4 = force? hl3;
      checkMissing(hl4);
      r358 = `-`(<missing>, hl4);
      hl5 = ld hl3;
      hl6 = force? hl5;
      checkMissing(hl6);
      c78 = ldf c in base;
      r359 = dyn c78(r358, hl6);
      goto L0(my1, r359);
    L2():
      r356 = dyn base24(<lang `-`(hl3)>, <sym hl3>);
      goto L0(my1, r356);
    };
    p135 = prom<V +>{
      mx = ld mx;
      mx1 = force? mx;
      checkMissing(mx1);
      sym25 = ldf sum;
      base25 = ldf sum in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L2() else L3();
    L0(mx4, r363):
      sym26 = ldf c;
      base26 = ldf c in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L4() else L5();
    L2():
      vlm = ld vlm;
      vlm1 = force? vlm;
      checkMissing(vlm1);
      sum = ldf sum in base;
      r364 = dyn sum(vlm1);
      goto L0(mx1, r364);
    L3():
      r362 = dyn base25(<sym vlm>);
      goto L0(mx1, r362);
    L1(mx7, r368, r369):
      r371 = `*`(r368, r369);
      r372 = `+`(mx7, r371);
      return r372;
    L4():
      c79 = ldf c in base;
      r370 = dyn c79(<int -1, 0, 1>, <int 1, 0, -1>);
      goto L1(mx4, r363, r370);
    L5():
      r367 = dyn base26(<lang `:`(`-`(1), 1)>, <lang `:`(1, `-`(1))>);
      goto L1(mx4, r363, r367);
    };
    p136 = prom<V +>{
      p_col2 = ld `p.col`;
      p_col3 = force? p_col2;
      checkMissing(p_col3);
      return p_col3;
    };
    p137 = prom<V +>{
      p_border = ld `p.border`;
      p_border1 = force? p_border;
      checkMissing(p_border1);
      return p_border1;
    };
    p138 = prom<V +>{
      p_lty = ld `p.lty`;
      p_lty1 = force? p_lty;
      checkMissing(p_lty1);
      return p_lty1;
    };
    p139 = prom<V +>{
      p_lwd = ld `p.lwd`;
      p_lwd1 = force? p_lwd;
      checkMissing(p_lwd1);
      return p_lwd1;
    };
    r378 = dyn polygon[, , col, border, lty, lwd](p134, p135, p136, p137, p138, p139);
    check L407() else D181();
  L411():
    p146 = prom<V +>{
      mx10 = ld mx;
      mx11 = force? mx10;
      checkMissing(mx11);
      sym27 = ldf c;
      base27 = ldf c in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(mx14, r388):
      r391 = `+`(mx14, r388);
      return r391;
    L1():
      hl7 = ld hl3;
      hl8 = force? hl7;
      checkMissing(hl8);
      r389 = `-`(<missing>, hl8);
      hl9 = ld hl3;
      hl10 = force? hl9;
      checkMissing(hl10);
      c80 = ldf c in base;
      r390 = dyn c80(r389, hl10);
      goto L0(mx11, r390);
    L2():
      r387 = dyn base27(<lang `-`(hl3)>, <sym hl3>);
      goto L0(mx11, r387);
    };
    p147 = prom<V +>{
      my7 = ld my;
      my8 = force? my7;
      checkMissing(my8);
      sym28 = ldf sum;
      base28 = ldf sum in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L2() else L3();
    L0(my11, r394):
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L4() else L5();
    L2():
      vlm2 = ld vlm;
      vlm3 = force? vlm2;
      checkMissing(vlm3);
      sum1 = ldf sum in base;
      r395 = dyn sum1(vlm3);
      goto L0(my8, r395);
    L3():
      r393 = dyn base28(<sym vlm>);
      goto L0(my8, r393);
    L1(my14, r399, r400):
      r402 = `*`(r399, r400);
      r403 = `+`(my14, r402);
      return r403;
    L4():
      c81 = ldf c in base;
      r401 = dyn c81(<int -1, 0, 1>, <int 1, 0, -1>);
      goto L1(my11, r394, r401);
    L5():
      r398 = dyn base29(<lang `:`(`-`(1), 1)>, <lang `:`(1, `-`(1))>);
      goto L1(my11, r394, r398);
    };
    p148 = prom<V +>{
      p_col4 = ld `p.col`;
      p_col5 = force? p_col4;
      checkMissing(p_col5);
      return p_col5;
    };
    p149 = prom<V +>{
      p_border2 = ld `p.border`;
      p_border3 = force? p_border2;
      checkMissing(p_border3);
      return p_border3;
    };
    p150 = prom<V +>{
      p_lty2 = ld `p.lty`;
      p_lty3 = force? p_lty2;
      checkMissing(p_lty3);
      return p_lty3;
    };
    p151 = prom<V +>{
      p_lwd2 = ld `p.lwd`;
      p_lwd3 = force? p_lwd2;
      checkMissing(p_lwd3);
      return p_lwd3;
    };
    r409 = dyn polygon1[, , col, border, lty, lwd](p146, p147, p148, p149, p150, p151);
    check L412() else D185();
  D181():
    deopt 744 [i122, r378];
  D185():
    deopt 769 [i122, r409];
  L70(i130, dx27):
    hlm8 = ld hlm;
    check L395() else D176();
  L392():
    dr18 = tryDispatchBuiltin.1("[", hlm5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L394() else L393(i126, dr18);
  L393(i128, hlm7):
    __4 = ldf `[` in base;
    r351 = dyn __4(hlm7, 1);
    goto L70(i128, r351);
  L407():
    text2 = ldf text;
    check L408() else D182();
  L412():
    text3 = ldf text;
    check L413() else D186();
  D176():
    deopt 716 [i130, dx27, hlm8];
  D182():
    deopt 746 [i122];
  D186():
    deopt 771 [i122];
  L394():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L70(i126, dx26);
  L395():
    hlm9 = force? hlm8;
    checkMissing(hlm9);
    c74 = `is.object`(hlm9);
    if c74 then L396() else L397(i130, dx27, hlm9);
  L408():
    p140 = prom<V +>{
      my5 = ld my;
      my6 = force? my5;
      checkMissing(my6);
      return my6;
    };
    p141 = prom<V +>{
      mx8 = ld mx;
      mx9 = force? mx8;
      checkMissing(mx9);
      return mx9;
    };
    p142 = prom<V +>{
      edgeText6 = ld edgeText;
      edgeText7 = force? edgeText6;
      checkMissing(edgeText7);
      return edgeText7;
    };
    p143 = prom<V +>{
      t_cex4 = ld `t.cex`;
      t_cex5 = force? t_cex4;
      checkMissing(t_cex5);
      return t_cex5;
    };
    p144 = prom<V +>{
      t_col = ld `t.col`;
      t_col1 = force? t_col;
      checkMissing(t_col1);
      return t_col1;
    };
    p145 = prom<V +>{
      t_font = ld `t.font`;
      t_font1 = force? t_font;
      checkMissing(t_font1);
      return t_font1;
    };
    r385 = dyn text2[, , , cex, col, font](p140, p141, p142, p143, p144, p145);
    check L409() else D183();
  L413():
    p152 = prom<V +>{
      mx15 = ld mx;
      mx16 = force? mx15;
      checkMissing(mx16);
      return mx16;
    };
    p153 = prom<V +>{
      my15 = ld my;
      my16 = force? my15;
      checkMissing(my16);
      return my16;
    };
    p154 = prom<V +>{
      edgeText8 = ld edgeText;
      edgeText9 = force? edgeText8;
      checkMissing(edgeText9);
      return edgeText9;
    };
    p155 = prom<V +>{
      t_cex6 = ld `t.cex`;
      t_cex7 = force? t_cex6;
      checkMissing(t_cex7);
      return t_cex7;
    };
    p156 = prom<V +>{
      t_col2 = ld `t.col`;
      t_col3 = force? t_col2;
      checkMissing(t_col3);
      return t_col3;
    };
    p157 = prom<V +>{
      t_font2 = ld `t.font`;
      t_font3 = force? t_font2;
      checkMissing(t_font3);
      return t_font3;
    };
    r416 = dyn text3[, , , cex, col, font](p152, p153, p154, p155, p156, p157);
    check L414() else D187();
  D183():
    deopt 756 [i122, r385];
  D187():
    deopt 781 [i122, r416];
  L71(i134, dx32, dx33):
    r353 = `+`(dx32, dx33);
    hlm12 = ld hlm;
    check L399() else D177();
  L396():
    dr20 = tryDispatchBuiltin.1("[", hlm9);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L398() else L397(i130, dx27, dr20);
  L397(i132, dx29, hlm11):
    __5 = ldf `[` in base;
    r352 = dyn __5(hlm11, 2);
    goto L71(i132, dx29, r352);
  L409():
    goto L74(i122, r385);
  L414():
    goto L74(i122, r416);
  D177():
    deopt 722 [i134, hlm12];
  L398():
    dx31 = getTryDispatchBuiltinValue(dr20);
    goto L71(i130, dx27, dx31);
  L399():
    hlm13 = force? hlm12;
    checkMissing(hlm13);
    c75 = `is.object`(hlm13);
    if c75 then L400() else L401(i134, hlm13);
  L72(i138, dx35):
    c76 = ldf c in base;
    r355 = dyn c76(dx25, r353, dx35);
    check L403() else D178();
  L400():
    dr22 = tryDispatchBuiltin.1("[", hlm13);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L402() else L401(i134, dr22);
  L401(i136, hlm15):
    __6 = ldf `[` in base;
    r354 = dyn __6(hlm15, 1);
    goto L72(i136, r354);
  D178():
    deopt 728 [i138, r355];
  L402():
    dx34 = getTryDispatchBuiltinValue(dr22);
    goto L72(i134, dx34);
  L403():
    goto L68(i138, r355);
  }
}
fun inner2837184312(nam, L, default, indx) {
  (reg nam:*, reg L:*, reg default:*, reg indx:*) -+> V { var nam:*, var L:*, var default:*, var indx:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg indx1:*, reg indx2:V, reg __:cls, reg r5:V |
    mkenv;
    st nam = nam;
    st L = L;
    st default = default;
    st indx = indx;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `is.object`(r1);
    if c then L4() else L5(r1);
  L2():
    rep = ldf rep in base;
    r2 = dyn rep(<lang if(`%in%`(nam, names(L)), `[[`(L, nam), default)>, <sym indx>);
    goto L0(r2);
  L3():
    r = dyn base[, `length.out`](<lang if(`%in%`(nam, names(L)), `[[`(L, nam), default)>, <sym indx>);
    goto L0(r);
  L1(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(r4):
    indx1 = ld indx;
    check L7() else D0();
  D0():
    deopt 3 [r4, indx1];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L7():
    indx2 = force? indx1;
    __ = ldf `[` in base;
    r5 = dyn __(r4, indx2);
    goto L1(r5);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg x3:*, reg x4:V, reg is_expression:cls, reg r4:V, reg c7:L, reg c8:V, reg c10:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c15:L, reg r6:V, reg x5:*, reg x6:V, reg c16:V, reg c17:L, reg c18:V, reg c20:L, reg x7:*, reg x8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r7:V, reg r8:V, reg x9:*, reg x10:V, reg as_character:cls, reg r9:V |
    mkenv;
    st x = x;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L1(c1) else L10();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(c2):
    c10 = `as.logical`(c2);
    if c10 then L3(c10) else L16();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L0(c);
  L10():
    sym1 = ldf `is.expression`;
    base1 = ldf `is.expression` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L2(c6, r3):
    c7 = `as.logical`(r3);
    c8 = `||`(c6, c7);
    goto L1(c8);
  L3(c11):
    c20 = `as.logical`(c11);
    if c20 then L21() else L5();
  L11():
    x3 = ld x;
    check L13() else D1();
  L12():
    r2 = dyn base1(<sym x>);
    goto L2(c1, r2);
  L16():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  D1():
    deopt 6 [c1, x3];
  L4(c15, r6):
    c17 = `as.logical`(r6);
    c18 = `||`(c15, c17);
    goto L3(c18);
  L5():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L13():
    x4 = force? x3;
    checkMissing(x4);
    is_expression = ldf `is.expression` in base;
    r4 = dyn is_expression(x4);
    check L14() else D2();
  L17():
    x5 = ld x;
    check L19() else D3();
  L18():
    r5 = dyn base2(<sym x>);
    goto L4(c10, r5);
  L21():
    x7 = ld x;
    check L22() else D4();
  D2():
    deopt 9 [c1, r4];
  D3():
    deopt 12 [c10, x5];
  D4():
    deopt 16 [x7];
  L6(r8):
    popenv;
    return r8;
  L14():
    goto L2(c1, r4);
  L19():
    x6 = force? x5;
    checkMissing(x6);
    c16 = `==`(x6, NULL);
    goto L4(c10, c16);
  L22():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  L24():
    x9 = ld x;
    check L26() else D5();
  L25():
    r7 = dyn base3(<sym x>);
    goto L6(r7);
  D5():
    deopt 20 [x9];
  L26():
    x10 = force? x9;
    checkMissing(x10);
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(x10);
    check L27() else D6();
  D6():
    deopt 23 [r9];
  L27():
    goto L6(r9);
  }
}
fun inner35005340(x0, y0, x1, y1) {
  (reg x0:*, reg y0:*, reg x1:*, reg y1:*) -+> V { var x0:*, var y0:*, var x1:*, var y1:*, reg horiz:*, reg horiz1:V, reg c:L, reg segments:cls, reg y2:*, reg y3:V, reg p:p(V +), reg x2:*, reg x3:V, reg p1:p(V +), reg y4:*, reg y5:V, reg p2:p(V +), reg x4:*, reg x5:V, reg p3:p(V +), reg col:*, reg col1:V, reg p4:p(V +), reg lty:*, reg lty1:V, reg p5:p(V +), reg lwd:*, reg lwd1:V, reg p6:p(V +), reg r7:V, reg segments1:cls, reg x6:*, reg x7:V, reg p7:p(V +), reg y6:*, reg y7:V, reg p8:p(V +), reg x8:*, reg x9:V, reg p9:p(V +), reg y8:*, reg y9:V, reg p10:p(V +), reg col2:*, reg col3:V, reg p11:p(V +), reg lty2:*, reg lty3:V, reg p12:p(V +), reg lwd2:*, reg lwd3:V, reg p13:p(V +), reg r15:V |
    mkenv;
    st x0 = x0;
    st y0 = y0;
    st x1 = x1;
    st y1 = y1;
    horiz = ld horiz;
    check L1() else D0();
  D0():
    deopt 0 [horiz];
  L1():
    horiz1 = force? horiz;
    checkMissing(horiz1);
    c = `as.logical`(horiz1);
    if c then L2() else L0();
  L0():
    segments1 = ldf segments;
    check L6() else D3();
  L2():
    segments = ldf segments;
    check L3() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 16 [];
  L3():
    p = prom<V +>{
      y2 = ld y0;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p1 = prom<V +>{
      x2 = ld x0;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p2 = prom<V +>{
      y4 = ld y1;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p3 = prom<V +>{
      x4 = ld x1;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p4 = prom<V +>{
      col = ld col;
      col1 = force? col;
      checkMissing(col1);
      return col1;
    };
    p5 = prom<V +>{
      lty = ld lty;
      lty1 = force? lty;
      checkMissing(lty1);
      return lty1;
    };
    p6 = prom<V +>{
      lwd = ld lwd;
      lwd1 = force? lwd;
      checkMissing(lwd1);
      return lwd1;
    };
    r7 = dyn segments[, , , , col, lty, lwd](p, p1, p2, p3, p4, p5, p6);
    check L4() else D2();
  L6():
    p7 = prom<V +>{
      x6 = ld x0;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p8 = prom<V +>{
      y6 = ld y0;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p9 = prom<V +>{
      x8 = ld x1;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    p10 = prom<V +>{
      y8 = ld y1;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    p11 = prom<V +>{
      col2 = ld col;
      col3 = force? col2;
      checkMissing(col3);
      return col3;
    };
    p12 = prom<V +>{
      lty2 = ld lty;
      lty3 = force? lty2;
      checkMissing(lty3);
      return lty3;
    };
    p13 = prom<V +>{
      lwd2 = ld lwd;
      lwd3 = force? lwd2;
      checkMissing(lwd3);
      return lwd3;
    };
    r15 = dyn segments1[, , , , col, lty, lwd](p7, p8, p9, p10, p11, p12, p13);
    check L7() else D4();
  D2():
    deopt 14 [r7];
  D4():
    deopt 27 [r15];
  L4():
    popenv;
    return r7;
  L7():
    popenv;
    return r15;
  }
}