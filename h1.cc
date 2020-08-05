// Network topology
//
//  n1
//     \ p-p
//  .   \          p-p
//  .    n0 ----------------n31
//  .   /    
//     / p-p  
//  n30    
// 
// - Tracing of queues and packet receptions to file "h1.tr"

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/csma-module.h"
#include "ns3/internet-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/applications-module.h"
#include "ns3/ipv4-global-routing-helper.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("h1");

int 
main (int argc, char *argv[])
{
  // The below value configures the default behavior of global routing.
  // By default, it is disabled.  To respond to interface events, set to true
  Config::SetDefault ("ns3::Ipv4GlobalRouting::RespondToInterfaceEvents", BooleanValue (true));

  // Allow the user to override any of the defaults and the above
  // Bind ()s at run-time, via command-line arguments
  CommandLine cmd (__FILE__);
  cmd.Parse (argc, argv);

  NS_LOG_INFO ("Create nodes.");
  NodeContainer c;
  c.Create (32);
  // Define Input Nodes
  NodeContainer n1n0 = NodeContainer (c.Get (1), c.Get (0));
  NodeContainer n2n0 = NodeContainer (c.Get (2), c.Get (0));
  NodeContainer n3n0 = NodeContainer (c.Get (3), c.Get (0));
  NodeContainer n4n0 = NodeContainer (c.Get (4), c.Get (0));
  NodeContainer n5n0 = NodeContainer (c.Get (5), c.Get (0));
  NodeContainer n6n0 = NodeContainer (c.Get (6), c.Get (0));
  NodeContainer n7n0 = NodeContainer (c.Get (7), c.Get (0));
  NodeContainer n8n0 = NodeContainer (c.Get (8), c.Get (0));
  NodeContainer n9n0 = NodeContainer (c.Get (9), c.Get (0));
  NodeContainer n10n0 = NodeContainer (c.Get (10), c.Get (0));
  NodeContainer n11n0 = NodeContainer (c.Get (11), c.Get (0));
  NodeContainer n12n0 = NodeContainer (c.Get (12), c.Get (0));
  NodeContainer n13n0 = NodeContainer (c.Get (13), c.Get (0));
  NodeContainer n14n0 = NodeContainer (c.Get (14), c.Get (0));
  NodeContainer n15n0 = NodeContainer (c.Get (15), c.Get (0));
  NodeContainer n16n0 = NodeContainer (c.Get (16), c.Get (0));
  NodeContainer n17n0 = NodeContainer (c.Get (17), c.Get (0));
  NodeContainer n18n0 = NodeContainer (c.Get (18), c.Get (0));
  NodeContainer n19n0 = NodeContainer (c.Get (19), c.Get (0));
  NodeContainer n20n0 = NodeContainer (c.Get (20), c.Get (0));
  NodeContainer n21n0 = NodeContainer (c.Get (21), c.Get (0));
  NodeContainer n22n0 = NodeContainer (c.Get (22), c.Get (0));
  NodeContainer n23n0 = NodeContainer (c.Get (23), c.Get (0));
  NodeContainer n24n0 = NodeContainer (c.Get (24), c.Get (0));
  NodeContainer n25n0 = NodeContainer (c.Get (25), c.Get (0));
  NodeContainer n26n0 = NodeContainer (c.Get (26), c.Get (0));
  NodeContainer n27n0 = NodeContainer (c.Get (27), c.Get (0));
  NodeContainer n28n0 = NodeContainer (c.Get (28), c.Get (0));
  NodeContainer n29n0 = NodeContainer (c.Get (29), c.Get (0));
  NodeContainer n30n0 = NodeContainer (c.Get (30), c.Get (0));
  //Define Output Nodes
  NodeContainer n0n31 = NodeContainer (c.Get (0), c.Get (31));


  InternetStackHelper internet;
  internet.Install (c);

  // We create the channels first without any IP addressing information
  NS_LOG_INFO ("Create channels.");
  PointToPointHelper p2p;
  p2p.SetDeviceAttribute ("DataRate", StringValue ("100kbps"));
  p2p.SetChannelAttribute ("Delay", StringValue ("20ms"));
  NetDeviceContainer d1d0 = p2p.Install (n1n0);
  NetDeviceContainer d2d0 = p2p.Install (n2n0);
  NetDeviceContainer d3d0 = p2p.Install (n3n0);
  NetDeviceContainer d4d0 = p2p.Install (n4n0);
  NetDeviceContainer d5d0 = p2p.Install (n5n0);
  NetDeviceContainer d6d0 = p2p.Install (n6n0);
  NetDeviceContainer d7d0 = p2p.Install (n7n0);
  NetDeviceContainer d8d0 = p2p.Install (n8n0);
  NetDeviceContainer d9d0 = p2p.Install (n9n0);
  NetDeviceContainer d10d0 = p2p.Install (n11n0);
  NetDeviceContainer d11d0 = p2p.Install (n11n0);
  NetDeviceContainer d12d0 = p2p.Install (n12n0);
  NetDeviceContainer d13d0 = p2p.Install (n13n0);
  NetDeviceContainer d14d0 = p2p.Install (n14n0);
  NetDeviceContainer d15d0 = p2p.Install (n15n0);
  NetDeviceContainer d16d0 = p2p.Install (n16n0);
  NetDeviceContainer d17d0 = p2p.Install (n17n0);
  NetDeviceContainer d18d0 = p2p.Install (n18n0);
  NetDeviceContainer d19d0 = p2p.Install (n19n0);
  NetDeviceContainer d20d0 = p2p.Install (n20n0);
  NetDeviceContainer d21d0 = p2p.Install (n21n0);
  NetDeviceContainer d22d0 = p2p.Install (n22n0);
  NetDeviceContainer d23d0 = p2p.Install (n23n0);
  NetDeviceContainer d24d0 = p2p.Install (n24n0);
  NetDeviceContainer d25d0 = p2p.Install (n25n0);
  NetDeviceContainer d26d0 = p2p.Install (n26n0);
  NetDeviceContainer d27d0 = p2p.Install (n27n0);
  NetDeviceContainer d28d0 = p2p.Install (n28n0);
  NetDeviceContainer d29d0 = p2p.Install (n29n0);
  NetDeviceContainer d30d0 = p2p.Install (n30n0);

  p2p.SetDeviceAttribute ("DataRate", StringValue ("155Mbps"));
  p2p.SetChannelAttribute ("Delay", StringValue ("20ms"));
  NetDeviceContainer d0d31 = p2p.Install (n0n31);


  // Later, we add IP addresses.
  NS_LOG_INFO ("Assign IP Addresses.");
  Ipv4AddressHelper ipv4;

  ipv4.SetBase ("10.1.1.0", "255.255.255.0");
  Ipv4InterfaceContainer i1i0 = ipv4.Assign (d1d0);
  ipv4.SetBase ("10.1.2.0", "255.255.255.0");
  Ipv4InterfaceContainer i2i0 = ipv4.Assign (d2d0);
  ipv4.SetBase ("10.1.3.0", "255.255.255.0");
  Ipv4InterfaceContainer i3i0 = ipv4.Assign (d3d0);
  ipv4.SetBase ("10.1.4.0", "255.255.255.0");
  Ipv4InterfaceContainer i4i0 = ipv4.Assign (d4d0);
  ipv4.SetBase ("10.1.5.0", "255.255.255.0");
  Ipv4InterfaceContainer i5i0 = ipv4.Assign (d5d0);
  ipv4.SetBase ("10.1.6.0", "255.255.255.0");
  Ipv4InterfaceContainer i6i0 = ipv4.Assign (d6d0);
  ipv4.SetBase ("10.1.7.0", "255.255.255.0");
  Ipv4InterfaceContainer i7i0 = ipv4.Assign (d7d0);
  ipv4.SetBase ("10.1.8.0", "255.255.255.0");
  Ipv4InterfaceContainer i8i0 = ipv4.Assign (d8d0);
  ipv4.SetBase ("10.1.9.0", "255.255.255.0");
  Ipv4InterfaceContainer i9i0 = ipv4.Assign (d9d0);
  ipv4.SetBase ("10.1.10.0", "255.255.255.0");
  Ipv4InterfaceContainer i10i0 = ipv4.Assign (d10d0);
  ipv4.SetBase ("10.1.11.0", "255.255.255.0");
  Ipv4InterfaceContainer i11i0 = ipv4.Assign (d11d0);
  ipv4.SetBase ("10.1.12.0", "255.255.255.0");
  Ipv4InterfaceContainer i12i0 = ipv4.Assign (d12d0);
  ipv4.SetBase ("10.1.13.0", "255.255.255.0");
  Ipv4InterfaceContainer i13i0 = ipv4.Assign (d13d0);
  ipv4.SetBase ("10.1.14.0", "255.255.255.0");
  Ipv4InterfaceContainer i14i0 = ipv4.Assign (d14d0);
  ipv4.SetBase ("10.1.15.0", "255.255.255.0");
  Ipv4InterfaceContainer i15i0 = ipv4.Assign (d15d0);
  ipv4.SetBase ("10.1.16.0", "255.255.255.0");
  Ipv4InterfaceContainer i16i0 = ipv4.Assign (d16d0);
  ipv4.SetBase ("10.1.17.0", "255.255.255.0");
  Ipv4InterfaceContainer i17i0 = ipv4.Assign (d17d0);
  ipv4.SetBase ("10.1.18.0", "255.255.255.0");
  Ipv4InterfaceContainer i18i0 = ipv4.Assign (d18d0);
  ipv4.SetBase ("10.1.19.0", "255.255.255.0");
  Ipv4InterfaceContainer i19i0 = ipv4.Assign (d19d0);
  ipv4.SetBase ("10.1.20.0", "255.255.255.0");
  Ipv4InterfaceContainer i20i0 = ipv4.Assign (d20d0);
  ipv4.SetBase ("10.1.21.0", "255.255.255.0");
  Ipv4InterfaceContainer i21i0 = ipv4.Assign (d21d0);
  ipv4.SetBase ("10.1.22.0", "255.255.255.0");
  Ipv4InterfaceContainer i22i0 = ipv4.Assign (d22d0);
  ipv4.SetBase ("10.1.23.0", "255.255.255.0");
  Ipv4InterfaceContainer i23i0 = ipv4.Assign (d23d0);
  ipv4.SetBase ("10.1.24.0", "255.255.255.0");
  Ipv4InterfaceContainer i24i0 = ipv4.Assign (d24d0);
  ipv4.SetBase ("10.1.25.0", "255.255.255.0");
  Ipv4InterfaceContainer i25i0 = ipv4.Assign (d25d0);
  ipv4.SetBase ("10.1.26.0", "255.255.255.0");
  Ipv4InterfaceContainer i26i0 = ipv4.Assign (d26d0);
  ipv4.SetBase ("10.1.27.0", "255.255.255.0");
  Ipv4InterfaceContainer i27i0 = ipv4.Assign (d27d0);
  ipv4.SetBase ("10.1.28.0", "255.255.255.0");
  Ipv4InterfaceContainer i28i0 = ipv4.Assign (d28d0);
  ipv4.SetBase ("10.1.29.0", "255.255.255.0");
  Ipv4InterfaceContainer i29i0 = ipv4.Assign (d29d0);
  ipv4.SetBase ("10.1.30.0", "255.255.255.0");
  Ipv4InterfaceContainer i30i0 = ipv4.Assign (d30d0);

  ipv4.SetBase ("10.250.1.0", "255.255.255.0");
  ipv4.Assign (d0d31);

  // Create router nodes, initialize routing database and set up the routing
  // tables in the nodes.
  Ipv4GlobalRoutingHelper::PopulateRoutingTables ();

  // Create the OnOff application to send UDP datagrams of size
  NS_LOG_INFO ("Create Applications.");
  uint16_t port = 9;   // Discard port (RFC 863)

  OnOffHelper onoff1 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i1i0.GetAddress (1), port));
  onoff1.SetConstantRate (DataRate ("100kbps"));
  onoff1.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps1 = onoff1.Install (c.Get (1));
  apps1.Start (Seconds (0.0));
  apps1.Stop (Seconds (80.0));

  OnOffHelper onoff2 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i2i0.GetAddress (1), port));
  onoff2.SetConstantRate (DataRate ("100kbps"));
  onoff2.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps2 = onoff2.Install (c.Get (2));
  apps2.Start (Seconds (0.0));
  apps2.Stop (Seconds (80.0));

  OnOffHelper onoff3 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i3i0.GetAddress (1), port));
  onoff3.SetConstantRate (DataRate ("100kbps"));
  onoff3.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps3 = onoff3.Install (c.Get (3));
  apps3.Start (Seconds (0.0));
  apps3.Stop (Seconds (80.0));

  OnOffHelper onoff4 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i4i0.GetAddress (1), port));
  onoff4.SetConstantRate (DataRate ("100kbps"));
  onoff4.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps4 = onoff4.Install (c.Get (4));
  apps4.Start (Seconds (0.0));
  apps4.Stop (Seconds (80.0));

  OnOffHelper onoff5 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i5i0.GetAddress (1), port));
  onoff5.SetConstantRate (DataRate ("100kbps"));
  onoff5.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps5 = onoff5.Install (c.Get (5));
  apps5.Start (Seconds (0.0));
  apps5.Stop (Seconds (80.0));

  OnOffHelper onoff6 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i6i0.GetAddress (1), port));
  onoff6.SetConstantRate (DataRate ("100kbps"));
  onoff6.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps6 = onoff6.Install (c.Get (6));
  apps6.Start (Seconds (0.0));
  apps6.Stop (Seconds (80.0));

  OnOffHelper onoff7 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i7i0.GetAddress (1), port));
  onoff7.SetConstantRate (DataRate ("100kbps"));
  onoff7.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps7 = onoff7.Install (c.Get (7));
  apps7.Start (Seconds (0.0));
  apps7.Stop (Seconds (80.0));

  OnOffHelper onoff8 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i8i0.GetAddress (1), port));
  onoff8.SetConstantRate (DataRate ("100kbps"));
  onoff8.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps8 = onoff8.Install (c.Get (8));
  apps8.Start (Seconds (0.0));
  apps8.Stop (Seconds (80.0));

  OnOffHelper onoff9 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i9i0.GetAddress (1), port));
  onoff9.SetConstantRate (DataRate ("100kbps"));
  onoff9.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps9 = onoff9.Install (c.Get (9));
  apps9.Start (Seconds (0.0));
  apps9.Stop (Seconds (80.0));

  OnOffHelper onoff10 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i10i0.GetAddress (1), port));
  onoff10.SetConstantRate (DataRate ("100kbps"));
  onoff10.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps10 = onoff10.Install (c.Get (10));
  apps10.Start (Seconds (0.0));
  apps10.Stop (Seconds (80.0));

  OnOffHelper onoff11 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i11i0.GetAddress (1), port));
  onoff11.SetConstantRate (DataRate ("100kbps"));
  onoff11.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps11 = onoff11.Install (c.Get (11));
  apps11.Start (Seconds (0.0));
  apps11.Stop (Seconds (30.0));
  apps11.Start (Seconds (50.0));
  apps11.Stop (Seconds (80.0));

  OnOffHelper onoff12 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i12i0.GetAddress (1), port));
  onoff12.SetConstantRate (DataRate ("100kbps"));
  onoff12.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps12 = onoff12.Install (c.Get (12));
  apps12.Start (Seconds (0.0));
  apps12.Stop (Seconds (30.0));
  apps12.Start (Seconds (50.0));
  apps12.Stop (Seconds (80.0));

  OnOffHelper onoff13 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i13i0.GetAddress (1), port));
  onoff13.SetConstantRate (DataRate ("100kbps"));
  onoff13.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps13 = onoff13.Install (c.Get (13));
  apps13.Start (Seconds (0.0));
  apps13.Stop (Seconds (30.0));
  apps13.Start (Seconds (50.0));
  apps13.Stop (Seconds (80.0));

  OnOffHelper onoff14 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i14i0.GetAddress (1), port));
  onoff14.SetConstantRate (DataRate ("100kbps"));
  onoff14.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps14 = onoff14.Install (c.Get (14));
  apps14.Start (Seconds (0.0));
  apps14.Stop (Seconds (30.0));
  apps14.Start (Seconds (50.0));
  apps14.Stop (Seconds (80.0));

  OnOffHelper onoff15 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i15i0.GetAddress (1), port));
  onoff15.SetConstantRate (DataRate ("100kbps"));
  onoff15.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps15 = onoff15.Install (c.Get (15));
  apps15.Start (Seconds (0.0));
  apps15.Stop (Seconds (30.0));
  apps15.Start (Seconds (50.0));
  apps15.Stop (Seconds (80.0));

  OnOffHelper onoff16 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i16i0.GetAddress (1), port));
  onoff16.SetConstantRate (DataRate ("100kbps"));
  onoff16.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps16 = onoff16.Install (c.Get (16));
  apps16.Start (Seconds (0.0));
  apps16.Stop (Seconds (30.0));
  apps16.Start (Seconds (50.0));
  apps16.Stop (Seconds (80.0));

  OnOffHelper onoff17 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i17i0.GetAddress (1), port));
  onoff17.SetConstantRate (DataRate ("100kbps"));
  onoff17.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps17 = onoff17.Install (c.Get (17));
  apps17.Start (Seconds (0.0));
  apps17.Stop (Seconds (30.0));
  apps17.Start (Seconds (50.0));
  apps17.Stop (Seconds (80.0));

  OnOffHelper onoff18 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i18i0.GetAddress (1), port));
  onoff18.SetConstantRate (DataRate ("100kbps"));
  onoff18.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps18 = onoff18.Install (c.Get (18));
  apps18.Start (Seconds (0.0));
  apps18.Stop (Seconds (30.0));
  apps18.Start (Seconds (50.0));
  apps18.Stop (Seconds (80.0));

  OnOffHelper onoff19 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i19i0.GetAddress (1), port));
  onoff19.SetConstantRate (DataRate ("100kbps"));
  onoff19.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps19 = onoff19.Install (c.Get (19));
  apps19.Start (Seconds (0.0));
  apps19.Stop (Seconds (30.0));
  apps19.Start (Seconds (50.0));
  apps19.Stop (Seconds (80.0));

  OnOffHelper onoff20 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i20i0.GetAddress (1), port));
  onoff20.SetConstantRate (DataRate ("100kbps"));
  onoff20.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps20 = onoff20.Install (c.Get (20));
  apps20.Start (Seconds (0.0));
  apps20.Stop (Seconds (30.0));
  apps20.Start (Seconds (50.0));
  apps20.Stop (Seconds (80.0));

  OnOffHelper onoff21 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i21i0.GetAddress (1), port));
  onoff21.SetConstantRate (DataRate ("100kbps"));
  onoff21.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps21 = onoff21.Install (c.Get (21));
  apps21.Start (Seconds (0.0));
  apps21.Stop (Seconds (30.0));
  apps21.Start (Seconds (50.0));
  apps21.Stop (Seconds (80.0));

  OnOffHelper onoff22 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i22i0.GetAddress (1), port));
  onoff22.SetConstantRate (DataRate ("100kbps"));
  onoff22.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps22 = onoff22.Install (c.Get (22));
  apps22.Start (Seconds (0.0));
  apps22.Stop (Seconds (30.0));
  apps22.Start (Seconds (50.0));
  apps22.Stop (Seconds (80.0));

  OnOffHelper onoff23 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i23i0.GetAddress (1), port));
  onoff23.SetConstantRate (DataRate ("100kbps"));
  onoff23.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps23 = onoff23.Install (c.Get (23));
  apps23.Start (Seconds (0.0));
  apps23.Stop (Seconds (30.0));
  apps23.Start (Seconds (50.0));
  apps23.Stop (Seconds (80.0));

  OnOffHelper onoff24 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i24i0.GetAddress (1), port));
  onoff24.SetConstantRate (DataRate ("100kbps"));
  onoff24.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps24 = onoff24.Install (c.Get (24));
  apps24.Start (Seconds (0.0));
  apps24.Stop (Seconds (30.0));
  apps24.Start (Seconds (50.0));
  apps24.Stop (Seconds (80.0));

  OnOffHelper onoff25 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i25i0.GetAddress (1), port));
  onoff25.SetConstantRate (DataRate ("100kbps"));
  onoff25.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps25 = onoff25.Install (c.Get (25));
  apps25.Start (Seconds (0.0));
  apps25.Stop (Seconds (30.0));
  apps25.Start (Seconds (50.0));
  apps25.Stop (Seconds (80.0));

  OnOffHelper onoff26 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i26i0.GetAddress (1), port));
  onoff26.SetConstantRate (DataRate ("100kbps"));
  onoff26.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps26 = onoff26.Install (c.Get (26));
  apps26.Start (Seconds (0.0));
  apps26.Stop (Seconds (30.0));
  apps26.Start (Seconds (50.0));
  apps26.Stop (Seconds (80.0));

  OnOffHelper onoff27 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i27i0.GetAddress (1), port));
  onoff27.SetConstantRate (DataRate ("100kbps"));
  onoff27.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps27 = onoff27.Install (c.Get (27));
  apps27.Start (Seconds (0.0));
  apps27.Stop (Seconds (30.0));
  apps27.Start (Seconds (50.0));
  apps27.Stop (Seconds (80.0));

  OnOffHelper onoff28 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i28i0.GetAddress (1), port));
  onoff28.SetConstantRate (DataRate ("100kbps"));
  onoff28.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps28 = onoff28.Install (c.Get (28));
  apps28.Start (Seconds (0.0));
  apps28.Stop (Seconds (30.0));
  apps28.Start (Seconds (50.0));
  apps28.Stop (Seconds (80.0));

  OnOffHelper onoff29 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i29i0.GetAddress (1), port));
  onoff29.SetConstantRate (DataRate ("100kbps"));
  onoff29.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps29 = onoff29.Install (c.Get (29));
  apps29.Start (Seconds (0.0));
  apps29.Stop (Seconds (30.0));
  apps29.Start (Seconds (50.0));
  apps29.Stop (Seconds (80.0));

  OnOffHelper onoff30 ("ns3::UdpSocketFactory",
                     InetSocketAddress (i30i0.GetAddress (1), port));
  onoff30.SetConstantRate (DataRate ("100kbps"));
  onoff30.SetAttribute ("PacketSize", UintegerValue (50));
  ApplicationContainer apps30 = onoff30.Install (c.Get (30));
  apps30.Start (Seconds (0.0));
  apps30.Stop (Seconds (30.0));
  apps30.Start (Seconds (50.0));
  apps30.Stop (Seconds (80.0));




  // Create an optional packet sink to receive these packets
/*
  PacketSinkHelper sink1 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps1 = sink1.Install (c.Get (31));
  apps1.Start (Seconds (1.0));
  apps1.Stop (Seconds (8.0));

  PacketSinkHelper sink2 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps2 = sink2.Install (c.Get (31));
  apps2.Start (Seconds (1.0));
  apps2.Stop (Seconds (8.0));

  PacketSinkHelper sink3 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps3 = sink3.Install (c.Get (31));
  apps3.Start (Seconds (1.0));
  apps3.Stop (Seconds (8.0));

  PacketSinkHelper sink4 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps4 = sink4.Install (c.Get (31));
  apps4.Start (Seconds (1.0));
  apps4.Stop (Seconds (8.0));

  PacketSinkHelper sink5 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps5 = sink5.Install (c.Get (31));
  apps5.Start (Seconds (1.0));
  apps5.Stop (Seconds (8.0));

  PacketSinkHelper sink6 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps6 = sink6.Install (c.Get (31));
  apps6.Start (Seconds (1.0));
  apps6.Stop (Seconds (8.0));

  PacketSinkHelper sink7 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps7 = sink7.Install (c.Get (31));
  apps7.Start (Seconds (1.0));
  apps7.Stop (Seconds (8.0));

  PacketSinkHelper sink8 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps8 = sink8.Install (c.Get (31));
  apps8.Start (Seconds (1.0));
  apps8.Stop (Seconds (8.0));

  PacketSinkHelper sink9 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps9 = sink9.Install (c.Get (31));
  apps9.Start (Seconds (1.0));
  apps9.Stop (Seconds (8.0));

  PacketSinkHelper sink10 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps10 = sink10.Install (c.Get (31));
  apps10.Start (Seconds (1.0));
  apps10.Stop (Seconds (8.0));

  PacketSinkHelper sink11 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps11 = sink11.Install (c.Get (31));
  apps11.Start (Seconds (1.0));
  apps11.Stop (Seconds (8.0));

  PacketSinkHelper sink12 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps12 = sink12.Install (c.Get (31));
  apps12.Start (Seconds (1.0));
  apps12.Stop (Seconds (8.0));

  PacketSinkHelper sink13 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps13 = sink13.Install (c.Get (31));
  apps13.Start (Seconds (1.0));
  apps13.Stop (Seconds (8.0));

  PacketSinkHelper sink14 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps14 = sink14.Install (c.Get (31));
  apps14.Start (Seconds (1.0));
  apps14.Stop (Seconds (8.0));

  PacketSinkHelper sink15 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps15 = sink15.Install (c.Get (31));
  apps15.Start (Seconds (1.0));
  apps15.Stop (Seconds (8.0));

  PacketSinkHelper sink16 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps16 = sink16.Install (c.Get (31));
  apps16.Start (Seconds (1.0));
  apps16.Stop (Seconds (8.0));

  PacketSinkHelper sink17 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps17 = sink17.Install (c.Get (31));
  apps17.Start (Seconds (1.0));
  apps17.Stop (Seconds (8.0));

  PacketSinkHelper sink18 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps18 = sink18.Install (c.Get (31));
  apps18.Start (Seconds (1.0));
  apps18.Stop (Seconds (8.0));

  PacketSinkHelper sink19 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps19 = sink19.Install (c.Get (31));
  apps19.Start (Seconds (1.0));
  apps19.Stop (Seconds (8.0));

  PacketSinkHelper sink20 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps20 = sink20.Install (c.Get (31));
  apps20.Start (Seconds (1.0));
  apps20.Stop (Seconds (8.0));

  PacketSinkHelper sink21 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps21 = sink21.Install (c.Get (31));
  apps21.Start (Seconds (1.0));
  apps21.Stop (Seconds (8.0));

  PacketSinkHelper sink22 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps22 = sink22.Install (c.Get (31));
  apps22.Start (Seconds (1.0));
  apps22.Stop (Seconds (8.0));

  PacketSinkHelper sink23 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps23 = sink23.Install (c.Get (31));
  apps23.Start (Seconds (1.0));
  apps23.Stop (Seconds (8.0));

  PacketSinkHelper sink24 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps24 = sink24.Install (c.Get (31));
  apps24.Start (Seconds (1.0));
  apps24.Stop (Seconds (8.0));

  PacketSinkHelper sink25 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps25 = sink25.Install (c.Get (31));
  apps25.Start (Seconds (1.0));
  apps25.Stop (Seconds (8.0));

  PacketSinkHelper sink26 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps26 = sink26.Install (c.Get (31));
  apps26.Start (Seconds (1.0));
  apps26.Stop (Seconds (8.0));

  PacketSinkHelper sink27 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps27 = sink27.Install (c.Get (31));
  apps27.Start (Seconds (1.0));
  apps27.Stop (Seconds (8.0));

  PacketSinkHelper sink28 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps28 = sink28.Install (c.Get (31));
  apps28.Start (Seconds (1.0));
  apps28.Stop (Seconds (8.0));

  PacketSinkHelper sink29 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps29 = sink29.Install (c.Get (31));
  apps29.Start (Seconds (1.0));
  apps29.Stop (Seconds (8.0));

  PacketSinkHelper sink30 ("ns3::UdpSocketFactory",
                         Address (InetSocketAddress (Ipv4Address::GetAny (), port)));
  apps30 = sink30.Install (c.Get (31));
  apps30.Start (Seconds (1.0));
  apps30.Stop (Seconds (8.0));
*/


  AsciiTraceHelper ascii;
  Ptr<OutputStreamWrapper> stream = ascii.CreateFileStream ("h1.tr");
  p2p.EnableAsciiAll (stream);
  //csma.EnableAsciiAll (stream);
  internet.EnableAsciiIpv4All (stream);

  p2p.EnablePcapAll ("h1");
  //csma.EnablePcapAll ("dynamic-global-routing", false);
 
  Ptr<Node> n0 = c.Get (0);
  Ptr<Ipv4> ipv40 = n0->GetObject<Ipv4> ();
/*
  // The first ifIndex is 0 for loopback, then the first p2p is numbered 1,
  // then the next p2p is numbered 2
  uint32_t ipv4ifIndex1 = 2;

  Simulator::Schedule (Seconds (2),&Ipv4::SetDown,ipv41, ipv4ifIndex1);
  Simulator::Schedule (Seconds (4),&Ipv4::SetUp,ipv41, ipv4ifIndex1);

  Ptr<Node> n6 = c.Get (6);
  Ptr<Ipv4> ipv46 = n6->GetObject<Ipv4> ();
  // The first ifIndex is 0 for loopback, then the first p2p is numbered 1,
  // then the next p2p is numbered 2
  uint32_t ipv4ifIndex6 = 2;
  Simulator::Schedule (Seconds (6),&Ipv4::SetDown,ipv46, ipv4ifIndex6);
  Simulator::Schedule (Seconds (8),&Ipv4::SetUp,ipv46, ipv4ifIndex6);

  Simulator::Schedule (Seconds (12),&Ipv4::SetDown,ipv41, ipv4ifIndex1);
  Simulator::Schedule (Seconds (14),&Ipv4::SetUp,ipv41, ipv4ifIndex1);
*/
  // Trace routing tables 
  Ipv4GlobalRoutingHelper g;
  Ptr<OutputStreamWrapper> routingStream = Create<OutputStreamWrapper> ("h1.routes", std::ios::out);
  g.PrintRoutingTableAllAt (Seconds (8.0), routingStream);

  NS_LOG_INFO ("Run Simulation.");
  Simulator::Run ();
  Simulator::Destroy ();
  NS_LOG_INFO ("Done.");
}
