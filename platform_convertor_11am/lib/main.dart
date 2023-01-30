import 'package:flutter/material.dart';
import 'package:sizer/sizer.dart';

void main() {
  runApp(
    const MaterialApp(
      debugShowCheckedModeBanner: false,
      home: TabBarApp(),
    ),
  );
}

class TabBarApp extends StatefulWidget {
  const TabBarApp({Key? key}) : super(key: key);

  @override
  State<TabBarApp> createState() => _TabBarAppState();
}

class _TabBarAppState extends State<TabBarApp> with TickerProviderStateMixin {
  late TabController _tabController;

  List<Map> myTabs = [
    {
      'icon': Icons.chat,
      'label': "Chats",
    },
    {
      'icon': Icons.history_toggle_off,
      'label': "Story",
    },
    {
      'icon': Icons.call,
      'label': "Call",
    },
    {
      'icon': Icons.people,
      'label': "Groups",
    },
    {
      'icon': Icons.settings,
      'label': "Settings",
    },
    {
      'icon': Icons.person,
      'label': "Profile",
    },
  ];

  @override
  void initState() {
    super.initState();
    _tabController = TabController(
      length: myTabs.length,
      vsync: this,
      animationDuration: Duration(milliseconds: 3),
      initialIndex: 1,
    );
  }

  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    double h = size.height;
    double w = size.width;
    return Scaffold(
      appBar: AppBar(
        title: const Text("Tab Bar App"),
        bottom: TabBar(
          controller: _tabController,
          isScrollable: true,
          physics: const BouncingScrollPhysics(),
          indicatorSize: TabBarIndicatorSize.label,
          automaticIndicatorColorAdjustment: true,
          splashBorderRadius: BorderRadius.circular(30),
          unselectedLabelColor: Colors.grey,
          indicator: BoxDecoration(
              color: Colors.blue.shade800,
              border: Border.all(
                color: Colors.white,
              ),
              borderRadius: BorderRadius.circular(30)),
          padding: EdgeInsets.all(10),
          tabs: myTabs
              .map(
                (e) => Tab(
                  icon: Icon(e['icon']),
                  child: Container(
                    width: w / 4,
                    alignment: Alignment.center,
                    child: Text(
                      e['label'],
                    ),
                  ),
                ),
              )
              .toList(),
        ),
      ),
      body: TabBarView(
        controller: _tabController,
        physics: const BouncingScrollPhysics(),
        children: myTabs
            .map(
              (e) => Container(
                color: Colors.primaries[myTabs.indexOf(e) % 18].shade200,
                alignment: Alignment.center,
                child: Column(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    Icon(
                      e['icon'],
                      size: h * 0.2,
                      color: Colors.primaries[myTabs.indexOf(e) % 18],
                    ),
                    Text("This is ${e['label']} page."),
                  ],
                ),
              ),
            )
            .toList(),
      ),
    );
  }
}
