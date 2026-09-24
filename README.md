# 🎒 Inventory Framework — Unreal Engine 5

> A data-driven inventory system for Unreal Engine 5, built with C++ and Blueprints. Items are defined through a **fragment-based architecture**, so new item behaviour can be added by composing data instead of creating new item classes.

![Engine](https://img.shields.io/badge/Engine-Unreal%20Engine%205-black?logo=unrealengine)
![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Language](https://img.shields.io/badge/Language-Blueprints-orange)
![Status](https://img.shields.io/badge/Status-Work%20in%20progress-yellow)
![Solo](https://img.shields.io/badge/Team-Solo%20Project-lightgrey)

---

## 🎮 Overview

The goal of this project is to build a reusable inventory framework where each item is described by a single **Item Definition** and a list of **Fragments**. Each fragment adds one piece of data or behaviour (world mesh, stacking, etc.), keeping item data modular and easy to extend from the editor.

---

## 🏗️ Architecture

| Class / Asset | Responsibility |
|---------------|----------------|
| `UItemDefinition` (C++) | Abstract, const item description: name, description, icon and an array of instanced fragments. Exposes `FindFragmentByClass` to Blueprints |
| `UInventoryItemFragment` (C++) | Abstract base class for all fragments (`EditInlineNew`, `DefaultToInstanced`) so they are configured inline in each item |
| `UInventoryItemFragment_WorldRepresentation` (C++) | Fragment with the item's world mesh and whether it can be dropped |
| `InventoryManagerComponent` (BP) | Holds the inventory, finds empty slots and handles adding, stacking and dropping items |
| `BP_PickUpItem` (BP) | World actor that can be picked up and added to the inventory |

---

## ✅ Implemented Features

- Item definitions in C++ extended by Blueprint item assets
- Fragment system with lookup by class (`FindFragmentByClass`)
- Pick up items from the world and drop them back using their world representation
- Stackable items: search for existing stacks and empty slots before adding
- Inventory UI that updates when the inventory changes
- Polish: header, effects and sounds

## 🚧 Work in Progress

This project is under active development. Next steps will be added here as the framework grows.

---

## 🛠️ Tech Stack

| Category | Technology |
|----------|------------|
| Engine | Unreal Engine 5 |
| Language | C++ + Blueprints |
| UI | UMG |

---

## 👤 Author

**Darío Calderón Tornero** — Gameplay Programmer (Unity & Unreal Engine 5)  
[Portfolio](https://dariogamedev.com) · [LinkedIn](https://www.linkedin.com/in/dariocalderontornero/) · [GitHub](https://github.com/DarioCalderonTornero)
